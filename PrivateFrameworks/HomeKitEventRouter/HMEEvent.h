//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMEEvent_h
#define HMEEvent_h
@import Foundation;

#include "HMEEventMetadata.h"

@class NSData;

@interface HMEEvent : NSObject

@property (readonly, copy, nonatomic) NSData *eventData;
@property (readonly, copy) NSData *encodedData;
@property (readonly) HMEEventMetadata *eventMetadata;

/* class methods */
+ (id)eventFromProtobuff:(id)protobuff;

/* instance methods */
- (id)initWithSubclassedEventMetadata:(id)metadata;
- (id)initWithEventData:(id)data;
- (id)initWithEventData:(id)data metadata:(id)metadata;
- (id)_initWithEventData:(id)data metadata:(id)metadata;
- (id)description;
- (id)pbEvent;
@end

#endif /* HMEEvent_h */
