//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPAnalyticsCoreAnalyticsHelper_h
#define CPAnalyticsCoreAnalyticsHelper_h
@import Foundation;

@interface CPAnalyticsCoreAnalyticsHelper : NSObject
/* class methods */
+ (void)sendCoreAnalyticsEvent:(id)event withPayload:(id)payload shouldSanitize:(BOOL)sanitize;
+ (void)analyticsSendEventLazy:(id)lazy payload:(id /* block */)payload;
+ (id)caCompatiblePayloadKey:(id)key;
+ (BOOL)isValidCoreAnalyticsValueType:(id)type;
+ (id)buildCACompatiblePayload:(id)payload;
@end

#endif /* CPAnalyticsCoreAnalyticsHelper_h */
