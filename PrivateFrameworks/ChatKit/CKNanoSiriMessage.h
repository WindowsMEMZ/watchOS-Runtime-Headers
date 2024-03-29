//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKNanoSiriMessage_h
#define CKNanoSiriMessage_h
@import Foundation;

#include "CKNanoSiriObject.h"

@class NSDate, NSMutableArray, NSString, NSURL;

@interface CKNanoSiriMessage : CKNanoSiriObject

@property (nonatomic) BOOL outbound;
@property (copy, nonatomic) NSString *senderAddress;
@property (copy, nonatomic) NSMutableArray *recipientAddresses;
@property (copy, nonatomic) NSString *subjectText;
@property (copy, nonatomic) NSString *bodyText;
@property (copy, nonatomic) NSURL *attachmentURL;
@property (copy, nonatomic) NSDate *dateSent;
@property (copy, nonatomic) NSString *chatIdentifier;
@property (copy, nonatomic) NSURL *identifier;

/* instance methods */
- (id)init;
- (id)initWithAFMessage:(id)afmessage;
- (id)initWithSASmsSms:(id)sms;
- (id)initWithIMMessage:(id)immessage;
- (id)initWithLastMessageInConversation:(id)conversation;
- (id)initWithMessageText:(id)text forConversation:(id)conversation;
- (void)addRecipientAddress:(id)address;
- (void)sendWithCompletion:(id /* block */)completion;
- (void)showMessage;
- (id)modelObject;
- (id)createSiriContext;
- (id)description;
@end

#endif /* CKNanoSiriMessage_h */
