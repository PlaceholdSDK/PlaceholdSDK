# PlaceholdSDK

#### PlaceholdSDK is an image placeholder library for iOS.

## How To Get Started
Simply download the SDK and add it to your project



## Usage

##### Attributes

```objectivec
PHPhotoColorAttribteName
PHPhotoTextAttributeName
PHPhotoWidthAttribteName
PHPhotoHeightAttributeName
PHPhotoRoundAttributeName
PHPhotoShowRetinaAttributeName
PHPhotoShowActivityIndicatorViewAttributeName
```

---

##### Default Placeholder Image

```objective-c
UIImageView *imageView = [[UIImageView alloc] init];
imageView.frame = IMAGE_VIEW_FRAME;
[imageView setPlaceholderImage];
```

---

##### Placeholder Image With Attributes

```objective-c
NSDictionary *attributes = @{
                            PHPhotoWidthAttribteName : @"50",
                            PHPhotoHeightAttributeName : @"50",
                            PHPhotoShowActivityIndicatorViewAttributeName : @YES,
                            PHPhotoShowRetinaAttributeName : @YES,
                            PHPhotoRoundAttributeName : @NO
                            };

UIImageView *imageView = [[UIImageView alloc] init];
imageView.frame = IMAGE_VIEW_FRAME;
[imageView setPlaceholderImageWithAttributes:attributes];
```

---

##### Placeholder Image With Attributes, UIActivityIndicatorView & Completion block

```objective-c
NSDictionary *attributes = @{
                            PHPhotoWidthAttribteName : @"50",
                            PHPhotoHeightAttributeName : @"50",
                            PHPhotoShowActivityIndicatorViewAttributeName : @YES,
                            PHPhotoShowRetinaAttributeName : @YES,
                            PHPhotoRoundAttributeName : @NO
                            };

UIActivityIndicatorView *indicator = [[UIActivityIndicatorView alloc] init];
    
UIImageView *imageView = [[UIImageView alloc] init];
imageView.frame = IMAGE_VIEW_FRAME;

[imageView setPlaceholderImageWithAttributes:attributes activityIndicatorView:indicator completion:^(UIImage *image, NSError *error) {
	NSLog(@"Image downloaded and set.");
}];
```

---

##### Placeholder Image With Attributes & Completion block

```objective-c
NSDictionary *attributes = @{
                            PHPhotoWidthAttribteName : @"50",
                            PHPhotoHeightAttributeName : @"50",
                            PHPhotoShowActivityIndicatorViewAttributeName : @YES,
                            PHPhotoShowRetinaAttributeName : @YES,
                            PHPhotoRoundAttributeName : @NO
                            };

UIActivityIndicatorView *indicator = [[UIActivityIndicatorView alloc] init];
    
UIImageView *imageView = [[UIImageView alloc] init];
imageView.frame = IMAGE_VIEW_FRAME;

[imageView setPlaceholderImageWithAttributes:attributes completion:^(UIImage *image, NSError *error) {
    NSLog(@"Image downloaded and set.");
}];
```

## Credits

PlaceholdSDK was originally created by Yuval Suede and Yossi Tsafar.

## Contact

Go to our website [http://placehold.photos](http://placehold.photos)

## License

PlaceholdSDK is available under the MIT license. See the LICENSE file for more info.