//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCModifyNotificationsForTopicsCommand_h
#define FCModifyNotificationsForTopicsCommand_h
@import Foundation;

#include "FCCommand.h"

@class NSArray, NSString;

@interface FCModifyNotificationsForTopicsCommand : FCCommand

@property (copy, nonatomic) NSArray *topicIDsToAdd;
@property (copy, nonatomic) NSArray *topicIDsToRemove;
@property (copy, nonatomic) NSString *topicGroupingID;
@property (copy, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *deviceToken;
@property (copy, nonatomic) NSString *storefrontID;
@property (nonatomic) int deviceDigestMode;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTopicIDsToAdd:(id)add topicIDsToRemove:(id)remove withTopicGroupingID:(id)id fromChannelID:(id)id userID:(id)id deviceToken:(id)token storefrontID:(id)id deviceDigestMode:(int)mode;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)executeWithContext:(id)context delegate:(id)delegate qualityOfService:(long long)service;
- (BOOL)canCoalesceWithCommand:(id)command;
- (void)coalesceWithCommand:(id)command;
@end

#endif /* FCModifyNotificationsForTopicsCommand_h */
