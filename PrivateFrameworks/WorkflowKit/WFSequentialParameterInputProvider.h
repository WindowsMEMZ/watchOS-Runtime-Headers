//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFSequentialParameterInputProvider_h
#define WFSequentialParameterInputProvider_h
@import Foundation;

#include "WFAction.h"
#include "WFSequentialParameterInputProviderDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSMutableOrderedSet;

@interface WFSequentialParameterInputProvider : NSObject

@property (retain, nonatomic) WFAction *fakeAction;
@property (retain, nonatomic) NSMutableOrderedSet *queuedParameters;
@property (retain, nonatomic) NSDictionary *defaultStates;
@property (retain, nonatomic) NSDictionary *prompts;
@property (retain, nonatomic) NSMutableDictionary *inputtedStates;
@property (weak, nonatomic) NSObject<WFSequentialParameterInputProviderDelegate> *delegate;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)startWithAction:(id)action parameters:(id)parameters defaultStates:(id)states prompts:(id)prompts;
- (void)askForParameterIfAvailable;
- (void)persistInFlightParameters;
@end

#endif /* WFSequentialParameterInputProvider_h */
