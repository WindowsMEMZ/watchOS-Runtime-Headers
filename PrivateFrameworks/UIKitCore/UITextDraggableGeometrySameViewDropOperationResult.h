//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITextDraggableGeometrySameViewDropOperationResult_h
#define UITextDraggableGeometrySameViewDropOperationResult_h
@import Foundation;

#include "UITextRange.h"

@interface UITextDraggableGeometrySameViewDropOperationResult : NSObject

@property (readonly, nonatomic) UITextRange *resultRange;
@property (readonly, nonatomic) id /* block */ targetedPreviewProvider;

/* class methods */
+ (id)resultWithRange:(id)range targetedPreviewProvider:(id /* block */)provider;

/* instance methods */
- (id)initWithRange:(id)range targetedPreviewProvider:(id /* block */)provider;
@end

#endif /* UITextDraggableGeometrySameViewDropOperationResult_h */
