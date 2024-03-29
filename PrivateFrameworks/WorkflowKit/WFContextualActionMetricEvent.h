//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFContextualActionMetricEvent_h
#define WFContextualActionMetricEvent_h
@import Foundation;

#include "WFEvent.h"

@class NSString;

@interface WFContextualActionMetricEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) BOOL hasTrackpad;
@property (nonatomic) unsigned int itemCount;

/* class methods */
+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

/* instance methods */
@end

#endif /* WFContextualActionMetricEvent_h */
