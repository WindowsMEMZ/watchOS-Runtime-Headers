//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKCustodianController_h
#define AKCustodianController_h
@import Foundation;

#include "AKCustodianDaemonConnection.h"
#include "AKCustodianDaemonProtocol-Protocol.h"

@interface AKCustodianController : NSObject<AKCustodianDaemonProtocol> {
  /* instance variables */
  AKCustodianDaemonConnection *_daemonConnection;
}

/* instance methods */
- (id)init;
- (id)initWithDaemonXPCEndpoint:(id)xpcendpoint;
- (void)initiateCustodianSetupWithContext:(id)context completion:(id /* block */)completion;
- (void)finalizeCustodianSetupWithContext:(id)context completion:(id /* block */)completion;
- (void)revokeCustodianWithContext:(id)context completion:(id /* block */)completion;
- (void)updateCustodianRecoveryKeyWithContext:(id)context completion:(id /* block */)completion;
- (void)startCustodianRecoveryRequestWithContext:(id)context completion:(id /* block */)completion;
- (void)fetchCustodianRecoveryCodeConfigurationWithCompletion:(id /* block */)completion;
- (void)startCustodianRecoveryTransactionWithContext:(id)context completion:(id /* block */)completion;
- (void)fetchCustodianRecoveryTokenWithContext:(id)context completion:(id /* block */)completion;
- (void)fetchCustodianDataRecoveryKeyWithContext:(id)context completion:(id /* block */)completion;
- (void)sendEmbargoEndNotificationFeedbackWithContext:(id)context urlKey:(id)key completion:(id /* block */)completion;
- (void)performTrustedContactsDataSync:(id)sync completion:(id /* block */)completion;
- (void)dealloc;
@end

#endif /* AKCustodianController_h */
