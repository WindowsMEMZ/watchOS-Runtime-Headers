//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDaemonVCACProtocol_Protocol_h
#define IMDaemonVCACProtocol_Protocol_h
@import Foundation;

@protocol IMDaemonVCACProtocol <NSObject>
/* instance methods */
- (void)relay:(id)relay sendInitateRequest:(id)request toPerson:(id)person account:(id)account;
- (void)relay:(id)relay sendUpdate:(id)update toPerson:(id)person account:(id)account;
- (void)relay:(id)relay sendCancel:(id)cancel toPerson:(id)person account:(id)account;
- (void)requestVCWithPerson:(id)person properties:(id)properties conference:(id)conference account:(id)account;
- (void)respondToVCInvitationWithPerson:(id)person properties:(id)properties conference:(id)conference account:(id)account;
- (void)cancelVCRequestWithPerson:(id)person properties:(id)properties conference:(id)conference account:(id)account;
- (void)cancelVCRequestWithPerson:(id)person properties:(id)properties conference:(id)conference reason:(id)reason account:(id)account;
- (void)sendCounterProposalToPerson:(id)person properties:(id)properties conference:(id)conference account:(id)account;
- (void)sendVCUpdate:(id)vcupdate toPerson:(id)person conference:(id)conference account:(id)account;
- (void)sendAVMessageToPerson:(id)person sessionID:(unsigned int)id type:(unsigned int)type userInfo:(id)info conference:(id)conference account:(id)account;
@end

#endif /* IMDaemonVCACProtocol_Protocol_h */
