//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _CDInteraction_h
#define _CDInteraction_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "_CDContact.h"
#include "_CDInteractionOrUncachedSentinel-Protocol.h"
#include "_CDPDataPoint-Protocol.h"

@class NSArray, NSDate, NSString, NSURL;

@interface _CDInteraction : NSObject<_CDInteractionOrUncachedSentinel, _CDPDataPoint, NSSecureCoding>

@property (readonly, nonatomic) BOOL userIsSender;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSArray *peopleIdentifiers;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL userIsThreadInitiator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL forcePersistInteraction;
@property (nonatomic) BOOL mailShareSheetDeletionCandidate;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *updateDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *locationUUID;
@property (nonatomic) long long mechanism;
@property (nonatomic) long long direction;
@property (nonatomic) BOOL isResponse;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *targetBundleId;
@property (copy, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSURL *contentURL;
@property (copy, nonatomic) NSString *derivedIntentIdentifier;
@property (copy, nonatomic) NSString *domainIdentifier;
@property (copy, nonatomic) NSString *account;
@property (retain, nonatomic) _CDContact *sender;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSArray *attachments;
@property (nonatomic) long long selfParticipantStatus;
@property (copy, nonatomic) NSString *nsUserName;

/* class methods */
+ (id)shareSheetInteractionFromINInteraction:(id)ininteraction bundleID:(id)id nsUserName:(id)name knowledgeStore:(id)store;
+ (BOOL)supportsSecureCoding;
+ (id)_internPool;
+ (id)conversationIdPercentEscapes;
+ (id)inverseConversationIdPercentEscapes;
+ (id)generateConversationIdFromInteractionRecipients:(id)recipients;
+ (id)generateConversationIdFromHandle:(id)handle;
+ (id)recipientIdentifiersFromMobileMailConversationId:(id)id;

/* instance methods */
- (id)initWithINInteraction:(id)ininteraction bundleID:(id)id nsUserName:(id)name;
- (id)interactionIfCached;
- (BOOL)isUncachedSentinel;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)init;
- (unsigned long long)recipientsCount;
- (id)descriptionOfArray:(id)array redacted:(BOOL)redacted;
- (id)redactedDescription;
- (id)descriptionRedacted:(BOOL)redacted;
- (BOOL)isEqual:(id)equal;
- (BOOL)isInteractionMechanismCalls;
- (BOOL)isValidInteraction;
- (BOOL)isGroupChat;
- (id)dateInterval;
- (void)fetchAndAddShareSheetContentToInteractionWithKnowledgeStore:(id)store;
@end

#endif /* _CDInteraction_h */
