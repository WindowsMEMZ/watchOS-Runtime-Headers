//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBRenderFactoryiPadFudgePasscode_h
#define UIKBRenderFactoryiPadFudgePasscode_h
@import Foundation;

#include "UIKBRenderFactoryiPadFudge.h"

@interface UIKBRenderFactoryiPadFudgePasscode : UIKBRenderFactoryiPadFudge
/* instance methods */
- (id)defaultKeyBackgroundColorName;
- (double)passcodeEdgeWeight;
- (id)backgroundTraitsForKeyplane:(id)keyplane;
- (id)controlKeyTraits;
- (id)activeControlKeyTraits;
- (id)shiftLockControlKeyTraits;
- (id)hashStringElement;
- (id)_traitsForKey:(id)key onKeyplane:(id)keyplane;
@end

#endif /* UIKBRenderFactoryiPadFudgePasscode_h */
