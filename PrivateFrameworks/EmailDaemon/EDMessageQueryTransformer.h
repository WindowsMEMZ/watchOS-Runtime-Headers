//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDMessageQueryTransformer_h
#define EDMessageQueryTransformer_h
@import Foundation;

#include "EDMailboxPersistence.h"
#include "EDMessagePersistence.h"
#include "EMVIPManager-Protocol.h"

@protocol EDAccountsProvider;

@interface EDMessageQueryTransformer : NSObject

@property (readonly, nonatomic) NSObject<EDAccountsProvider> *accountsProvider;
@property (readonly, nonatomic) EDMailboxPersistence *mailboxPersistence;
@property (readonly, weak, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) NSObject<EMVIPManager> *vipManager;

/* instance methods */
- (id)initWithAccountsProvider:(id)provider mailboxPersistence:(id)persistence messagePersistence:(id)persistence vipManager:(id)manager;
- (id)transformPredicate:(id)predicate;
- (id)transformCompoundPredicate:(id)predicate;
- (id)transformSubpredicates:(id)subpredicates;
- (id)transformComparisonPredicate:(id)predicate;
@end

#endif /* EDMessageQueryTransformer_h */
