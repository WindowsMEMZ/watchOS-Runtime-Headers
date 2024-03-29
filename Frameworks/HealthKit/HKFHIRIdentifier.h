//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKFHIRIdentifier_h
#define HKFHIRIdentifier_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface HKFHIRIdentifier : NSObject<NSSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) NSString *resourceType;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *stringValue;

/* class methods */
+ (id)FHIRIdentifierWithString:(id)string error:(out id *)error;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithResourceType:(id)type identifier:(id)identifier;
- (id)init;
- (id)identifierForContainedResourceWithIdentifier:(id)identifier error:(id *)error;
- (id)parentResourceIdentifierWithError:(id *)error;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HKFHIRIdentifier_h */
