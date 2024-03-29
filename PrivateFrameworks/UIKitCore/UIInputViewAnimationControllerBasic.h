//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIInputViewAnimationControllerBasic_h
#define UIInputViewAnimationControllerBasic_h
@import Foundation;

#include "UIInputViewAnimationController-Protocol.h"

@class NSString;

@interface UIInputViewAnimationControllerBasic : NSObject<UIInputViewAnimationController>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)prepareAnimationWithHost:(id)host startPlacement:(id)placement endPlacement:(id)placement;
- (void)performAnimationWithHost:(id)host context:(id)context;
- (void)completeAnimationWithHost:(id)host context:(id)context;
@end

#endif /* UIInputViewAnimationControllerBasic_h */
