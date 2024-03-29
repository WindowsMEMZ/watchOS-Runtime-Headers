//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVAssetResourceLoaderRemoteHandlerContext_h
#define AVAssetResourceLoaderRemoteHandlerContext_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@protocol OS_xpc_object;

@interface AVAssetResourceLoaderRemoteHandlerContext : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property (readonly, nonatomic) unsigned long long customURLHandlerObjectID;
@property (readonly, nonatomic) unsigned long long authHandlerObjectID;
@property (readonly, nonatomic) unsigned long long contentKeySessionHandlerObjectID;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithEndpoint:(id)endpoint customURLHandlerObjectID:(unsigned long long)id authHandlerObjectID:(unsigned long long)id contentKeySessionHandlerObjectID:(unsigned long long)id;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* AVAssetResourceLoaderRemoteHandlerContext_h */
