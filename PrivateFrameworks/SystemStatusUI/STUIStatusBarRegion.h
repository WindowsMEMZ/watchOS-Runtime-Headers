//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STUIStatusBarRegion_h
#define STUIStatusBarRegion_h
@import Foundation;

#include "BSDebugDescriptionProviding-Protocol.h"
#include "STUIStatusBar.h"
#include "STUIStatusBarAction.h"
#include "STUIStatusBarActionable-Protocol.h"
#include "STUIStatusBarDisplayItem.h"
#include "STUIStatusBarRegion.h"
#include "STUIStatusBarRegionLayout-Protocol.h"
#include "STUIStatusBarStyleAttributes.h"
#include "UILayoutItem-Protocol.h"

@class NSArray, NSDictionary, NSLayoutConstraint, NSMutableIndexSet, NSOrderedSet, NSSet, NSString, UILayoutGuide, UIView;

@interface STUIStatusBarRegion : NSObject<BSDebugDescriptionProviding, STUIStatusBarActionable>

@property (retain, nonatomic) NSMutableIndexSet *disablingTokens;
@property (retain, nonatomic) UILayoutGuide *layoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *centerXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *centerYConstraint;
@property (readonly, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *frozenView;
@property (readonly, nonatomic) NSArray *enabledDisplayItems;
@property (readonly, nonatomic) NSArray *currentEnabledDisplayItems;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) STUIStatusBar *statusBar;
@property (readonly, nonatomic) NSObject<UILayoutItem> *layoutItem;
@property (readonly, nonatomic) NSObject<UILayoutItem> *containerItem;
@property (retain, nonatomic) NSObject<STUIStatusBarRegionLayout> *layout;
@property (retain, nonatomic) NSSet *dependentRegionIdentifiers;
@property (readonly, nonatomic) BOOL enabled;
@property (weak, nonatomic) STUIStatusBarRegion *enabilityRegion;
@property (nonatomic) BOOL offsetable;
@property (nonatomic) struct UIOffset { double x0; double x1; } offset;
@property (nonatomic) BOOL frozen;
@property (nonatomic) double alpha;
@property (readonly, nonatomic) long long effectiveStyle;
@property (nonatomic) long long style;
@property (nonatomic) long long automaticStyle;
@property (nonatomic) long long overriddenStyle;
@property (retain, nonatomic) STUIStatusBarStyleAttributes *overriddenStyleAttributes;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) NSOrderedSet *displayItems;
@property (readonly, nonatomic) STUIStatusBarDisplayItem *overflowedDisplayItem;
@property (readonly, copy, nonatomic) NSDictionary *displayItemAbsoluteFrames;
@property (readonly, copy, nonatomic) NSDictionary *displayItemAbsolutePresentationFrames;
@property (nonatomic) BOOL needsReLayout;
@property (nonatomic) BOOL disableItemFrameBasedOverflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) STUIStatusBarAction *action;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } actionInsets;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (void)_addSubview:(id)subview atBack:(BOOL)back;
- (BOOL)isEnabled;
- (BOOL)disableWithToken:(unsigned long long)token;
- (BOOL)enableWithToken:(unsigned long long)token;
- (BOOL)isFrozen;
- (void)_overriddenStyleAttributesChanged;
- (id)displayItemForHUDAtLocation:(struct CGPoint { double x0; double x1; })location;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)debugDescriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)_descriptionBuilderWithMultilinePrefix:(id)prefix forDebug:(BOOL)debug;
@end

#endif /* STUIStatusBarRegion_h */
