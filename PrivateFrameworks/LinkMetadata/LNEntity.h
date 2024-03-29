//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNEntity_h
#define LNEntity_h
@import Foundation;

#include "BSXPCSecureCoding-Protocol.h"
#include "LNEntityIdentifier.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface LNEntity : NSObject<NSSecureCoding, NSCopying, BSXPCSecureCoding>

@property (readonly, copy, nonatomic) NSString *managedAccountIdentifier;
@property (readonly, copy, nonatomic) NSString *prototypeMangledTypeName;
@property (readonly, nonatomic) BOOL transient;
@property (readonly, copy, nonatomic) LNEntityIdentifier *identifier;
@property (readonly, copy, nonatomic) NSArray *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsBSXPCSecureCoding;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentifier:(id)identifier properties:(id)properties;
- (id)initWithIdentifier:(id)identifier managedAccountIdentifier:(id)identifier;
- (id)initWithIdentifier:(id)identifier properties:(id)properties managedAccountIdentifier:(id)identifier;
- (id)initWithIdentifier:(id)identifier;
- (id)initWithTransient:(BOOL)transient identifier:(id)identifier properties:(id)properties managedAccountIdentifier:(id)identifier;
- (id)initWithTransient:(BOOL)transient identifier:(id)identifier properties:(id)properties prototypeMangledTypeName:(id)name managedAccountIdentifier:(id)identifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithBSXPCCoder:(id)bsxpccoder;
- (void)encodeWithBSXPCCoder:(id)bsxpccoder;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (BOOL)isTransient;
@end

#endif /* LNEntity_h */
