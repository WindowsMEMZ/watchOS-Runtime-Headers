//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFOpenInAction_h
#define WFOpenInAction_h
@import Foundation;

#include "WFAction.h"

@class NSArray;

@interface WFOpenInAction : WFAction

@property (retain, nonatomic) NSArray *contentClasses;

/* class methods */
+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

/* instance methods */
- (void)runAsynchronouslyWithInput:(id)input;
- (void)runWithRemoteUserInterface:(id)interface input:(id)input;
- (void)openContentInSelectedApp:(id)app;
- (void)openContentUsingDefaultApp:(id)app;
- (BOOL)setParameterState:(id)state forKey:(id)key;
- (BOOL)inputsMultipleItems;
- (void)updateContentClasses;
- (id)inputContentClasses;
- (id)outputContentClasses;
- (id)selectedApp;
- (id)contentDestinationWithError:(id *)error;
@end

#endif /* WFOpenInAction_h */
