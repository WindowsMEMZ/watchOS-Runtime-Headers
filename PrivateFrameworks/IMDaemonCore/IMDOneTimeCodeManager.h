//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDOneTimeCodeManager_h
#define IMDOneTimeCodeManager_h
@import Foundation;

#include "IMDaemonListenerProtocol-Protocol.h"
#include "IMSyncedSettingsManaging-Protocol.h"

@class IMOneTimeCodeUtilities, NSArray, NSTimer;

@interface IMDOneTimeCodeManager : NSObject

@property (retain, nonatomic) NSArray *validCodes;
@property (retain, nonatomic) NSTimer *codeInvalidationTimer;
@property (retain, nonatomic) NSObject<IMDaemonListenerProtocol> *broadcaster;
@property (retain, nonatomic) NSObject<IMDaemonListenerProtocol> *broadcasterOverride;
@property (retain, nonatomic) IMOneTimeCodeUtilities *otcUtilities;
@property (retain, nonatomic) NSObject<IMSyncedSettingsManaging> *syncedSettingsManager;
@property (nonatomic) BOOL autoDeletionPreference;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initWithBroadcaster:(id)broadcaster otcUtilities:(id)utilities;
- (id)init;
- (void)dealloc;
- (void)startTrackingCode:(id)code;
- (void)broadcastCodeStatusToClients;
- (void)consumeCodeWithGuid:(id)guid;
- (void)consumeCodeWithGuid:(id)guid codeExpired:(BOOL)expired;
- (id)_localizedStringForKey:(id)key;
- (void)onboardDeleteVerificationCodesIfNeededWithCompletionHandler:(id /* block */)handler;
- (void)onboardDeleteVerificationCodesIfNeededWithMessage:(id)message completionHandler:(id /* block */)handler;
- (id)_urlForPasswordsIcon;
- (void)moveOneTimeCodeToRecentlyDeleted:(id)deleted;
- (void)_updateLastMessageTimeStampForChat:(id)chat;
- (void)_setNewCodeAndPrepareInvalidationTimer:(id)timer;
@end

#endif /* IMDOneTimeCodeManager_h */
