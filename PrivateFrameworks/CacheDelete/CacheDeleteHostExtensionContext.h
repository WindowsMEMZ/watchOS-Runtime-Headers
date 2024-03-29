//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 660.60.3.0.0
//
#ifndef CacheDeleteHostExtensionContext_h
#define CacheDeleteHostExtensionContext_h
@import Foundation;

#include "NSExtensionContext.h"
#include "CacheDeleteHostProtocol-Protocol.h"

@class NSString;

@interface CacheDeleteHostExtensionContext : NSExtensionContext<CacheDeleteHostProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end

#endif /* CacheDeleteHostExtensionContext_h */
