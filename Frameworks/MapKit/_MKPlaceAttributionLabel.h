//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef _MKPlaceAttributionLabel_h
#define _MKPlaceAttributionLabel_h
@import Foundation;

@class NSString, UIImage;

@interface _MKPlaceAttributionLabel : NSObject

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double imageBaselineOffset;
@property (retain, nonatomic) NSString *imagePlaceholder;

/* instance methods */
- (id)attributionWithString:(id)string;
@end

#endif /* _MKPlaceAttributionLabel_h */
