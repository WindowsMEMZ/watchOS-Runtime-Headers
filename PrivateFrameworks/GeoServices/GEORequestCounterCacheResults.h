//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEORequestCounterCacheResults_h
#define GEORequestCounterCacheResults_h
@import Foundation;

#include "GEORequestCounterCacheResults-Protocol.h"
#include "GEOXPCSerializable-Protocol.h"

@class NSDate, NSDateInterval, NSString;

@interface GEORequestCounterCacheResults : NSObject<GEORequestCounterCacheResults, GEOXPCSerializable>

@property (readonly, nonatomic) NSString *appId;
@property (readonly, nonatomic) NSDateInterval *timeRange;
@property (readonly, nonatomic) int requestType;
@property (readonly, nonatomic) unsigned int cacheHitCount;
@property (readonly, nonatomic) unsigned int cacheMissCount;
@property (readonly, nonatomic) unsigned int cacheExpiredCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (nonatomic) int requestKindRaw;
@property (nonatomic) unsigned int cacheHitCount;
@property (nonatomic) unsigned int cacheMissCount;
@property (nonatomic) unsigned int cacheExpiredCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithXPCDictionary:(id)xpcdictionary error:(id *)error;
- (void)encodeToXPCDictionary:(id)xpcdictionary;
@end

#endif /* GEORequestCounterCacheResults_h */
