//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSXPCServerMessaging_Protocol_h
#define IDSXPCServerMessaging_Protocol_h
@import Foundation;

@protocol IDSXPCServerMessaging <NSObject>
/* instance methods */
- (void)setupServerMessagingClient:(id)client withUUID:(id)uuid forTopic:(id)topic;
- (void)sendMessageData:(id)data onTopic:(id)topic withOptions:(id)options identifier:(id)identifier completion:(id /* block */)completion;
- (void)sendCertifiedDeliveryReceipt:(id)receipt;
@end

#endif /* IDSXPCServerMessaging_Protocol_h */
