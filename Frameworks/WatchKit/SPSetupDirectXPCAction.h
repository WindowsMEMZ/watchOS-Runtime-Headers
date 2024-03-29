//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.2.0.0
//
#ifndef SPSetupDirectXPCAction_h
#define SPSetupDirectXPCAction_h
@import Foundation;

#include "BSAction.h"

@class NSString, NSXPCListenerEndpoint;

@interface SPSetupDirectXPCAction : BSAction

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;

/* instance methods */
- (id)initWithListenerEndpoint:(id)endpoint clientIdentifier:(id)identifier timeout:(double)timeout forResponseOnQueue:(id)queue withHandler:(id /* block */)handler;
- (unsigned long long)PUICActionType;
- (id)keyDescriptionForSetting:(unsigned long long)setting;
@end

#endif /* SPSetupDirectXPCAction_h */
