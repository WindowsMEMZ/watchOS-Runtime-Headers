//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUIPressAndHoldView_h
#define TUIPressAndHoldView_h
@import Foundation;

#include "UIView.h"
#include "TUIPressAndHoldGrid.h"
#include "TUIPressAndHoldGridDelegate-Protocol.h"

@class NSArray, NSIndexPath, NSString;
@protocol TUIPressAndHoldViewDelegate;

@interface TUIPressAndHoldView : UIView<TUIPressAndHoldGridDelegate>

@property (retain, nonatomic) TUIPressAndHoldGrid *pressAndHoldGrid;
@property (readonly, nonatomic) NSArray *accentVariants;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (readonly, nonatomic) NSString *selectedAccentVariant;
@property (weak, nonatomic) NSObject<TUIPressAndHoldViewDelegate> *delegate;
@property (readonly, nonatomic) NSString *currentKeyString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)accentedCharactersForKeyString:(id)string;
+ (struct CGSize { double x0; double x1; })requiredPopoverSizeForKeyString:(id)string;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame keyString:(id)string;
- (BOOL)hasAccentVariantInForwardDirection:(BOOL)direction;
- (void)showAccentVariantInForwardDirection:(BOOL)direction;
- (BOOL)handleNumberKey:(unsigned long long)key;
- (BOOL)pressAndHoldGridHasSelectedIndexPath;
- (BOOL)handleSelection;
- (void)pressAndHoldGridDidAcceptAccentVariant:(id)variant atIndexPath:(id)path;
@end

#endif /* TUIPressAndHoldView_h */
