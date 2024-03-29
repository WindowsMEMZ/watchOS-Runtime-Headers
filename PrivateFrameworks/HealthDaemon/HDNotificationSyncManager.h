//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDNotificationSyncManager_h
#define HDNotificationSyncManager_h
@import Foundation;

#include "HDHealthDaemonReadyObserver-Protocol.h"
#include "HDNotificationInstructionManager.h"
#include "HDNotificationInstructionSyncServiceObserver-Protocol.h"
#include "HDProfile.h"

@class NSString;

@interface HDNotificationSyncManager : NSObject<HDHealthDaemonReadyObserver, HDNotificationInstructionSyncServiceObserver> {
  /* instance variables */
  HDProfile *_profile;
}

@property (readonly, nonatomic) HDNotificationInstructionManager *notificationInstructionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProfile:(id)profile;
- (void)daemonReady:(id)ready;
- (void)notificationInstructionSyncService:(id)service didReceiveNotificationInstruction:(id)instruction;
- (BOOL)sendNotificationInstructionMessage:(id)message error:(id *)error;
@end

#endif /* HDNotificationSyncManager_h */
