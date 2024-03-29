//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKConceptRelationship_h
#define HKConceptRelationship_h
@import Foundation;

#include "HKConcept.h"
#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface HKConceptRelationship : NSObject<NSObject, NSCopying, NSSecureCoding> {
  /* instance variables */
  HKConcept *_weakDestination;
}

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) HKConcept *destination;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) BOOL deleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithType:(long long)type destination:(id)destination;
- (id)initWithType:(long long)type destination:(id)destination version:(long long)version deleted:(BOOL)deleted;
- (id)initWithType:(long long)type weakDestination:(id)destination version:(long long)version deleted:(BOOL)deleted;
- (id)initWithType:(long long)type destination:(id)destination weakDestination:(id)destination version:(long long)version deleted:(BOOL)deleted;
- (id)init;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isDeleted;
@end

#endif /* HKConceptRelationship_h */
