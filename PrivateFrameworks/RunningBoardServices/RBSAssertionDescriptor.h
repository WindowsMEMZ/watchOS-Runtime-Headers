//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSAssertionDescriptor_h
#define RBSAssertionDescriptor_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "RBSAssertionIdentifier.h"
#include "RBSTarget.h"
#include "RBSXPCSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface RBSAssertionDescriptor : NSObject<RBSXPCSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) RBSAssertionIdentifier *identifier;
@property (copy, nonatomic) RBSTarget *target;
@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly, copy, nonatomic) NSArray *attributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)descriptorWithIdentifier:(id)identifier target:(id)target explanation:(id)explanation attributes:(id)attributes;
+ (BOOL)supportsRBSXPCSecureCoding;

/* instance methods */
- (id)init;
- (id)copyWithIdentifier:(id)identifier;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithRBSXPCCoder:(id)rbsxpccoder;
- (id)initWithRBSXPCCoder:(id)rbsxpccoder;
@end

#endif /* RBSAssertionDescriptor_h */
