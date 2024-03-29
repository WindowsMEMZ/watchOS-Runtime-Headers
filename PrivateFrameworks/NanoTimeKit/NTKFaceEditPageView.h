//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKFaceEditPageView_h
#define NTKFaceEditPageView_h
@import Foundation;

#include "UIView.h"
#include "NTKFaceEditPageViewDelegate-Protocol.h"
#include "PUICCrownInputSequencerDelegate-Protocol.h"
#include "_NTKAddColorsView.h"

@class CLKDevice, NSMutableDictionary, NSString, UILabel, UIView;

@interface NTKFaceEditPageView : UIView<PUICCrownInputSequencerDelegate> {
  /* instance variables */
  CLKDevice *_device;
  NSMutableDictionary *_keylineContainers;
  BOOL _shouldBreatheOnKeylineSelection;
  BOOL _cleaningUpBreathing;
  UILabel *_infoLabel;
  _NTKAddColorsView *_addColorsView;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _prevLayoutRect;
}

@property (readonly, nonatomic) long long editMode;
@property (weak, nonatomic) NSObject<NTKFaceEditPageViewDelegate> *delegate;
@property (retain, nonatomic) UIView *contentView;
@property (readonly, nonatomic) NSString *selectedKey;
@property (readonly, nonatomic) unsigned long long numberOfLisaValues;
@property (nonatomic) unsigned long long currentLisaValue;
@property (readonly, nonatomic) double lisaValueHeight;
@property (copy, nonatomic) id /* block */ didStopHandler;
@property (copy, nonatomic) id /* block */ didScrollHandler;
@property (copy, nonatomic) id /* block */ discreteScrollHandler;
@property (nonatomic) unsigned long long detentType;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) double addColorAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEditMode:(long long)mode forDevice:(id)device;
- (void)setNumberOfLisaValues:(unsigned long long)values currentValue:(unsigned long long)value valueHeight:(double)height;
- (void)addKeyline:(id)keyline forKey:(id)key tappable:(BOOL)tappable;
- (void)setSelectedKeylineFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame forKey:(id)key;
- (void)setDeselectedKeylineFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame forKey:(id)key;
- (void)setLabelText:(id)text forKey:(id)key;
- (void)setLabelAlignment:(unsigned long long)alignment forKey:(id)key;
- (void)setLabelActiveAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets forKey:(id)key;
- (void)selectKeylineForKey:(id)key;
- (void)removeAllKeylines;
- (id)keylineViewForKey:(id)key;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })keylineLabelFrameForKey:(id)key;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })keylineLabelFrameForKey:(id)key gettingLabelAnchorPoint:(struct CGPoint { double x0; double x1; } *)point;
- (void)setInfoText:(id)text;
- (void)applyRubberBandFraction:(double)fraction;
- (void)startBreathing;
- (void)startBreathingAfterDelay:(double)delay;
- (void)stopBreathingForLisaInteraction:(BOOL)interaction completion:(id /* block */)completion;
- (void)cleanupBreathingWithCompletion:(id /* block */)completion;
- (void)_handleKeylineTap:(id)tap;
- (BOOL)_isSelected:(id)selected;
- (id)_keylineContainerForKey:(id)key;
- (void)_startSelectedKeylineBreathing;
- (void)_updateKeylineForKey:(id)key;
- (void)_addColorsTapped;
- (void)layoutSubviews;
@end

#endif /* NTKFaceEditPageView_h */
