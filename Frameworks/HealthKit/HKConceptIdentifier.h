//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKConceptIdentifier_h
#define HKConceptIdentifier_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSNumber, NSString;

@interface HKConceptIdentifier : NSObject<NSObject, NSCopying, NSSecureCoding>

@property (readonly, nonatomic) BOOL isAdHoc;
@property (readonly, nonatomic) long long rawIdentifier;
@property (readonly, copy, nonatomic) NSNumber *numberRepresentation;
@property (readonly, nonatomic) BOOL isInMemory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)identifierWithRawIdentifier:(long long)identifier;
+ (id)identifierWithNumber:(id)number;
+ (id)inMemoryConceptIdentifier;
+ (id)root;
+ (id)medication;
+ (id)diastolicBloodPressure;
+ (id)systolicBloodPressure;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithRawIdentifier:(long long)identifier;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HKConceptIdentifier_h */
