//
//  Placehold+UIImageView.h
//  PlaceholdSDK
//
//  Created by Yossi on 18/03/15.
//  Copyright (c) 2015 Yossi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

extern NSString *const PHPhotoColorAttribteName;                        // Hex string or color, ex: red, blue, green, white. default: black.
extern NSString *const PHPhotoTextAttributeName;                        // Text for placeholder photo. default: photo size.
extern NSString *const PHPhotoWidthAttribteName;                        // Width for photo. default UIImageView width.
extern NSString *const PHPhotoHeightAttributeName;                      // Height for photo. default UIImageView height.
extern NSString *const PHPhotoRoundAttributeName;                       // Set image as rounded rect with width/height size. default: [NSNumber numberWithBool:NO].
extern NSString *const PHPhotoShowRetinaAttributeName;                  // Set image for retina display. default: [NSNumber numberWithBool:YES].
extern NSString *const PHPhotoShowActivityIndicatorViewAttributeName;   // Show UIActivityIndicatorView. default: [NSNumber numberWithBool:NO].

@interface UIImageView (PlaceholdPhotos)

typedef void(^completionBlock)(UIImage *image, NSError *error);
- (void)setPlaceholderImageWithAttributes:(NSDictionary*)attributes completion:(completionBlock)complete;
- (void)setPlaceholderImageWithAttributes:(NSDictionary*)attributes activityIndicatorView:(UIActivityIndicatorView*)aIndicator completion:(completionBlock)complete;
- (void)setPlaceholderImageWithAttributes:(NSDictionary*)attributes;
- (void)setPlaceholderImage;

@end

@interface Placehold : NSObject

@end
