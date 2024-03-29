//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MusicKit_SoftLinking_MPCloudController_h
#define MusicKit_SoftLinking_MPCloudController_h
@import Foundation;

@class MPCloudController;

@interface MusicKit_SoftLinking_MPCloudController : NSObject {
  /* instance variables */
  MPCloudController *_underlyingCloudController;
}

@property (readonly, nonatomic) BOOL canShowCloudDownloadButtons;
@property (readonly, nonatomic) BOOL updateInProgress;

/* class methods */
+ (id)sharedCloudController;
+ (id)canShowCloudDownloadButtonsDidChangeNotificationName;
+ (id)isUpdateInProgressDidChangeNotificationName;

/* instance methods */
- (id)_initWithUnderlyingCloudController:(id)controller;
- (void)dealloc;
- (BOOL)isUpdateInProgress;
- (void)setCloudAddToPlaylistBehavior:(long long)behavior completionHandler:(id /* block */)handler;
- (long long)cloudAddToPlaylistBehavior;
- (void)becomeActive;
- (void)resignActive;
- (void)respondToPendingCollaborator:(id)collaborator onCollaborationWithPersistentID:(id)id withApproval:(BOOL)approval completion:(id /* block */)completion;
- (void)updateSharingMode:(long long)mode onCollaborationWithPersistentID:(id)id completion:(id /* block */)completion;
- (void)resetInvitationURLForCollaborationWithPersistentID:(id)id completion:(id /* block */)completion;
- (void)_handleCanShowCloudDownloadButtonsDidChangeNotification:(id)notification;
- (void)_handleIsUpdateInProgressDidChangeNotificationName:(id)name;
@end

#endif /* MusicKit_SoftLinking_MPCloudController_h */
