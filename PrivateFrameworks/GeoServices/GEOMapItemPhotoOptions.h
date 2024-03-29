//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOMapItemPhotoOptions_h
#define GEOMapItemPhotoOptions_h
@import Foundation;

@interface GEOMapItemPhotoOptions : NSObject

@property (readonly, nonatomic) BOOL allowSmaller;
@property (readonly, nonatomic) long long preferredCropStyle;
@property (readonly, nonatomic) long long preferredFormat;

/* class methods */
+ (id)defaultPhotoOptionsWithAllowSmaller:(BOOL)smaller;
+ (id)defaultPhotoOptionsWithCropStyle:(long long)style;

/* instance methods */
- (id)initWithAllowSmaller:(BOOL)smaller cropStyle:(long long)style format:(long long)format;
@end

#endif /* GEOMapItemPhotoOptions_h */
