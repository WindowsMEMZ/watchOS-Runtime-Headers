//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 378.2.12.0.0
//
#ifndef NCABContactCardAction_h
#define NCABContactCardAction_h
@import Foundation;

#include "NCABContactCardActionDelegate-Protocol.h"

@class CNContact, CNMutableContact, NSString, UIColor;

@interface NCABContactCardAction : NSObject

@property (weak, nonatomic) NSObject<NCABContactCardActionDelegate> *delegate;
@property (retain, nonatomic) CNContact *contact;
@property (readonly, nonatomic) CNMutableContact *mutableContact;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (nonatomic) BOOL destructive;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *glyphColor;
@property (nonatomic) BOOL showBackgroundPlatter;
@property (nonatomic) BOOL wrapTitle;
@property (readonly, nonatomic) BOOL canPerformAction;

/* class methods */
+ (id)contactActionWithTitle:(id)title target:(id)target selector:(SEL)selector;
+ (id)contactActionWithTitle:(id)title target:(id)target selector:(SEL)selector destructive:(BOOL)destructive;

/* instance methods */
- (id)init;
- (id)initWithContact:(id)contact;
- (id)initWithTitle:(id)title target:(id)target selector:(SEL)selector destructive:(BOOL)destructive;
- (void)performActionWithSender:(id)sender;
- (id)description;
- (BOOL)isDestructive;
@end

#endif /* NCABContactCardAction_h */
