//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFOpenURLRouter_h
#define HFOpenURLRouter_h
@import Foundation;

@protocol HFApplicationURLHandling;

@interface HFOpenURLRouter : NSObject

@property (weak, nonatomic) NSObject<HFApplicationURLHandling> *applicationURLHandler;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)openURL:(id)url;
- (id)openSensitiveURL:(id)url;
- (void)_sendAnalyticsEventForURL:(id)url;
@end

#endif /* HFOpenURLRouter_h */
