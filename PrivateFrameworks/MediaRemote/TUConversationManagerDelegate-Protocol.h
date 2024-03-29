//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef TUConversationManagerDelegate_Protocol_h
#define TUConversationManagerDelegate_Protocol_h
@import Foundation;

@protocol TUConversationManagerDelegate <NSObject>
@optional
/* instance methods */
- (void)conversationsChangedForConversationManager:(id)manager;
- (void)conversationManager:(id)manager stateChangedForConversation:(id)conversation;
- (void)conversationManager:(id)manager stateChangedForConversation:(id)conversation fromOldConversation:(id)conversation;
- (void)conversationManager:(id)manager letMeInRequestStateChangedForConversation:(id)conversation;
- (void)conversationManager:(id)manager letMeInRequestStateChangedForConversation:(id)conversation fromOldConversation:(id)conversation;
- (void)conversationManager:(id)manager localVideoToggledForConversation:(id)conversation;
- (void)conversationManager:(id)manager localVideoToggledForConversation:(id)conversation fromOldConversation:(id)conversation;
- (void)conversationManager:(id)manager remoteMembersChangedForConversation:(id)conversation;
- (void)conversationManager:(id)manager remoteMembersChangedForConversation:(id)conversation fromOldConversation:(id)conversation;
- (void)conversationManager:(id)manager pendingMembersChangedForConversation:(id)conversation;
- (void)conversationManager:(id)manager pendingMembersChangedForConversation:(id)conversation fromOldConversation:(id)conversation;
- (void)conversationManager:(id)manager kickedMembersChangedForConversation:(id)conversation;
- (void)conversationManager:(id)manager kickedMembersChangedForConversation:(id)conversation fromOldConversation:(id)conversation;
- (void)conversationManager:(id)manager rejectedMembersChangedForConversation:(id)conversation;
- (void)conversationManager:(id)manager rejectedMembersChangedForConversation:(id)conversation fromOldConversation:(id)conversation;
- (void)conversationManager:(id)manager otherInvitedHandlesChangedForConversation:(id)conversation;
- (void)conversationManager:(id)manager otherInvitedHandlesChangedForConversation:(id)conversation fromOldConversation:(id)conversation;
- (void)conversationManager:(id)manager activeRemoteParticipantsChangedForConversation:(id)conversation;
- (void)conversationManager:(id)manager activeRemoteParticipantsChangedForConversation:(id)conversation fromOldConversation:(id)conversation;
- (void)conversationManager:(id)manager activitySessionsChangedForConversation:(id)conversation;
- (void)conversationManager:(id)manager activitySessionsChangedForConversation:(id)conversation fromOldConversation:(id)conversation;
- (void)conversationManager:(id)manager oneToOneModeChangedForConversation:(id)conversation;
- (void)conversationManager:(id)manager oneToOneModeChangedForConversation:(id)conversation fromOldConversation:(id)conversation;
- (void)conversationManager:(id)manager avModeChangedForConversation:(id)conversation;
- (void)conversationManager:(id)manager avModeChangedForConversation:(id)conversation fromOldConversation:(id)conversation;
- (void)conversationManager:(id)manager presentationContextChangedForConversation:(id)conversation;
- (void)conversationManager:(id)manager presentationContextChangedForConversation:(id)conversation fromOldConversation:(id)conversation;
- (void)conversationManager:(id)manager resolvedAudioVideoModeChangedForConversation:(id)conversation;
- (void)conversationManager:(id)manager resolvedAudioVideoModeChangedForConversation:(id)conversation fromOldConversation:(id)conversation;
- (void)conversationManager:(id)manager removedActiveConversation:(id)conversation;
- (void)conversationManager:(id)manager addedActiveConversation:(id)conversation;
- (void)conversationManager:(id)manager didChangeActivatedLinks:(id)links;
- (void)conversationManager:(id)manager linkChangedForConversation:(id)conversation;
- (void)conversationManager:(id)manager linkChangedForConversation:(id)conversation fromOldConversation:(id)conversation;
- (void)conversationManager:(id)manager linkInvitedMemberHandlesChangedForConversation:(id)conversation;
- (void)conversationManager:(id)manager linkInvitedMemberHandlesChangedForConversation:(id)conversation fromOldConversation:(id)conversation;
- (void)conversationManager:(id)manager conversation:(id)conversation requestedScreenShareForParticipant:(id)participant;
- (void)serverDisconnectedForConversationManager:(id)manager;
- (void)conversationManager:(id)manager migratingFromConversation:(id)conversation toConversation:(id)conversation;
- (void)conversationManager:(id)manager conversation:(id)conversation receivedActivitySessionEvent:(id)event;
- (void)conversationManager:(id)manager changedActivityAuthorizationForBundleIdentifier:(id)identifier;
- (void)conversationManager:(id)manager conversation:(id)conversation participant:(id)participant addedNotice:(id)notice;
- (void)conversationManager:(id)manager conversation:(id)conversation addedMembersLocally:(id)locally;
- (void)conversationManager:(id)manager conversation:(id)conversation buzzedMember:(id)member;
- (void)conversationManager:(id)manager conversationUpdatedMessagesGroupName:(id)name;
- (void)conversationManager:(id)manager conversationUpdatedMessagesGroupName:(id)name fromOldConversation:(id)conversation;
- (void)conversationManager:(id)manager conversation:(id)conversation updatedMessagesGroupPhoto:(id)photo;
- (void)conversationManager:(id)manager conversationUpdatedMessagesGroupUUID:(id)uuid;
- (void)conversationManager:(id)manager updatedIncomingPendingConversations:(id)conversations;
- (void)conversationManager:(id)manager trackedPendingMember:(id)member forConversationLink:(id)link;
- (void)conversationManager:(id)manager conversation:(id)conversation screenSharingChangedForParticipant:(id)participant;
- (void)conversationManager:(id)manager conversation:(id)conversation launchStateChanged:(unsigned long long)changed forActivitySession:(id)session;
- (void)conversationManager:(id)manager remoteScreenShareAttributesChanged:(id)changed isLocallySharing:(BOOL)sharing;
- (void)conversationManager:(id)manager remoteScreenShareEndedWithReason:(id)reason;
- (void)conversationManager:(id)manager ignoreLMIRequestsChangedForConversation:(id)conversation;
- (void)conversationManager:(id)manager conversation:(id)conversation didChangeStateForActivitySession:(id)session;
- (void)conversationManager:(id)manager conversation:(id)conversation didChangeSceneAssociationForActivitySession:(id)session;
- (void)conversationManager:(id)manager sharePlayAvailableChanged:(BOOL)changed;
- (void)conversationManager:(id)manager screenSharingAvailableChanged:(BOOL)changed;
- (void)conversationManager:(id)manager handoffEligibilityChangedForConversation:(id)conversation;
- (void)conversationManager:(id)manager handoffEligibilityChangedToConversation:(id)conversation fromPreviousConversation:(id)conversation;
- (void)conversationManager:(id)manager systemActivitySessionsChangedForConversation:(id)conversation;
- (void)conversationManager:(id)manager systemActivitySessionsChangedForConversation:(id)conversation fromOldConversation:(id)conversation;
- (void)conversationManager:(id)manager cameraMixedWithScreenDidChangeForConversation:(id)conversation;
- (void)conversationManager:(id)manager cameraMixedWithScreenDidChangeForConversation:(id)conversation fromOldConversation:(id)conversation;
- (void)conversationManager:(id)manager screeningChangedForConversation:(id)conversation;
@end

#endif /* TUConversationManagerDelegate_Protocol_h */
