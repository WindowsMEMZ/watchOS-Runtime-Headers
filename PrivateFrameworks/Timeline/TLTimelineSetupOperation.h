//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 21.0.0.0.0
//
#ifndef TLTimelineSetupOperation_h
#define TLTimelineSetupOperation_h
@import Foundation;

#include "TLTimelineOperation.h"
#include "TLTimeline.h"

@class NSError;

@interface TLTimelineSetupOperation : TLTimelineOperation

@property (retain) TLTimeline *timeline;
@property (retain) NSError *setupError;
@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) unsigned long long entryLimit;

/* class methods */
+ (unsigned long long)relativePriority;

/* instance methods */
- (id)initWithIdentifiable:(id)identifiable;
- (id)initWithIdentifiable:(id)identifiable timeout:(double)timeout entryLimit:(unsigned long long)limit;
- (id)error;
- (void)main;
@end

#endif /* TLTimelineSetupOperation_h */
