//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 187.4.0.0.0
//
#ifndef MTTinting_Protocol_h
#define MTTinting_Protocol_h
@import Foundation;

@protocol MTTinting <NSObject>

@property (readonly, copy, nonatomic) NSDictionary *tintColorDescription;
@property (readonly, nonatomic) struct CGColor * tintColor;
@property (readonly, nonatomic) double tintAlpha;
@property (readonly, copy, nonatomic) NSString *tintColorName;
@property (readonly, nonatomic) long long tintColorUIStyle;

@end

#endif /* MTTinting_Protocol_h */
