//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1299.2.3.1.0
//
#ifndef _LSApplicationProxiesWithFlagsQuery_h
#define _LSApplicationProxiesWithFlagsQuery_h
@import Foundation;

#include "_LSBundleQuery.h"

@interface _LSApplicationProxiesWithFlagsQuery : _LSBundleQuery

@property (readonly, nonatomic) unsigned int plistFlags;
@property (readonly, nonatomic) unsigned long long bundleFlags;

/* class methods */
+ (id)queryWithPlistFlags:(unsigned int)flags bundleFlags:(unsigned long long)flags;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)_enumerateWithXPCConnection:(id)xpcconnection block:(id /* block */)block;
- (BOOL)_requiresDatabaseMappingEntitlement;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* _LSApplicationProxiesWithFlagsQuery_h */
