//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSGFTMetricsCollector_h
#define IDSGFTMetricsCollector_h
@import Foundation;

#include "IDSGFTMetricsAnonymizer.h"
#include "IDSGFTMetricsLocalJoin.h"
#include "IDSGFTMetricsMembershipChange.h"

@class NSMutableDictionary, NSSet, NSString;

@interface IDSGFTMetricsCollector : NSObject {
  /* instance variables */
  NSMutableDictionary *_referencePointsByType;
  NSMutableDictionary *_pushTokensByMKIs;
  NSMutableDictionary *_unknownMKMReceiptTimes;
  int _nextUniqueID;
  IDSGFTMetricsMembershipChange *_lastMembershipChange;
  NSMutableDictionary *_annotatorsByEventType;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unknownMKMFlushLock;
  IDSGFTMetricsAnonymizer *_anonymizer;
}

@property NSString *conversationID;
@property BOOL isInitiator;
@property (copy) NSSet *activeParticipantURIs;
@property (readonly) IDSGFTMetricsLocalJoin *localJoin;

/* instance methods */
- (id)init;
- (id)begin:(id)begin uniqueID:(id)id;
- (id)begin:(id)begin uniqueID:(id)id withClass:(Class)class;
- (void)annotate:(id)annotate block:(id /* block */)block;
- (void)annotate:(id)annotate withEvent:(id)event;
- (id)collectForTimeBase:(double)base anonymize:(BOOL)anonymize;
- (void)flushPendingNowKnownMKMs;
- (id)joinCycleForToken:(id)token;
- (id)error:(id)error;
- (id)uniqueError:(id)error;
- (id)localDidJoin;
- (id)keyValueDelivery;
- (void)remoteDidJoin:(id)join;
- (void)remoteDidBecomeActive:(id)active;
- (void)willSendJoin;
- (void)didSendJoin;
- (void)connectQRServer;
- (void)participantIdChanged;
- (void)selectedLocalInterface:(id)interface;
- (void)sendAllocationRequest;
- (void)globalLinkStart;
- (void)willSendAllocbindRequestThroughInterface:(id)interface;
- (void)stunAllocbindRequest;
- (void)stunAllocbindResponse;
- (void)tcpAllocbindRequest;
- (void)tcpAllocbindResponse;
- (void)quicAllocbindRequest;
- (void)quicAllocbindResponse;
- (void)allocbindResponseFromInterface:(id)interface;
- (void)allocbindResponseForProtocolStack:(id)stack;
- (void)clientChannelConnected;
- (void)didConnectUnderlyingRelayLink;
- (void)didConnectUnderlyingE2ELink;
- (void)linkConnectedUsingQUIC;
- (void)linkConnectedUsingHTTP2;
- (void)linkConnectedUsingTCPSTUN;
- (void)linkConnectedUsingFakeTLS;
- (void)linkConnectedWithH2FallbackEnabled:(BOOL)enabled;
- (void)firstIncomingPacketTime:(double)time forMKI:(id)mki;
- (void)firstOutgoingPacketTime:(double)time forMKI:(id)mki;
- (void)avcReceiveMKMTime:(double)mkmtime forMKI:(id)mki isGeneratedLocally:(BOOL)locally;
- (void)didCreateMKM:(id)mkm;
- (void)sendMKMToAVC:(id)avc isGeneratedLocally:(BOOL)locally;
- (void)receivedKMOverPushFromToken:(id)token;
- (void)receivedKMOverPushViaCacheForToken:(id)token;
- (void)receivedUnknownKMOverPushViaCache:(id)cache;
- (void)mapMKI:(id)mki toPushToken:(id)token;
- (void)receivedKMOverQRFromToken:(id)token;
- (void)receivedKMOverQUICFromToken:(id)token;
- (void)receivedUnverifiedKMOverQUICFromToken:(id)token;
- (void)sendRatchetedKMtoAVCForToken:(id)token;
- (void)membershipChange;
- (id)request:(id)request;
- (id)createLinkCycle;
- (id)getOrCreateMKICycleFor:(id)for;
- (void)didMitigateCollision:(BOOL)collision;
- (void)didFailConnectionOfType:(id)type;
- (void)transactionIDMismatchDetected;
@end

#endif /* IDSGFTMetricsCollector_h */
