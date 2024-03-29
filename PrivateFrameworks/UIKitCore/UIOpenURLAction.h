//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIOpenURLAction_h
#define UIOpenURLAction_h
@import Foundation;

#include "UISOpenURLAction.h"
#include "UISceneOpenURLOptions.h"

@interface UIOpenURLAction : UISOpenURLAction

@property (readonly, nonatomic) UISceneOpenURLOptions *localOpenURLOptions;

/* instance methods */
- (id)initWithURL:(id)url openURLOptions:(id)urloptions workspaceOriginatingProcess:(id)process responder:(id)responder;
@end

#endif /* UIOpenURLAction_h */
