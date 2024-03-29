//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLMainSensorActivityStyleProvider_h
#define CSLMainSensorActivityStyleProvider_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "CSLMainSensorActivityStyleProviderConfiguration.h"
#include "CSLMainSensorActivityStyleProviderDelegate-Protocol.h"
#include "CSLMainSensorActivityStyleProviderState.h"
#include "CSLSensorActivityCompositeStylePolicy.h"
#include "CSLSensorActivityMainUIStylePolicy.h"
#include "CSLSensorActivityObserver-Protocol.h"
#include "CSLSensorActivityQuickBoardPublisher.h"
#include "CSLSensorActivityStylePolicyDelegate-Protocol.h"

@class CUISSensorActivityIndicatorClientSettingsAssertion, CUISSensorActivityIndicatorPlacement, NSString;

@interface CSLMainSensorActivityStyleProvider : NSObject<CSLSensorActivityStylePolicyDelegate, BSDescriptionProviding, CSLSensorActivityObserver>

@property (readonly, nonatomic) CSLMainSensorActivityStyleProviderConfiguration *configuration;
@property (readonly, nonatomic) CSLSensorActivityCompositeStylePolicy *rootPolicy;
@property (readonly, nonatomic) CSLSensorActivityMainUIStylePolicy *mainUIStylePolicy;
@property (readonly, nonatomic) CSLMainSensorActivityStyleProviderState *state;
@property (readonly, nonatomic) CSLSensorActivityQuickBoardPublisher *quickBoardPublisher;
@property (readonly, nonatomic) CUISSensorActivityIndicatorClientSettingsAssertion *quickBoardAssertion;
@property (weak, nonatomic) NSObject<CSLMainSensorActivityStyleProviderDelegate> *delegate;
@property (readonly, nonatomic) long long indicatorViewStyle;
@property (readonly, nonatomic) CUISSensorActivityIndicatorPlacement *placement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (void)startWithMainUIPolicyHandler:(id)handler;
- (void)_setIndicatorViewStyle:(long long)style;
- (void)_setPlacement:(id)placement;
- (void)_updateStateWithBlock:(id /* block */)block;
- (long long)indicatorStyleForAttributes:(id)attributes;
- (void)stylePolicyDidUpdate:(id)update;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (void)activityDidChangeForSensorActivityDataProvider:(id)provider;
@end

#endif /* CSLMainSensorActivityStyleProvider_h */
