//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1490.0.4.0.0
//
#ifndef NSURLProtectionSpace_h
#define NSURLProtectionSpace_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString, NSURLProtectionSpaceInternal;

@interface NSURLProtectionSpace : NSObject<NSSecureCoding, NSCopying> {
  /* instance variables */
  NSURLProtectionSpaceInternal *_internal;
}

@property (readonly, copy) NSString *realm;
@property (readonly) BOOL receivesCredentialSecurely;
@property (readonly) BOOL isProxy;
@property (readonly, copy) NSString *host;
@property (readonly) long long port;
@property (readonly, copy) NSString *proxyType;
@property (readonly, copy) NSString *protocol;
@property (readonly, copy) NSString *authenticationMethod;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithHost:(id)host port:(long long)port protocol:(id)protocol realm:(id)realm authenticationMethod:(id)method;
- (id)initWithProxyHost:(id)host port:(long long)port type:(id)type realm:(id)realm authenticationMethod:(id)method;
- (id)_initWithCFURLProtectionSpace:(struct _CFURLProtectionSpace *)space;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)distinguishedNames;
- (void)_setDistinguishedNames:(id)names;
- (struct __SecTrust *)serverTrust;
- (void)_setServerTrust:(struct __SecTrust *)trust;
- (struct _CFURLProtectionSpace *)_cfurlprtotectionspace;
- (struct _CFURLProtectionSpace *)_CFURLProtectionSpace;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* NSURLProtectionSpace_h */
