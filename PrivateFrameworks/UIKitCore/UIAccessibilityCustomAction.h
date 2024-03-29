//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIAccessibilityCustomAction_h
#define UIAccessibilityCustomAction_h
@import Foundation;

#include "UIImage.h"

@class NSAttributedString, NSString;

@interface UIAccessibilityCustomAction : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSAttributedString *attributedName;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (copy, nonatomic) id /* block */ actionHandler;

/* instance methods */
- (id)init;
- (id)initWithName:(id)name image:(id)image target:(id)target selector:(SEL)selector;
- (id)initWithAttributedName:(id)name image:(id)image target:(id)target selector:(SEL)selector;
- (id)initWithName:(id)name image:(id)image actionHandler:(id /* block */)handler;
- (id)initWithAttributedName:(id)name image:(id)image actionHandler:(id /* block */)handler;
- (id)initWithName:(id)name target:(id)target selector:(SEL)selector;
- (id)initWithAttributedName:(id)name target:(id)target selector:(SEL)selector;
- (id)initWithName:(id)name actionHandler:(id /* block */)handler;
- (id)initWithAttributedName:(id)name actionHandler:(id /* block */)handler;
@end

#endif /* UIAccessibilityCustomAction_h */
