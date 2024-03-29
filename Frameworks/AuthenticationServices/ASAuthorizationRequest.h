//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef ASAuthorizationRequest_h
#define ASAuthorizationRequest_h
@import Foundation;

#include "ASAuthorizationProvider-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface ASAuthorizationRequest : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSObject<ASAuthorizationProvider> *provider;

/* class methods */
+ (id)new;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithProvider:(id)provider;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)supportsStyle:(long long)style;
@end

#endif /* ASAuthorizationRequest_h */
