//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AADaemonController_h
#define AADaemonController_h
@import Foundation;

#include "AADaemonProtocol-Protocol.h"
#include "AAFXPCSessionDelegate-Protocol.h"

@class AAFXPCSession, NSString;

@interface AADaemonController : NSObject<AAFXPCSessionDelegate, AADaemonProtocol>

@property (retain, nonatomic) AAFXPCSession *remoteService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)handleAppleAccountDeleteForAccount:(id)account completion:(id /* block */)completion;
- (void)cacheLoginResponse:(id)response forAccount:(id)account completion:(id /* block */)completion;
- (void)fetchCachedLoginResponseForAccount:(id)account completion:(id /* block */)completion;
- (void)configureRemoteInterface:(id)interface;
@end

#endif /* AADaemonController_h */
