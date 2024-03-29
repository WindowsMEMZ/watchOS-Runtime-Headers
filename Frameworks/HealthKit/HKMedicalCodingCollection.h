//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMedicalCodingCollection_h
#define HKMedicalCodingCollection_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSFastEnumeration-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDictionary, NSOrderedSet, NSSet;

@interface HKMedicalCodingCollection : NSObject<NSSecureCoding, NSCopying, NSFastEnumeration> {
  /* instance variables */
  NSOrderedSet *_codingsOrderedSet;
}

@property (readonly, copy, nonatomic) NSArray *codings;
@property (readonly, copy, nonatomic) NSSet *codingsSet;
@property (readonly, copy, nonatomic) NSDictionary *codingsBySystem;
@property (readonly, nonatomic) long long count;

/* class methods */
+ (id)collectionWithCodings:(id)codings;
+ (id)collectionWithCoding:(id)coding;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithCodings:(id)codings;
- (id)collectionByAddingCodings:(id)codings;
- (id)description;
- (id)codingsForCodingSystem:(id)system;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id * x1; unsigned long long * x2; unsigned long long x3[5] } *)state objects:(id *)objects count:(unsigned long long)count;
@end

#endif /* HKMedicalCodingCollection_h */
