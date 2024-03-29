//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUIScenePresentationProvider_h
#define WNUIScenePresentationProvider_h
@import Foundation;

#include "WNUIScenePresentationProviderDelegate-Protocol.h"
#include "WNUIScenePresentationProviderInputState.h"

@class NSArray;

@interface WNUIScenePresentationProvider : NSObject

@property (nonatomic) unsigned long long transactionCount;
@property (copy, nonatomic) WNUIScenePresentationProviderInputState *pendingInputState;
@property (copy, nonatomic) WNUIScenePresentationProviderInputState *inputState;
@property (weak, nonatomic) NSObject<WNUIScenePresentationProviderDelegate> *delegate;
@property (readonly, nonatomic) NSArray *effectivePresentations;

/* instance methods */
- (id)init;
- (void)_beginUpdates;
- (void)_endUpdates;
- (void)_commitUpdates;
- (id)beginUpdateTransaction;
- (void)applyPresentations:(id)presentations;
- (void)applyAlertModel:(id)model;
- (void)_updateInputStateWithBlock:(id /* block */)block;
- (id)effectivePresentationsForInputState:(id)state;
@end

#endif /* WNUIScenePresentationProvider_h */
