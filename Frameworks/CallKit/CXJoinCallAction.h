//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1228.300.81.0.0
//
#ifndef CXJoinCallAction_h
#define CXJoinCallAction_h
@import Foundation;

#include "CXCallAction.h"
#include "CXHandle.h"
#include "CXJoinCallActivity.h"

@class NSData, NSDate, NSDictionary, NSNumber, NSSet, NSString, NSUUID;

@interface CXJoinCallAction : CXCallAction

@property (copy, nonatomic) NSUUID *groupUUID;
@property (copy, nonatomic) NSDate *dateStarted;
@property (copy, nonatomic) NSSet *remoteMembers;
@property (copy, nonatomic) NSSet *otherInvitedHandles;
@property (copy, nonatomic) CXHandle *callerID;
@property (nonatomic) BOOL videoEnabled;
@property (nonatomic) BOOL uplinkMuted;
@property (nonatomic) unsigned long long avMode;
@property (nonatomic) unsigned long long presentationMode;
@property (copy, nonatomic) NSString *collaborationIdentifier;
@property (nonatomic) BOOL shouldSuppressInCallUI;
@property (nonatomic) BOOL wantsStagingArea;
@property (nonatomic) BOOL letMeIn;
@property (nonatomic) BOOL joiningConversationWithLink;
@property (copy, nonatomic) NSString *pseudonym;
@property (copy, nonatomic) NSData *publicKey;
@property (nonatomic) BOOL video;
@property (nonatomic) BOOL upgrade;
@property (copy, nonatomic) NSUUID *upgradeSessionUUID;
@property (copy, nonatomic) NSUUID *messagesGroupUUID;
@property (copy, nonatomic) NSString *messagesGroupName;
@property (copy, nonatomic) NSSet *remotePushTokens;
@property (copy, nonatomic) CXJoinCallActivity *joinCallActivity;
@property (nonatomic) BOOL relay;
@property (nonatomic) BOOL screening;
@property (copy, nonatomic) NSString *conversationProviderIdentifier;
@property (copy, nonatomic) NSDictionary *notificationStylesByHandleType;
@property (copy, nonatomic) NSNumber *associationIdentifier;
@property (copy, nonatomic) NSString *associationAVCIdentifier;

/* class methods */
+ (double)timeout;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCallUUID:(id)uuid groupUUID:(id)uuid;
- (id)customDescription;
- (void)fulfill;
- (void)fulfillWithDateStarted:(id)started;
- (void)updateAsFulfilledWithDateStarted:(id)started;
- (id)sanitizedCopyWithZone:(struct _NSZone *)zone;
- (void)updateCopy:(id)copy withZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isVideoEnabled;
- (BOOL)isUplinkMuted;
- (BOOL)isLetMeIn;
- (BOOL)isJoiningConversationWithLink;
- (BOOL)isVideo;
- (BOOL)isUpgrade;
- (BOOL)isRelay;
- (BOOL)isScreening;
@end

#endif /* CXJoinCallAction_h */
