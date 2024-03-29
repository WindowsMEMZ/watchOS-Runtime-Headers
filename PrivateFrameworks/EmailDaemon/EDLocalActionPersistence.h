//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDLocalActionPersistence_h
#define EDLocalActionPersistence_h
@import Foundation;

#include "EDGmailLabelPersistence.h"
#include "EDPersistenceDatabase.h"
#include "EFLoggable-Protocol.h"

@class NSString;

@interface EDLocalActionPersistence : NSObject<EFLoggable>

@property (readonly, nonatomic) EDPersistenceDatabase *database;
@property (readonly, nonatomic) EDGmailLabelPersistence *gmailLabelPersistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)log;
+ (id)tablesAndForeignKeysToResolve:(id *)resolve associationsToResolve:(id *)resolve;
+ (id)localMessageActionsTableSchema;
+ (id)actionMessagesTableSchema;
+ (id)actionLabelsTableSchema;
+ (id)actionFlagsTableSchema;

/* instance methods */
- (id)initWithDatabase:(id)database gmailLabelPersistence:(id)persistence;
- (id)init;
- (id)messageActionsForAccountURL:(id)url previousActionID:(long long)id;
- (id)_transferActionForRow:(id)row connection:(id)connection failedMessages:(id)messages;
- (id)_transferUndownloadedActionForRow:(id)row connection:(id)connection;
- (id)_flagChangeActionForRow:(id)row connection:(id)connection;
- (id)_flagChangeAllActionForRow:(id)row connection:(id)connection;
- (id)_labelChangeActionForRow:(id)row connection:(id)connection;
- (void)_findMessagesForAction:(long long)action remoteIDs:(id)ids messages:(id)messages connection:(id)connection;
- (id)_flagChangeForAction:(long long)action connection:(id)connection;
- (id)messageForDatabaseID:(long long)id;
- (BOOL)persistFlagChangeAction:(id)action;
- (BOOL)persistFlagChangeUndownloadedAction:(id)action;
- (BOOL)_addFlagChange:(id)change actionID:(long long)id connection:(id)connection;
- (BOOL)persistTransferAction:(id)action;
- (BOOL)persistTransferUndownloadedAction:(id)action;
- (BOOL)persistLabelChangeAction:(id)action;
- (BOOL)_setLabelsOnAction:(long long)action labels:(id)labels add:(BOOL)add connection:(id)connection;
- (BOOL)_addActionMessageForMessage:(id)message destinationMessage:(id)message actionID:(long long)id actionPhase:(long long)phase connection:(id)connection;
- (BOOL)_addActionMessageForSourceRemoteID:(id)id actionID:(long long)id connection:(id)connection;
- (BOOL)updateTransferAction:(id)action withResults:(id)results;
- (BOOL)moveSupportedFromMailboxURL:(id)url toURL:(id)url;
- (BOOL)mailboxURLIsInRemoteAccount:(id)account;
- (void)_updateCopyItems:(id)items toPhase:(long long)phase actionID:(long long)id connection:(id)connection;
- (void)_deleteCopyItems:(id)items actionID:(long long)id connection:(id)connection;
- (id)_whereClauseToFindCopyItems:(id)items;
- (id)_sourceRemoteIDListForCopyItems:(id)items;
- (BOOL)updateTransferUndownloadedMessageAction:(id)action withResults:(id)results;
- (void)updateFlagChangeAction:(id)action withRemainingUIDs:(id)uids;
- (void)removeMessageAction:(long long)action;
- (void)removeMessageActions:(id)actions;
@end

#endif /* EDLocalActionPersistence_h */
