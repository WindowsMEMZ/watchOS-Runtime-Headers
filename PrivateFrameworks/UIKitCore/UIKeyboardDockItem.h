//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardDockItem_h
#define UIKeyboardDockItem_h
@import Foundation;

#include "UIImage.h"
#include "UIKeyboardDockItemButton.h"
#include "UILongPressGestureRecognizer.h"
#include "UIPanGestureRecognizer.h"

@class NSString;

@interface UIKeyboardDockItem : NSObject

@property (retain, nonatomic) UIKeyboardDockItemButton *button;
@property (nonatomic) struct CGPoint { double x0; double x1; } touchDownPoint;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIKeyboardDockItemButton *view;

/* class methods */
+ (id)_standardGlyphColor;
+ (id)_darkStyleGlyphColor;

/* instance methods */
- (id)initWithTitle:(id)title image:(id)image identifier:(id)identifier;
- (BOOL)isEqual:(id)equal;
- (void)setTitle:(id)title image:(id)image;
@end

#endif /* UIKeyboardDockItem_h */
