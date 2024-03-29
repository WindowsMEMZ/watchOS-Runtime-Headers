//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFServiceDeviceContext_h
#define AFServiceDeviceContext_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString, NSUUID;

@interface AFServiceDeviceContext : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *assistantIdentifier;
@property (readonly, copy, nonatomic) NSString *mediaSystemIdentifier;
@property (readonly, copy, nonatomic) NSString *mediaRouteIdentifier;
@property (readonly, copy, nonatomic) NSString *sharedUserID;
@property (readonly, copy, nonatomic) NSString *roomName;
@property (readonly, nonatomic) long long proximity;
@property (readonly, copy, nonatomic) NSDictionary *serializedContextByKey;
@property (readonly, copy, nonatomic) NSDictionary *metricsContext;

/* class methods */
+ (id)newWithBuilder:(id /* block */)builder;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)mutatedCopyWithMutator:(id /* block */)mutator;
- (id)initWithBuilder:(id /* block */)builder;
- (id)init;
- (id)initWithIdentifier:(id)identifier assistantIdentifier:(id)identifier mediaSystemIdentifier:(id)identifier mediaRouteIdentifier:(id)identifier sharedUserID:(id)id roomName:(id)name proximity:(long long)proximity serializedContextByKey:(id)key metricsContext:(id)context;
- (id)description;
- (id)_descriptionWithIndent:(unsigned long long)indent;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* AFServiceDeviceContext_h */
