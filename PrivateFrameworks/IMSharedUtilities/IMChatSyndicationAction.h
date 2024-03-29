//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMChatSyndicationAction_h
#define IMChatSyndicationAction_h
@import Foundation;

#include "IMSyndicationAction.h"

@interface IMChatSyndicationAction : IMSyndicationAction

@property (readonly, nonatomic) BOOL autoDonateMessages;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithChatGUID:(id)guid syndicationStartDate:(id)date autoDonateMessages:(BOOL)messages;
- (id)initWithChatGUID:(id)guid syndicationStartDate:(id)date autoDonateMessages:(BOOL)messages version:(unsigned char)version;
- (id)initWithChatGUID:(id)guid syndicationStartDate:(id)date deserializedSyndicationActionType:(unsigned char)type version:(unsigned char)version;
- (id)initWithCoder:(id)coder;
- (id)initWithDictionary:(id)dictionary;
- (BOOL)autoSyndicateMessages;
- (unsigned char)syndicatedItemType;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isAutoDonatingMessages;
@end

#endif /* IMChatSyndicationAction_h */
