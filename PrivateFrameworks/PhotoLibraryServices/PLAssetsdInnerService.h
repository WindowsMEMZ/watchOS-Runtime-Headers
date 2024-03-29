//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAssetsdInnerService_h
#define PLAssetsdInnerService_h
@import Foundation;

#include "PLAssetsdServicePermissions.h"

@class PLLazyObject;

@interface PLAssetsdInnerService : NSObject {
  /* instance variables */
  PLAssetsdServicePermissions *_permissions;
  long long _requiredState;
  PLLazyObject *_lazyService;
}

/* instance methods */
- (id)initWithPermissions:(id)permissions requiredLibraryServicesState:(long long)state lazyService:(id)service;
- (void)getInnerServiceWithContext:(id)context reply:(id /* block */)reply;
- (void)_awaitForRequiredLibraryStateWithContext:(id)context completionHandler:(id /* block */)handler;
- (id)instantiateInnerService;
@end

#endif /* PLAssetsdInnerService_h */
