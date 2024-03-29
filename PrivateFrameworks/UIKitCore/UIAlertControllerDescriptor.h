//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIAlertControllerDescriptor_h
#define UIAlertControllerDescriptor_h
@import Foundation;

#include "NSCopying-Protocol.h"

@interface UIAlertControllerDescriptor : NSObject<NSCopying>

@property BOOL hasHeaderContentViewController;
@property BOOL hasTitle;
@property BOOL hasMessage;
@property BOOL hasContentViewController;
@property long long numberOfActions;
@property long long numberOfVisibleActions;
@property BOOL applicationIsFullscreen;
@property struct UIEdgeInsets { double x0; double x1; double x2; double x3; } containerViewSafeAreaInsets;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* UIAlertControllerDescriptor_h */
