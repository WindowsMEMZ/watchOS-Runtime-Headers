//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLCoreAnalyticsEvent_h
#define PLCoreAnalyticsEvent_h
@import Foundation;

@class NSDictionary, NSMutableDictionary, NSString;

@interface PLCoreAnalyticsEvent : NSObject {
  /* instance variables */
  NSString *_event;
  NSMutableDictionary *_mutablePayload;
}

@property (readonly) NSDictionary *payload;

/* instance methods */
- (id)initWithEvent:(id)event payload:(id)payload;
- (id)description;
- (void)addKey:(id)key value:(id)value;
- (void)mergePayload:(id)payload;
- (void)removeKey:(id)key;
- (void)publish;
@end

#endif /* PLCoreAnalyticsEvent_h */
