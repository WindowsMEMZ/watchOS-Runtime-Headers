//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextFieldPassthroughMetricsProvider_h
#define _UITextFieldPassthroughMetricsProvider_h
@import Foundation;

#include "_UITextFieldMetricsProvider-Protocol.h"

@class NSString;

@interface _UITextFieldPassthroughMetricsProvider : NSObject<_UITextFieldMetricsProvider>

@property (readonly, nonatomic) double naturalHeight;
@property (readonly, nonatomic) BOOL shouldExtendCaretHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGSize { double x0; double x1; })intrinsicSizeForContentSize:(struct CGSize { double x0; double x1; })size;
@end

#endif /* _UITextFieldPassthroughMetricsProvider_h */
