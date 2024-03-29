//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSStunCandidatePairDelegate_Protocol_h
#define IDSStunCandidatePairDelegate_Protocol_h
@import Foundation;

@protocol IDSStunCandidatePairDelegate <NSObject>
/* instance methods */
- (void)candidatePair:(id)pair didReceiveSessionInfo:(id)info status:(unsigned int)status;
- (void)candidatePair:(id)pair didReceiveSessionStats:(id)stats success:(BOOL)success;
- (void)candidatePair:(id)pair didReceiveStunErrorResponse:(long long)response errorCode:(unsigned short)code didLocalExternalAddressChange:(BOOL)change;
- (void)candidatePair:(id)pair protoRequestDidTimeOut:(unsigned long long)out;
- (void)candidatePair:(id)pair didAddQREvent:(id)qrevent;
- (void)candidatePair:(id)pair didReceiveParticipantUpdate:(id)update status:(unsigned short)status;
- (void)candidatePair:(id)pair didReceivePutMaterialIndication:(id)indication;
- (void)candidatePair:(id)pair didReceiveGetMaterialResponse:(id)response;
- (void)candidatePair:(id)pair didReceivePutMaterialResponse:(id)response;
- (void)candidatePair:(id)pair didReceivePluginRegistration:(unsigned long long)registration pluginName:(id)name;
- (void)candidatePair:(id)pair didReceivePluginUnregistration:(unsigned long long)unregistration pluginName:(id)name;
- (void)candidatePair:(id)pair didReceivePluginControlEvent:(unsigned long long)event operation:(unsigned char)operation transactionID:(id)id;
- (void)candidatePair:(id)pair didReceiveMappedParticipantsDict:(id)dict forLinkID:(char)id;
- (void)sendProbingRequestWithoptions:(id)withoptions candidatePairToken:(id)token;
- (long long)sendStunMessage:(id)message candidatePair:(id)pair;
- (void)receiveIdleClientErrorForCandidatePair:(id)pair;
- (long long)sendProtoMessage:(id)message candidatePair:(id)pair;
- (void)receiveBlockedIndicationWithReason:(unsigned int)reason;
- (void)receiveErrorIndicationWithCode:(unsigned int)code;
- (BOOL)receiveNoSessionStateForCandidatePair:(id)pair didLocalExternalAddressChange:(BOOL)change;
- (void)disconnectIdleQUICConnectionForCandidatePair:(id)pair;
- (id)createLinkCycleForCandidatePair:(id)pair;
@end

#endif /* IDSStunCandidatePairDelegate_Protocol_h */
