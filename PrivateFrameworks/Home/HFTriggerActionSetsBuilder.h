//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFTriggerActionSetsBuilder_h
#define HFTriggerActionSetsBuilder_h
@import Foundation;

#include "HFComparable-Protocol.h"
#include "HFMutableSetDiff.h"
#include "HFSetDiff.h"
#include "HFTriggerAnonymousActionSetBuilder.h"
#include "NSCopying-Protocol.h"

@class HMHome, HMShortcutAction, NSArray, NSString, WFHomeWorkflow;

@interface HFTriggerActionSetsBuilder : NSObject<HFComparable, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HFTriggerAnonymousActionSetBuilder *anonymousActionSetBuilder;
@property (retain, nonatomic) HFMutableSetDiff *actionSetBuilders;
@property (retain, nonatomic) HMShortcutAction *shortcutAction;
@property (readonly, nonatomic) NSArray *allActionSets;
@property (readonly, nonatomic) NSArray *allActionBuilders;
@property (readonly, nonatomic) NSArray *namedActionSets;
@property (readonly, nonatomic) NSArray *anonymousActionBuilder;
@property (readonly, nonatomic) HFSetDiff *namedActionSetsDiff;
@property (readonly, nonatomic) BOOL hasActions;
@property (readonly, nonatomic) BOOL actionsAffectedByEndEvents;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) BOOL isShortcutOwned;
@property (retain, nonatomic) WFHomeWorkflow *homeWorkflow;

/* instance methods */
- (id)compareToObject:(id)object;
- (void)updateActionSetsInTriggerBuilder:(id)builder;
- (id)actionSetsSummary;
- (id)_generateSummaryInformation;
- (id)_generateSummaryInformationForShortcutOwnedTrigger;
- (id)_generateSummaryInformationForStandardTrigger;
- (void)_generateStandaloneServices:(id)services andMediaAccessories:(id)accessories;
- (id)_uniqueServiceGroupForServices:(id)services;
- (id)mediaAccessoriesForPlaybackAction:(id)action;
- (id)initWithActionSets:(id)sets inHome:(id)home;
- (id)initWithActionSets:(id)sets inHome:(id)home filterEmptyActionSets:(BOOL)sets;
- (id)_removeDuplicateActionSets:(id)sets;
- (id)_removeEmptyActionSets:(id)sets;
- (void)setFromTriggerActionSetsBuilder:(id)builder;
- (void)updateFromTriggerActionSetsBuilder:(id)builder;
- (void)addActionSetBuilder:(id)builder;
- (void)updateActionSetBuilder:(id)builder;
- (void)removeActionSetBuilder:(id)builder;
- (void)addAnonymousActionBuilder:(id)builder;
- (void)updateAnonymousActionBuilder:(id)builder;
- (void)removeAnonymousActionBuilder:(id)builder;
- (void)removeAllActionsAndActionSets;
- (BOOL)areActionsAffectedByEndEvents;
- (void)resetAllActionSets;
- (void)resetActionSetBuilders;
- (void)addActionSetIfNotPresent:(id)present;
- (void)removeActionSetIfPresent:(id)present;
- (id)createActionSetsForShortcuts;
- (void)convertToHomeWorkflowActionSet:(id)set;
- (void)convertToHomeWorkflowActionSetIfNeeded;
- (void)_removeAllNamedActionsSets;
- (void)defaultActionsForShortcut;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HFTriggerActionSetsBuilder_h */
