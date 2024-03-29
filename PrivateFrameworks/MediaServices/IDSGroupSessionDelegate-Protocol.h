//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef IDSGroupSessionDelegate_Protocol_h
#define IDSGroupSessionDelegate_Protocol_h
@import Foundation;

@protocol IDSGroupSessionDelegate <NSObject>
@optional
/* instance methods */
- (void)groupSessionDidTerminate:(id)terminate;
- (void)groupSessionEnded:(id)ended withReason:(unsigned int)reason error:(id)error;
- (void)sessionDidJoinGroup:(id)group participantsInfo:(id)info error:(id)error;
- (void)sessionDidJoinGroup:(id)group participantInfo:(id)info error:(id)error;
- (void)sessionDidJoinGroup:(id)group participantUpdate:(id)update error:(id)error;
- (void)sessionDidLeaveGroup:(id)group error:(id)error;
- (void)session:(id)session participantDidJoinGroupWithInfo:(id)info;
- (void)session:(id)session participantDidLeaveGroupWithInfo:(id)info;
- (void)session:(id)session didReceiveActiveParticipants:(id)participants success:(BOOL)success;
- (void)session:(id)session didReceiveActiveLightweightParticipants:(id)participants success:(BOOL)success;
- (void)session:(id)session didReceiveBlockedParticipantIDs:(id)ids withCode:(unsigned int)code isTruncated:(BOOL)truncated;
- (void)session:(id)session didReceiveBlockedParticipantIDs:(id)ids withCode:(unsigned int)code withType:(unsigned short)type isTruncated:(BOOL)truncated;
- (void)session:(id)session didReceiveQueryBlockedParticipantIDs:(id)ids withCode:(unsigned int)code isTruncated:(BOOL)truncated;
- (void)session:(id)session didRemoveParticipantIDs:(id)ids withCode:(unsigned int)code isTruncated:(BOOL)truncated;
- (void)sessionDidReceiveParticipantUpgrade:(id)upgrade participantType:(unsigned short)type error:(id)error;
- (void)session:(id)session didReceiveParticipantIDs:(id)ids withCode:(unsigned int)code managementType:(unsigned short)type;
- (void)participantUpdatedForSession:(id)session;
- (void)session:(id)session didReceivePluginAllocationInfo:(id)info;
- (void)session:(id)session didRegisterPluginAllocationInfo:(id)info;
- (void)session:(id)session didUnregisterPluginAllocationInfo:(id)info;
- (void)session:(id)session didReceiveReport:(id)report;
- (void)sessiondidReceiveKeyUpdate:(id)update;
- (void)session:(id)session didReceiveDataBlob:(id)blob forParticipant:(id)participant;
- (void)session:(id)session didReceiveData:(id)data dataType:(unsigned short)type forParticipant:(id)participant;
- (void)session:(id)session didReceiveServerErrorCode:(unsigned int)code;
- (void)session:(id)session rejectedKeyRecoveryRequestFromURI:(id)uri reason:(unsigned int)reason;
@end

#endif /* IDSGroupSessionDelegate_Protocol_h */
