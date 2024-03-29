//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EMOutgoingMessageBuilder_Protocol_h
#define EMOutgoingMessageBuilder_Protocol_h
@import Foundation;

@protocol EMOutgoingMessageBuilder 

@property (copy, nonatomic) NSData *messageData;
@property (nonatomic) long long action;
@property (retain, nonatomic) EMMessageObjectID *originalMessageID;
@property (nonatomic) BOOL shouldSign;
@property (nonatomic) BOOL shouldEncrypt;
@property (nonatomic) long long conversationNotificationLevel;

@end

#endif /* EMOutgoingMessageBuilder_Protocol_h */
