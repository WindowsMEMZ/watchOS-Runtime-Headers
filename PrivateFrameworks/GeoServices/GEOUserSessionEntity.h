//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOUserSessionEntity_h
#define GEOUserSessionEntity_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface GEOUserSessionEntity : NSObject<NSCopying>

@property (readonly, nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionID;
@property (readonly, nonatomic) unsigned int sequenceNumber;
@property (nonatomic) double sessionCreationTime;
@property (readonly, nonatomic) double sessionRelativeTimestamp;
@property (readonly, nonatomic) NSString *sessionEntityString;
@property (readonly, nonatomic) NSString *sessionIDString;
@property (readonly, nonatomic) NSString *sessionUUIDString;
@property (readonly, nonatomic) NSNumber *sessionIDLow;
@property (readonly, nonatomic) NSNumber *sessionIDHigh;
@property (readonly, nonatomic) NSString *sessionIDLowString;
@property (readonly, nonatomic) NSString *sessionIDHighString;

/* instance methods */
- (double)sessionRelativeTimestampForEventTime:(double)time;
- (id)initWithSessionID:(struct GEOSessionID { unsigned long long x0; unsigned long long x1; })id sessionCreationTime:(double)time sequenceNumber:(unsigned int)number;
- (id)initWithSessionEntityString:(id)string;
- (id)description;
- (BOOL)_isValidSessionIDHighOrLowString:(id)string;
- (void)updateWithSessionEntityString:(id)string;
- (void)updateSessionIDFromUUIDString:(id)uuidstring;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* GEOUserSessionEntity_h */
