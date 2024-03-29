//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1430.300.81.0.0
//
#ifndef TPAlertAction_h
#define TPAlertAction_h
@import Foundation;

#include "UIAlertAction.h"

@interface TPAlertAction : UIAlertAction

@property (copy, nonatomic) id /* block */ handler;

/* class methods */
+ (id)actionWithTitle:(id)title style:(long long)style handler:(id /* block */)handler;
+ (id)actionWithType:(unsigned long long)type;
+ (id)preferencesURLForClassName:(id)name;

/* instance methods */
@end

#endif /* TPAlertAction_h */
