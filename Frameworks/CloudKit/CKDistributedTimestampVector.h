//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDistributedTimestampVector_h
#define CKDistributedTimestampVector_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSMutableArray;

@interface CKDistributedTimestampVector : NSObject<NSSecureCoding, NSCopying>

@property (retain, nonatomic) NSMutableArray *timestampArray;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTimestamps:(id)timestamps;
- (id)initWithTimestampClockVector:(id)vector fillingInGaps:(BOOL)gaps;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)timestampCount;
- (id)timestampAtIndex:(unsigned long long)index;
- (long long)indexForTimestampForSiteIdentifier:(id)identifier;
- (id)timestampForSiteIdentifier:(id)identifier;
- (id)sequentialSiteIdentifiers;
- (id)timestamps;
- (BOOL)_isGreaterThanOrEqualToTimestamp:(id)timestamp;
- (long long)compareToTimestampVector:(id)vector;
- (void)addTimestamp:(id)timestamp;
- (void)mergeFrom:(id)from;
- (id)minimalTimestampWith:(id)with;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CKDistributedTimestampVector_h */
