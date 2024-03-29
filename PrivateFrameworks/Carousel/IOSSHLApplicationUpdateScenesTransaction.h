//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef IOSSHLApplicationUpdateScenesTransaction_h
#define IOSSHLApplicationUpdateScenesTransaction_h
@import Foundation;

#include "FBApplicationUpdateScenesTransaction.h"
#include "CSLTransactionWatchdogging-Protocol.h"
#include "IOSSHLApplication.h"

@class NSSet, NSString;

@interface IOSSHLApplicationUpdateScenesTransaction : FBApplicationUpdateScenesTransaction<CSLTransactionWatchdogging>

@property (nonatomic) BOOL activateSuspended;
@property (retain, nonatomic) NSSet *actions;
@property (retain, nonatomic) NSString *sceneIdentifier;
@property (readonly, nonatomic) IOSSHLApplication *application;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithApplication:(id)application executionContext:(id)context;
- (void)_willBegin;
- (void)_didComplete;
- (void)addSynchronizedTransaction:(id)transaction;
- (id)_customizedDescriptionProperties;
- (void)transactionWatchdogImminent;
@end

#endif /* IOSSHLApplicationUpdateScenesTransaction_h */
