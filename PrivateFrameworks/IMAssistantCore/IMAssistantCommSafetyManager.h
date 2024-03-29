//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMAssistantCommSafetyManager_h
#define IMAssistantCommSafetyManager_h
@import Foundation;

#include "IMAssistantCommSafetyManager-Protocol.h"

@class IMCommSafetyRequestsManager, IMCommSafetySettingsManager, NSString;

@interface IMAssistantCommSafetyManager : NSObject<IMAssistantCommSafetyManager>

@property (readonly, nonatomic) IMCommSafetyRequestsManager *commSafetyRequestsManager;
@property (readonly, nonatomic) IMCommSafetySettingsManager *commSafetySettingsManager;
@property (readonly, nonatomic) BOOL checksForSensitivityOnSend;
@property (readonly, nonatomic) BOOL checksForSensitivityOnReceive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCommSafetyRequestsManager:(id)manager commSafetySettingsManager:(id)manager;
- (void)isSensitiveContent:(id)content withChatID:(id)id completionHandler:(id /* block */)handler;
@end

#endif /* IMAssistantCommSafetyManager_h */
