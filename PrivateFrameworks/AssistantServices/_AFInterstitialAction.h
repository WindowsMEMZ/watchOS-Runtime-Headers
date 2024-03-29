//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef _AFInterstitialAction_h
#define _AFInterstitialAction_h
@import Foundation;

@class NSString;

@interface _AFInterstitialAction : NSObject

@property (readonly, nonatomic) long long phase;
@property (readonly, copy, nonatomic) NSString *displayKey;
@property (readonly, copy, nonatomic) NSString *speakableKey;
@property (readonly, nonatomic) double duration;

/* instance methods */
- (id)initWithPhase:(long long)phase displayKey:(id)key speakableKey:(id)key;
- (id)initWithDuration:(double)duration;
@end

#endif /* _AFInterstitialAction_h */
