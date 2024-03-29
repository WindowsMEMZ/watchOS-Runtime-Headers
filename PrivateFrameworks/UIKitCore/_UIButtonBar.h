//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIButtonBar_h
#define _UIButtonBar_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "UIBarButtonItem.h"
#include "UIView.h"
#include "_UIBarButtonItemData.h"
#include "_UIBarButtonItemGroupOwner-Protocol.h"
#include "_UIBarButtonItemViewOwner-Protocol.h"
#include "_UIButtonBarAppearanceDelegate-Protocol.h"
#include "_UIButtonBarDelegate-Protocol.h"
#include "_UIButtonBarGroupOrderOwner-Protocol.h"
#include "_UIButtonBarGroupOrderer.h"
#include "_UIButtonBarLayoutMetrics.h"
#include "_UIButtonBarStackView.h"

@class NSArray, NSLayoutConstraint, NSLayoutDimension, NSMapTable, NSMutableArray, NSString;

@interface _UIButtonBar : NSObject<_UIButtonBarGroupOrderOwner, _UIBarButtonItemViewOwner, _UIBarButtonItemGroupOwner, NSCoding> {
  /* instance variables */
  _UIButtonBarStackView *_stackView;
  NSLayoutDimension *_flexibleSpaceEqualSizeAnchor;
  NSLayoutDimension *_minimumInterItemSpaceAnchor;
  NSLayoutConstraint *_minimumInterItemSpaceConstraint;
  UIView *_centeredView;
  NSLayoutConstraint *_centeringConstraint;
  _UIButtonBarLayoutMetrics *_layoutMetrics;
  NSMutableArray *_groupLayouts;
  NSMutableArray *_effectiveLayout;
  NSMapTable *_groupLayoutMap;
  NSMutableArray *_layoutViews;
  NSMutableArray *_layoutGuides;
  NSMutableArray *_layoutActiveConstraints;
  NSMapTable *_senderActionMap;
  struct { unsigned int x :1 isInLayoutReentrancyGuard; unsigned int x :1 needsAppearanceUpdate; unsigned int x :1 plainAppearanceChanged; unsigned int x :1 doneAppearanceChanged; unsigned int x :1 effectiveLayoutHasCriticalGroup; } _buttonBarFlags;
}

@property (copy, nonatomic) NSArray *fixedLeadingGroups;
@property (copy, nonatomic) NSArray *fixedTrailingGroups;
@property (weak, nonatomic) NSObject<_UIButtonBarDelegate> *delegate;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } widthInfo;
@property (nonatomic) double targetLayoutWidth;
@property (nonatomic) BOOL itemsInGroupUseSameSize;
@property (nonatomic) BOOL forceFixedSpacing;
@property (nonatomic) BOOL supportsOverflow;
@property (retain, nonatomic) _UIButtonBarGroupOrderer *groupOrderer;
@property (readonly, copy, nonatomic) NSArray *groupRealizedOrder;
@property (readonly, nonatomic) BOOL hasVisibleContent;
@property (nonatomic) BOOL supportsAlwaysOverflowGroups;
@property (readonly, nonatomic) BOOL hasAlwaysOverflowGroups;
@property (readonly, copy, nonatomic) NSArray *elementsForOverflowMenu;
@property (readonly, copy, nonatomic) NSArray *elementsRepresentingOrderedGroups;
@property (readonly, nonatomic) BOOL needsLeadingSpacer;
@property (readonly, nonatomic) BOOL needsTrailingSpacer;
@property (readonly, nonatomic) UIBarButtonItem *leadingVisibleItem;
@property (readonly, nonatomic) UIBarButtonItem *trailingVisibleItem;
@property (readonly, nonatomic) UIBarButtonItem *trailingClippingItem;
@property (copy, nonatomic) id /* block */ defaultActionFilter;
@property (weak, nonatomic) NSObject<_UIButtonBarAppearanceDelegate> *_appearanceDelegate;
@property (retain, nonatomic) _UIBarButtonItemData *plainItemAppearance;
@property (readonly, nonatomic) BOOL plainItemAppearanceNeedsUpdate;
@property (retain, nonatomic) _UIBarButtonItemData *doneItemAppearance;
@property (readonly, nonatomic) BOOL doneItemAppearanceNeedsUpdate;
@property (readonly, nonatomic) UIView *_viewForOverlayRects;
@property (copy, nonatomic) id /* block */ viewUpdater;
@property (readonly, nonatomic) UIView *view;
@property (copy, nonatomic) NSArray *barButtonGroups;
@property (nonatomic) double minimumInterItemSpace;
@property (nonatomic) BOOL allowsViewWrappers;
@property (nonatomic) long long itemDistribution;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } hitTestInsets;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } hitTestDirectionalInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)setNeedsHitTestUpdate;
- (void)_confirmOwnershipOfFixedGroups;
- (id)itemAtPoint:(struct CGPoint { double x0; double x1; })point inView:(id)view;
- (id)_targetActionForBarButtonItem:(id)item;
- (id)_layoutForGroup:(id)group;
- (void)_setNeedsVisualUpdate;
- (void)_enumerateLayoutGroups:(id /* block */)groups;
- (void)_enumerateAllGroups:(id /* block */)groups;
- (void)_layoutBar;
- (void)_updateHitRects;
- (void)_buttonBarStackViewDidLayoutSubviews:(id)subviews;
- (void)_updateForTraitCollectionChange:(id)change;
- (id)_updatedViewForBarButtonItem:(id)item withView:(id)view;
- (void)_validateAllItems;
- (void)_appearanceChanged;
- (void)_setNeedsAppearanceUpdate;
- (void)_itemCustomViewDidChange:(id)change fromView:(id)view;
- (void)_itemStandardViewNeedsUpdate:(id)update;
- (void)_itemDidChangeWidth:(id)width;
- (void)_itemDidChangeSelectionState:(id)state;
- (void)_itemDidChangeHiddenState:(id)state;
- (void)_itemDidChangeEnabledState:(id)state;
- (BOOL)_item:(id)_item addSymbolEffect:(id)effect options:(id)options animated:(BOOL)animated;
- (BOOL)_item:(id)_item removeSymbolEffectOfType:(id)type options:(id)options animated:(BOOL)animated;
- (BOOL)_item:(id)_item removeAllSymbolEffectsWithOptions:(id)options animated:(BOOL)animated;
- (void)_item:(id)_item applyContentTransition:(id)transition options:(id)options;
- (void)_groupDidUpdateItems:(id)items removedItems:(id)items;
- (void)_groupDidUpdateRepresentative:(id)representative fromRepresentative:(id)representative;
- (void)_groupDidUpdateVisibility:(id)visibility;
- (id)_groupOrdererGroups:(id)groups;
- (void)_groupOrdererDidUpdate:(id)update;
@end

#endif /* _UIButtonBar_h */
