//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFActionRegistry_h
#define WFActionRegistry_h
@import Foundation;

#include "WFActionProviderDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMapTable, NSOperationQueue, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface WFActionRegistry : NSObject<WFActionProviderDelegate>

@property (readonly, nonatomic) NSSet *identifiersOfActionsDisabledOnWatch;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheUpdateAndFillQueue;
@property (readonly, nonatomic) NSOperationQueue *prewarmingQueue;
@property (readonly, nonatomic) NSArray *actionProvidersForFilling;
@property (readonly, nonatomic) NSArray *actionProvidersForLoading;
@property (readonly, nonatomic) NSDictionary *actionsByIdentifier;
@property (readonly, nonatomic) NSMapTable *actionsByActionProvider;
@property (readonly, nonatomic) NSDictionary *actionsByCategory;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSSet *actions;
@property (readonly, nonatomic) NSSet *categories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)supportedContentItemClassesForContentSelection;
+ (id)sharedRegistry;

/* instance methods */
- (id)residentCompatibleActionsForHome:(id)home;
- (id)residentCompatibleActionsForCategory:(id)category home:(id)home;
- (id)residentBasedActionsForHome:(id)home residentCompatible:(BOOL)compatible;
- (id)suggestionsForHome:(id)home includingRelatedActions:(BOOL)actions;
- (void)actionsBySpecializingActions:(id)actions forHomes:(id)homes completionBlock:(id /* block */)block;
- (id)actionsBySpecializingActions:(id)actions forHomes:(id)homes;
- (id)residentCompatibleActionsFromActions:(id)actions inHome:(id)home;
- (id)updatedActionForResidentCompatibility:(id)compatibility inHome:(id)home;
- (id)createActionForSelectingContentOfType:(Class)type serializedParameters:(id)parameters;
- (id)createActionsForSelectingContentOfTypes:(id)types serializedParameterArray:(id)array;
- (id)defaultSerializedParametersForActionSelectingContentOfType:(Class)type;
- (id)createActionWithDonation:(id)donation;
- (id)replacementActionForDonatedIntent:(id)intent;
- (id)createActionWithShortcut:(id)shortcut error:(id *)error;
- (id)init;
- (id)createActionWithIdentifier:(id)identifier serializedParameters:(id)parameters;
- (id)createActionWithIdentifier:(id)identifier serializedParameters:(id)parameters forceLocalActionsOnly:(BOOL)only;
- (id)createActionsWithIdentifiers:(id)identifiers serializedParameterArray:(id)array;
- (id)createActionsWithIdentifiers:(id)identifiers serializedParameterArray:(id)array forceLocalActionsOnly:(BOOL)only;
- (id)replacementActionForActionIdentifier:(id)identifier serializedParameters:(id)parameters;
- (id)actionsForCategory:(id)category;
- (id)actionsForAppWithIdentifier:(id)identifier;
- (void)fill;
- (void)updateCachesAndFill;
- (void)fillActionProviders:(id)providers updatingCache:(BOOL)cache;
- (void)prewarmActionResourcesForProviderActions:(id)actions;
- (void)updateCacheWithCompletion:(id /* block */)completion;
- (void)setActions:(id)actions forProvider:(id)provider;
- (void)removeActionsWithIdentifiers:(id)identifiers fromActionProvider:(id)provider;
- (void)addActions:(id)actions fromActionProvider:(id)provider;
- (void)actionProviderDidChange:(id)change updatedActions:(id)actions removedActions:(id)actions addedActions:(id)actions;
@end

#endif /* WFActionRegistry_h */
