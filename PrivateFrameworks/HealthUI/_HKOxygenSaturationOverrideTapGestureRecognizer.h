//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKOxygenSaturationOverrideTapGestureRecognizer_h
#define _HKOxygenSaturationOverrideTapGestureRecognizer_h
@import Foundation;

#include "UITapGestureRecognizer.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString;

@interface _HKOxygenSaturationOverrideTapGestureRecognizer : UITapGestureRecognizer<UIGestureRecognizerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
@end

#endif /* _HKOxygenSaturationOverrideTapGestureRecognizer_h */
