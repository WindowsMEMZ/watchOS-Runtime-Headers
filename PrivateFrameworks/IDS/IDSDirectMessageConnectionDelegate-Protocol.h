//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSDirectMessageConnectionDelegate_Protocol_h
#define IDSDirectMessageConnectionDelegate_Protocol_h
@import Foundation;

@protocol IDSDirectMessageConnectionDelegate <NSObject>
/* instance methods */
- (void)connection:(id)connection messageSendFailed:(id)failed responseCode:(long long)code;
@optional
/* instance methods */
- (void)connection:(id)connection incomingMessageFromDirectConnection:(id)connection withGUID:(id)guid forTopic:(id)topic toIdentifier:(id)identifier fromID:(id)id context:(id)context;
- (void)connection:(id)connection incomingGUIDAckFromDirectConnection:(id)connection;
- (void)connection:(id)connection incomingDataFromDirectConnection:(id)connection withGUID:(id)guid forTopic:(id)topic toIdentifier:(id)identifier fromID:(id)id context:(id)context;
- (void)connection:(id)connection incomingProtobufFromDirectConnection:(id)connection withGUID:(id)guid forTopic:(id)topic toIdentifier:(id)identifier fromID:(id)id context:(id)context;
- (void)connection:(id)connection incomingAckWithIdentifier:(id)identifier forTopic:(id)topic toIdentifier:(id)identifier fromIdentifier:(id)identifier hasBeenDeliveredWithContext:(id)context isAppAck:(BOOL)ack;
@end

#endif /* IDSDirectMessageConnectionDelegate_Protocol_h */
