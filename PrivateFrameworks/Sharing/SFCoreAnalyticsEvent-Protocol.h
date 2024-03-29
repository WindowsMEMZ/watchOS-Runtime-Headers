//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFCoreAnalyticsEvent_Protocol_h
#define SFCoreAnalyticsEvent_Protocol_h
@import Foundation;

@protocol SFCoreAnalyticsEvent <NSObject>

@property (readonly, copy, nonatomic) NSDictionary *eventPayload;

/* class methods */
+ (id)eventName;
/* instance methods */
- (void)submitEvent;
@end

#endif /* SFCoreAnalyticsEvent_Protocol_h */
