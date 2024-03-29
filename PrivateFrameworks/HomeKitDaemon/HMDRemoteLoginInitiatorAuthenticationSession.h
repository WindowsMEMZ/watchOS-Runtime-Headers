//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDRemoteLoginInitiatorAuthenticationSession_h
#define HMDRemoteLoginInitiatorAuthenticationSession_h
@import Foundation;

#include "HMDRemoteLoginInitiatorSession.h"
#include "HMDRemoteLoginInitiatorAuthentication.h"

@interface HMDRemoteLoginInitiatorAuthenticationSession : HMDRemoteLoginInitiatorSession

@property (readonly, nonatomic) HMDRemoteLoginInitiatorAuthentication *remoteAuthentication;
@property (readonly, nonatomic) id /* block */ completion;

/* instance methods */
- (id)initWithSessionID:(id)id remoteAuthentication:(id)authentication completion:(id /* block */)completion;
- (void)dealloc;
- (id)description;
@end

#endif /* HMDRemoteLoginInitiatorAuthenticationSession_h */
