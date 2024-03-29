//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITextDragFinishState_h
#define UITextDragFinishState_h
@import Foundation;

#include "UITextDragFinishState-Protocol.h"

@class NSString;

@interface UITextDragFinishState : NSObject<UITextDragFinishState>

@property (nonatomic) BOOL dragTearoffOccured;
@property (nonatomic) struct CGPoint { double x0; double x1; } location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

#endif /* UITextDragFinishState_h */
