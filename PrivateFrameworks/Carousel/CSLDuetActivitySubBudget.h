//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLDuetActivitySubBudget_h
#define CSLDuetActivitySubBudget_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSMutableOrderedSet, NSString;

@interface CSLDuetActivitySubBudget : NSObject<NSCopying, BSDescriptionProviding> {
  /* instance variables */
  struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
}

@property (readonly, nonatomic) unsigned long long refreshCredits;
@property (readonly, nonatomic) unsigned long long maxSimultaneousApps;
@property (nonatomic) unsigned long long recentSimultaneousApps;
@property (readonly, nonatomic) NSMutableOrderedSet *eligibleBundleIDs;
@property (nonatomic) long long credits;
@property (readonly, nonatomic) unsigned long long budgetClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)subBudgetWithClass:(unsigned long long)class refreshCredits:(unsigned long long)credits maxSimultaenousApps:(unsigned long long)apps;

/* instance methods */
- (id)init;
- (id)initWithClass:(unsigned long long)class refreshCredits:(unsigned long long)credits maxSimultaneousApps:(unsigned long long)apps;
- (void)_withLock:(id /* block */)lock;
- (void)refresh;
- (void)updateRecentSimultaneousApps;
- (void)addEligibleBundleIDs:(id)ids;
- (void)removeEligibleBundleIDs:(id)ids;
- (void)addEligibleBundleID:(id)id;
- (void)removeEligibleBundleID:(id)id;
- (long long)creditLimit;
- (id)budgetDictionaryWithHistory:(id)history;
- (id)_lock_budgetDictionaryWithHistory:(id)history;
- (void)deduct;
- (void)credit;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* CSLDuetActivitySubBudget_h */
