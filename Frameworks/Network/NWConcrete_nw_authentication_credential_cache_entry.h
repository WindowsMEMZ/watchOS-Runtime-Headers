//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3762.60.29.0.0
//
#ifndef NWConcrete_nw_authentication_credential_cache_entry_h
#define NWConcrete_nw_authentication_credential_cache_entry_h
@import Foundation;

#include "OS_nw_authentication_credential-Protocol.h"
#include "OS_nw_authentication_credential_cache_entry-Protocol.h"

@class NSString;

@interface NWConcrete_nw_authentication_credential_cache_entry : NSObject<OS_nw_authentication_credential_cache_entry> {
  /* instance variables */
  struct _CFHTTPAuthentication * http_authentication;
  NSObject<OS_nw_authentication_credential> *credential;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
@end

#endif /* NWConcrete_nw_authentication_credential_cache_entry_h */
