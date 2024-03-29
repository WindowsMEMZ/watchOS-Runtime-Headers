//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKBlackholeConversationsModel_h
#define CKBlackholeConversationsModel_h
@import Foundation;

#include "CKBlackholeModel.h"

@class NSString;

@interface CKBlackholeConversationsModel : NSObject

@property (weak, nonatomic) CKBlackholeModel *coordinator;
@property (readonly, copy, nonatomic) NSString *navigationTitle;
@property (readonly, copy, nonatomic) NSString *headerText;
@property (readonly, copy, nonatomic) NSString *clearAllText;
@property (readonly, copy, nonatomic) NSString *noContentText;

/* instance methods */
- (id)initWithCoordinator:(id)coordinator;
- (id)_alertTitleForDelete;
- (id)_alertTitleForClearAll;
- (void)reloadData;
- (void)_shouldUpdateConversationList;
- (void)_updateConversationList;
- (void)deleteWithIdentifiers:(id)identifiers report:(BOOL)report;
- (void)clearAllAndReport:(BOOL)report;
- (void)_batchDeleteConversations:(id)conversations;
- (void)restoreWithIdentifier:(id)identifier;
@end

#endif /* CKBlackholeConversationsModel_h */
