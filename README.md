# LzmaSDKOjbcFramework

This is a LZMA compress Framework use by iOS platform. Based on [LzmaSDKObjC](https://github.com/OlehKulykov/LzmaSDKObjC)

Because the official SDK using cocoapods install, but when you don't want to use `use_frameworks!` on other pods, you can NOT using LzmaSDKObjC either. Error as below:

```
Codec was not compiled in or stripped by static linking. 
Make sure you are using 'use_frameworks!' and/or dynamic linking ...
```

**Cocoapods can *NOT* set `use_frameworks!` for specified pod.**


So I create a Framework object and build an iOS framework directly. Hope it help. 

## Steps to use it.

1. Run this command under Podfile
```
$ pod install
```

2. Open the xCode workspace project file, like this.
   ![](http://ww1.sinaimg.cn/large/006tNc79jw1fa152lbm1nj30ie0tqacp.jpg)


3. Archive and copy the `LzmaSDKObjC.framework` to your project.

Enjoy!
