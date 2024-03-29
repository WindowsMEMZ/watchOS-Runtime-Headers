//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUCallNotificationManager_h
#define TUCallNotificationManager_h
@import Foundation;

@class NSMutableArray, NSNotificationCenter;

@interface TUCallNotificationManager : NSObject

@property (retain, nonatomic) NSMutableArray *deferredNotificationBlocks;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;

/* instance methods */
- (id)initWithNotificationCenter:(id)center;
- (void)postNotificationsForCall:(id)call afterUpdatesInBlock:(id /* block */)block;
- (void)postNotificationsForCall:(id)call usingComparisonCall:(id)call;
- (void)postNotificationsForCall:(id)call usingComparisonCall:(id)call afterUpdatesInBlock:(id /* block */)block;
- (void)postNotificationsForCallContainer:(id)container afterUpdatesInBlock:(id /* block */)block;
- (void)deferNotificationsUntilAfterPerformingBlock:(id /* block */)block;
- (void)_postNotificationName:(id)name object:(id)object;
- (void)_postNotificationName:(id)name object:(id)object userInfo:(id)info;
- (void)statusChangedForCall:(id)call;
- (void)connectingChangedForCall:(id)call;
- (void)connectedChangedForCall:(id)call;
- (void)wantsHoldMusicChangedForCall:(id)call;
- (void)endpointOnCurrentDeviceChangedForCall:(id)call;
- (void)shouldSuppressRingtoneChangedForCall:(id)call;
- (void)faceTimeIDStatusChangedForCall:(id)call;
- (void)hardPauseDigitsStateChangedForCall:(id)call;
- (void)needsManualInCallSoundsChangedForCall:(id)call;
- (void)hasSentInvitationChangedForCall:(id)call;
- (void)isUsingBasebandChangedForCall:(id)call;
- (void)isOnHoldChangedForCall:(id)call;
- (void)isUplinkMutedChangedForCall:(id)call;
- (void)destinationIDChangedForCall:(id)call;
- (void)displayContextChangedForCall:(id)call;
- (void)isEmergencyChangedForCall:(id)call;
- (void)isFailureExpectedChangedForCall:(id)call;
- (void)supportsEmergencyFallbackChangedForCall:(id)call;
- (void)isSendingAudioChangedForCall:(id)call;
- (void)isSendingVideoChangedForCall:(id)call;
- (void)sharingScreenChangedForCall:(id)call;
- (void)isThirdPartyVideoChangedForCall:(id)call;
- (void)mediaStalledChangedForCall:(id)call;
- (void)videoDegradedChangedForCall:(id)call;
- (void)videoPausedChangedForCall:(id)call;
- (void)audioPropertiesChangedForCall:(id)call;
- (void)ttyTypeChangedForCall:(id)call;
- (void)bluetoothAudioFormatChangedForCall:(id)call;
- (void)remoteUplinkMutedChangedForCall:(id)call;
- (void)localSenderIdentityAccountUUIDChangedForCall:(id)call;
- (void)supportsTTYWithVoiceChangedForCall:(id)call;
- (void)remoteAspectRatioChangedForCall:(id)call;
- (void)remoteVideoContentRectChangedForCall:(id)call;
- (void)cameraTypeChangedForCall:(id)call;
- (void)videoMirroredChangedForCall:(id)call;
- (void)remoteCameraOrientationChangedForCall:(id)call;
- (void)remoteScreenOrientationChangedForCall:(id)call;
- (void)remoteScreenAspectRatioChangedForCall:(id)call;
- (void)providerContextChangedForCall:(id)call;
- (void)mediaPropertiesChangedForCall:(id)call remoteAspectRatioDidChange:(BOOL)change remoteCameraOrientationDidChange:(BOOL)change;
- (void)videoStreamTokenChangedForCall:(id)call;
- (void)answeringMachineStreamTokenChangedForCall:(id)call;
- (void)conversationChangedForCall:(id)call;
- (void)callGroupUUIDChangedForCall:(id)call;
- (void)mixesVoiceWithMediaChangedForCall:(id)call;
- (void)prefersExclusiveAccessToCellularNetworkChangedForCall:(id)call;
- (void)isScreeningChangedForCall:(id)call;
- (void)screeningAnnouncementFinishedChangedForCall:(id)call;
- (void)hasBeenRedirectedChangedForCall:(id)call;
- (void)modelChangedForCall:(id)call;
- (void)conferenceParticipantCallsChangedForCallContainer:(id)container conferenceParticipantCalls:(id)calls;
@end

#endif /* TUCallNotificationManager_h */
