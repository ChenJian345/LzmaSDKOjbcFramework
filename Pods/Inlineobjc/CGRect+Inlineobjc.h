/*
 *   Copyright (c) 2015 - 2016 Kulykov Oleh <info@resident.name>
 *
 *   Permission is hereby granted, free of charge, to any person obtaining a copy
 *   of this software and associated documentation files (the "Software"), to deal
 *   in the Software without restriction, including without limitation the rights
 *   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *   copies of the Software, and to permit persons to whom the Software is
 *   furnished to do so, subject to the following conditions:
 *
 *   The above copyright notice and this permission notice shall be included in
 *   all copies or substantial portions of the Software.
 *
 *   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 *   THE SOFTWARE.
 */


#import <Foundation/Foundation.h>

#ifndef __CGRECT_INLINEOBJC_H__
#define __CGRECT_INLINEOBJC_H__ 1

#if defined(DEBUG) || defined(_DEBUG)
#ifndef DEBUG
#define DEBUG 1
#endif
#endif


/**
 @brief Sets top right origin of the rectangle.
 @param rectangle The target rectanle.
 @param topRightX The top right X coordinate of the updated rectange.
 @param topRightY The top right Y coordinate of the updated rectange.
 @return The new updated rectange.
 */
NS_INLINE CGRect CGRectSetTopRightOrigin(const CGRect rectangle,
										 const CGFloat topRightX,
										 const CGFloat topRightY)
{
	return CGRectMake(topRightX - rectangle.size.width,
					  topRightY,
					  rectangle.size.width,
					  rectangle.size.height);
}


/**
 @brief Sets top right origin of the rectangle.
 @param rectangle The target rectanle.
 @param topRight The top right coordinates of the updated rectange.
 @return The new updated rectange.
 */
NS_INLINE CGRect CGRectSetTopRightOriginPoint(const CGRect rectangle,
											  const CGPoint topRight)
{
	return CGRectMake(topRight.x - rectangle.size.width,
					  topRight.y,
					  rectangle.size.width,
					  rectangle.size.height);
}


/**
 @brief Sets bottom right origin of the rectangle.
 @param rectangle The target rectanle.
 @param bottomRightX The bottom right X coordinate of the updated rectange.
 @param bottomRightY The bottom right Y coordinate of the updated rectange.
 @return The new updated rectange.
 */
NS_INLINE CGRect CGRectSetBottomRightOrigin(const CGRect rectangle,
											const CGFloat bottomRightX,
											const CGFloat bottomRightY)
{
	return CGRectMake(bottomRightX - rectangle.size.width,
					  bottomRightY - rectangle.size.height,
					  rectangle.size.width,
					  rectangle.size.height);
}


/**
 @brief Sets bottom right origin of the rectangle.
 @param rectangle The target rectanle.
 @param bottomRight The bottom right coordinates of the updated rectange.
 @return The new updated rectange.
 */
NS_INLINE CGRect CGRectSetBottomRightOriginPoint(const CGRect rectangle,
												 const CGPoint bottomRight)
{
	return CGRectMake(bottomRight.x - rectangle.size.width,
					  bottomRight.y - rectangle.size.height,
					  rectangle.size.width,
					  rectangle.size.height);
}


/**
 @brief Sets bottom left origin of the rectangle.
 @param rectangle The target rectanle.
 @param bottomLeftX The bottom left X coordinate of the updated rectange.
 @param bottomLeftY The bottom left Y coordinate of the updated rectange.
 @return The new updated rectange.
 */
NS_INLINE CGRect CGRectSetBottomLeftOrigin(const CGRect rectangle,
										   const CGFloat bottomLeftX,
										   const CGFloat bottomLeftY)
{
	return CGRectMake(bottomLeftX,
					  bottomLeftY - rectangle.size.height,
					  rectangle.size.width,
					  rectangle.size.height);
}


/**
 @brief Sets bottom left origin of the rectangle.
 @param rectangle The target rectanle.
 @param bottomLeft The bottom left coordinates of the updated rectange.
 @return The new updated rectange.
 */
NS_INLINE CGRect CGRectSetBottomLeftOriginPoint(const CGRect rectangle,
												const CGPoint bottomLeft)
{
	return CGRectMake(bottomLeft.x,
					  bottomLeft.y - rectangle.size.height,
					  rectangle.size.width,
					  rectangle.size.height);
}


/**
 @brief Sets center of the rectangle.
 @param rectangle The target rectanle.
 @param centerX The center X coordinate of the updated rectange.
 @param centerY The center Y coordinate of the updated rectange.
 @return The new updated rectange.
 */
NS_INLINE CGRect CGRectSetCenter(const CGRect rectangle,
								 const CGFloat centerX,
								 const CGFloat centerY)
{
	return CGRectMake(centerX - rectangle.size.width / 2,
					  centerY - rectangle.size.height / 2,
					  rectangle.size.width,
					  rectangle.size.height);
}


/**
 @brief Sets center of the rectangle.
 @param rectangle The target rectanle.
 @param center The center coordinates of the updated rectange.
 @return The new updated rectange.
 */
NS_INLINE CGRect CGRectSetCenterPoint(const CGRect rectangle,
									  const CGPoint center)
{
	return CGRectMake(center.x - rectangle.size.width / 2,
					  center.y - rectangle.size.height / 2,
					  rectangle.size.width,
					  rectangle.size.height);
}


/**
 @brief Get center of the rectangle.
 @param rectangle The target rectanle.
 @return The center point of the rectange.
 */
NS_INLINE CGPoint CGRectGetCenter(const CGRect rectangle)
{
	return CGPointMake(rectangle.origin.x + rectangle.size.width / 2,
					   rectangle.origin.y + rectangle.size.height / 2);
}


#endif

