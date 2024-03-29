//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 494.4.6.3.2
//
#ifndef AAUIiCloudMediaUsageInfo_h
#define AAUIiCloudMediaUsageInfo_h
@import Foundation;

@class NSString, UIColor;

@interface AAUIiCloudMediaUsageInfo : NSObject

@property (retain, nonatomic) NSString *mediaType;
@property (retain, nonatomic) UIColor *representativeColor;
@property (nonatomic) float bytesUsed;
@property (retain, nonatomic) NSString *displayLabel;

/* instance methods */
- (id)initWithMediaType:(id)type representativeColor:(id)color bytesUsed:(float)used;
@end

#endif /* AAUIiCloudMediaUsageInfo_h */
