#!/usr/bin/python
# -*- coding: utf-8 -*-
#
# This script file is build universal static library for iPhone device and simulator.
#
# Version: v1.0 Initial version.
# Author: Chen Jian <jian.chen@speedx.com>
#
import os

targetName = 'LzmaSDKObjC'
currentFilePath = os.getcwd()
libFileName = targetName
libFileNameSuffix = ".framework"
workspaceName = targetName + ".xcworkspace"
outputFilePath = currentFilePath + "/build/" + libFileName + libFileNameSuffix;
showVerbose = False

PodProjectScheme = "Pods-LzmaSDKObjC"

# Build static library for iOS devices.
def build_for_arch_device(): 
	# os.system("xcodebuild -target %s -sdk iphoneos -configuration Release"%(targetName))
	os.system("xcodebuild -workspace %s -scheme %s -sdk iphoneos -configuration Release"%(workspaceName, PodProjectScheme))
	os.system("xcodebuild -workspace %s -scheme %s -sdk iphoneos -configuration Release"%(workspaceName, targetName))

	return;

# Build static lib for iOS simulator.
def build_for_arch_simulator():
	# os.system("xcodebuild -target %s -sdk iphonesimulator -configuration Release"%(targetName))
	os.system("xcodebuild -workspace %s -scheme %s -sdk iphonesimulator -configuration Release"%(workspaceName, PodProjectScheme))
	os.system("xcodebuild -workspace %s -scheme %s -sdk iphonesimulator -configuration Release"%(workspaceName, targetName))
	

	return;

# Create the universal static library using the build for device and simulator.
def combine():
	simuLibFilePath = currentFilePath + "/build/Release-iphoneos/" + libFileName + libFileNameSuffix;
	deviceLibFilePath = currentFilePath + "/build/Release-iphonesimulator/" + libFileName + libFileNameSuffix;
	outputFilePath = currentFilePath + "/" + libFileName + libFileNameSuffix;
	os.system("lipo -create %s %s -o %s"%(simuLibFilePath, deviceLibFilePath, outputFilePath));

# Clean the build.
def clean():
	os.system("xcodebuild clean -sdk iphoneos");
	os.system("xcodebuild clean -sdk iphonesimulator");

	# Remove previous universal file if exist.
	os.system("rm -fr %s"%(outputFilePath));
	os.system("rm -fr %s/build"%(currentFilePath));
	return;

# Main method, control the main operation flow.
def main():
	# Clean previous build files
	clean();

	print '\nStart Build for simulator ...\n';
	build_for_arch_simulator();

	# print '\nStart Build for device ...'
	build_for_arch_device();

	# # Create the combined static library file.
	combine();

	return;
	

# Call it, Let's Rock'n'roll
main()