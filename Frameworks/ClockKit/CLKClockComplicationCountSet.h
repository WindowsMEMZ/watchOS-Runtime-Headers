//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKClockComplicationCountSet_h
#define CLKClockComplicationCountSet_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSMutableOrderedSet, NSOrderedSet;

@interface CLKClockComplicationCountSet : NSObject<NSCopying>

@property (readonly, nonatomic) NSOrderedSet *orderedSet;

/* instance methods */
- (id)init;
- (void)appendCount:(id)count;
- (void)mergeSet:(id)set;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CLKClockComplicationCountSet_h */
