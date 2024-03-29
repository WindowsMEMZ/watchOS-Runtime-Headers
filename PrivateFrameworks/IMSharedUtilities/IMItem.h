//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMItem_h
#define IMItem_h
@import Foundation;

#include "IMRemoteObjectCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSData, NSDate, NSDictionary, NSString;

@interface IMItem : NSObject<NSSecureCoding, NSCopying, IMRemoteObjectCoding>

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) long long messageID;
@property (retain, nonatomic) NSString *account;
@property (retain, nonatomic) NSString *roomName;
@property (retain, nonatomic) NSString *service;
@property (retain, nonatomic) NSString *accountID;
@property (retain, nonatomic) NSString *destinationCallerID;
@property (retain, nonatomic) NSDate *time;
@property (retain, nonatomic) NSDate *clientSendTime;
@property (nonatomic) unsigned long long sortID;
@property (copy, nonatomic) NSString *replyToGUID;
@property (retain, nonatomic) NSString *handle;
@property (retain, nonatomic) NSString *unformattedID;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *personCentric;
@property (retain, nonatomic) NSString *personCentricID;
@property (retain, nonatomic) NSString *sender;
@property (retain, nonatomic) NSDictionary *senderInfo;
@property (retain, nonatomic) id context;
@property (readonly, nonatomic) BOOL isFromMe;
@property (retain, nonatomic) NSString *balloonBundleID;
@property (readonly, nonatomic) BOOL isFirstMessageCandidate;
@property (readonly, nonatomic) BOOL isLastMessageCandidate;
@property (nonatomic) long long cloudKitSyncState;
@property (copy, nonatomic) NSString *cloudKitRecordID;
@property (copy, nonatomic) NSData *cloudKitServerChangeTokenBlob;
@property (copy, nonatomic) NSString *cloudKitRecordChangeTag;
@property (copy, nonatomic) NSString *parentChatID;
@property (retain, nonatomic) NSArray *fileTransferGUIDs;
@property (readonly, nonatomic) BOOL wasDetonated;

/* class methods */
+ (Class)classForIMItemType:(long long)type;
+ (Class)classForMessageItemDictionary:(id)dictionary;
+ (id)stringGUID;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)consumedSessionPayloads;
- (id)pluginSessionGUID;
- (BOOL)isAssociatedMessageItem;
- (id)associatedMessageGUID;
- (long long)associatedMessageType;
- (BOOL)isMessageAcknowledgment;
- (BOOL)isBreadcrumb;
- (BOOL)isMessageEdit;
- (BOOL)isSticker;
- (BOOL)isEmojiSticker;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })associatedMessageRange;
- (id)tapback;
- (id)emojiSticker;
- (id)description;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithSender:(id)sender time:(id)time guid:(id)guid type:(long long)type;
- (id)initWithSenderInfo:(id)info time:(id)time guid:(id)guid messageID:(long long)id account:(id)account accountID:(id)id service:(id)service handle:(id)handle roomName:(id)name unformattedID:(id)id countryCode:(id)code type:(long long)type;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)encodeWithIMRemoteObjectSerializedDictionary:(id)dictionary;
- (id)initWithIMRemoteObjectSerializedDictionary:(id)dictionary;
- (id)copyDictionaryRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)equal;
- (BOOL)isOlderThanItem:(id)item;
- (BOOL)unsentIsFromMeItem;
- (BOOL)isReply;
- (unsigned long long)hash;
- (void)_setMessageID:(long long)id;
@end

#endif /* IMItem_h */
