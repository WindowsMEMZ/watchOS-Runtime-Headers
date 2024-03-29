//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSyncPredicate_h
#define HDSyncPredicate_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDateInterval, NSDictionary, NSNumber, NSSet;

@interface HDSyncPredicate : NSObject<NSSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) NSSet *excludedSyncProvenances;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSSet *includedObjectTypes;
@property (readonly, copy, nonatomic) NSNumber *defaultMaximumObjectAge;
@property (readonly, copy, nonatomic) NSNumber *defaultMaximumTombstoneAge;
@property (readonly, copy, nonatomic) NSDictionary *maximumObjectAgeByType;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithExcludedSyncProvenances:(id)provenances dateInterval:(id)interval includedObjectTypes:(id)types defaultMaximumObjectAge:(id)age defaultMaximumTombstoneAge:(id)age maximumObjectAgeByType:(id)type;
- (id)maximumObjectAgeForType:(id)type;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* HDSyncPredicate_h */
