//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 460.60.4.0.0
//
#ifndef BKMatchEvent_h
#define BKMatchEvent_h
@import Foundation;

#include "BKIdentity.h"

@interface BKMatchEvent : NSObject

@property (nonatomic) BOOL result;
@property (nonatomic) unsigned long long timeStamp;
@property (retain, nonatomic) BKIdentity *matchedIdentity;

/* class methods */
+ (id)matchEventWithDictionary:(id)dictionary device:(id)device error:(id *)error;

/* instance methods */
@end

#endif /* BKMatchEvent_h */
