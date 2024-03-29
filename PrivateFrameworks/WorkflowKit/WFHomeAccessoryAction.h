//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFHomeAccessoryAction_h
#define WFHomeAccessoryAction_h
@import Foundation;

#include "WFAction.h"
#include "WFHomeManagerEventObserver-Protocol.h"

@class HMHome, NSArray, NSString;

@interface WFHomeAccessoryAction : WFAction<WFHomeManagerEventObserver>

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSArray *actionSets;
@property (readonly, nonatomic) NSArray *shortcutsDictionaryRepresentations;
@property (readonly, nonatomic) NSString *homeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)homeAccessoryActionWithTriggerActionSetsBuilder:(id)builder;
+ (id)homeAccessoryActionWithHome:(id)home actionSets:(id)sets;

/* instance methods */
- (void)initializeParameters;
- (void)dealloc;
- (void)runAsynchronouslyWithInput:(id)input;
- (void)performHomeAccessoryAction;
- (id)localizedName;
- (id)localizedDescriptionSummary;
- (id)localizedAttribution;
- (id)homeName;
- (id)parameterSummaryString;
- (void)localizedParameterSummaryWithCompletion:(id /* block */)completion;
- (id)localizedSummaryText;
- (void)homeManagerDidUpdateHomes:(id)homes;
@end

#endif /* WFHomeAccessoryAction_h */
