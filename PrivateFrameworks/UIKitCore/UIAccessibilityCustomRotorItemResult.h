//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIAccessibilityCustomRotorItemResult_h
#define UIAccessibilityCustomRotorItemResult_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "UITextRange.h"

@class NSUUID;

@interface UIAccessibilityCustomRotorItemResult : NSObject

@property (retain, nonatomic) NSUUID *uuid;
@property (weak, nonatomic) NSObject<NSObject> *targetElement;
@property (retain, nonatomic) UITextRange *targetRange;

/* instance methods */
- (id)initWithTargetElement:(id)element targetRange:(id)range;
@end

#endif /* UIAccessibilityCustomRotorItemResult_h */
