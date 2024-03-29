//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIPlaceholderWindowScene_h
#define _UIPlaceholderWindowScene_h
@import Foundation;

#include "_UIScreenBasedWindowScene.h"
#include "_UIContextBinderContextCreationPolicyHolding-Protocol.h"

@class NSString;

@interface _UIPlaceholderWindowScene : _UIScreenBasedWindowScene<_UIContextBinderContextCreationPolicyHolding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)alwaysKeepContexts;
+ (BOOL)shouldAllowComponents;
+ (BOOL)autoInvalidates;

/* instance methods */
- (BOOL)_permitContextCreationForBindingDescription:(struct { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; })description;
@end

#endif /* _UIPlaceholderWindowScene_h */
