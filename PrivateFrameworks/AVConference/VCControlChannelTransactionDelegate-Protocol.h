//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCControlChannelTransactionDelegate_Protocol_h
#define VCControlChannelTransactionDelegate_Protocol_h
@import Foundation;

@protocol VCControlChannelTransactionDelegate <NSObject>

@property (readonly, nonatomic) unsigned long long nextTransactionID;
@property (readonly) BOOL isEncryptionEnabled;

/* instance methods */
- (void)addToSentStats:(int)stats;
- (void)addToReceivedStats:(int)stats;
- (BOOL)isParticipantActive:(unsigned long long)active;
- (void)scheduleAfter:(unsigned int)after block:(id /* block */)block;
- (id)lastUsedMKIBytes;
- (int)protocolVersionforParticipantID:(id)id;
- (void)reportSignificantHandshakeDelaySymptomForParticipantID:(id)id;
@end

#endif /* VCControlChannelTransactionDelegate_Protocol_h */
