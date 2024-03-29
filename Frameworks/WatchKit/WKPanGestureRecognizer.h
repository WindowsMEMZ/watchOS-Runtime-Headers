//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.2.0.0
//
#ifndef WKPanGestureRecognizer_h
#define WKPanGestureRecognizer_h
@import Foundation;

#include "WKGestureRecognizer.h"

@interface WKPanGestureRecognizer : WKGestureRecognizer

@property (nonatomic) struct CGPoint { double x0; double x1; } transInObject;
@property (nonatomic) struct CGPoint { double x0; double x1; } velInObject;

/* instance methods */
- (id)initWithController:(id)controller gestureData:(id)data;
- (void)_setGestureData:(id)data;
- (id)verboseDescription;
- (struct CGPoint { double x0; double x1; })translationInObject;
- (struct CGPoint { double x0; double x1; })velocityInObject;
@end

#endif /* WKPanGestureRecognizer_h */
