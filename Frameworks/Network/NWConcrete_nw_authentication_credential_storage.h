//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3762.60.29.0.0
//
#ifndef NWConcrete_nw_authentication_credential_storage_h
#define NWConcrete_nw_authentication_credential_storage_h
@import Foundation;

#include "OS_nw_authentication_credential_storage-Protocol.h"

@class NSString, NSURLCredentialStorage;

@interface NWConcrete_nw_authentication_credential_storage : NSObject<OS_nw_authentication_credential_storage> {
  /* instance variables */
  NSURLCredentialStorage *credentialStorage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
@end

#endif /* NWConcrete_nw_authentication_credential_storage_h */
