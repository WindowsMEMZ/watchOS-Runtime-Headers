//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIStatusBarSystemNavigationAction_h
#define _UIStatusBarSystemNavigationAction_h
@import Foundation;

#include "_UIStatusBarAction.h"

@interface _UIStatusBarSystemNavigationAction : _UIStatusBarAction

@property (nonatomic) unsigned long long destination;

/* class methods */
+ (id)_navigationActionForDestination:(unsigned long long)destination;
+ (id)backNavigationAction;
+ (id)forwardNavigationAction;
@end

#endif /* _UIStatusBarSystemNavigationAction_h */
