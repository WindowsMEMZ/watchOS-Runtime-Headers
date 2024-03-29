//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFPersonalAutomationSuggestionEvent_h
#define WFPersonalAutomationSuggestionEvent_h
@import Foundation;

#include "WFEvent.h"

@class NSString;

@interface WFPersonalAutomationSuggestionEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *intentType;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL interacted;
@property (nonatomic) BOOL completed;
@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSString *triggerType;

/* class methods */
+ (Class)codableEventClass;

/* instance methods */
@end

#endif /* WFPersonalAutomationSuggestionEvent_h */
