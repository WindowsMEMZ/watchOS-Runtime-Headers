//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.8.10.0.0
//
#ifndef MTNumberDeresAction_h
#define MTNumberDeresAction_h
@import Foundation;

#include "MTTreatmentAction.h"

@class NSArray;

@interface MTNumberDeresAction : MTTreatmentAction

@property (nonatomic) double precision;
@property (retain, nonatomic) NSArray *buckets;

/* instance methods */
- (id)initWithField:(id)field configDictionary:(id)dictionary;
- (id)performAction:(id)action context:(id)context;
@end

#endif /* MTNumberDeresAction_h */
