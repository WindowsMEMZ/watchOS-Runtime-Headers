//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STUIStatusBarBackgroundActivityItem_h
#define STUIStatusBarBackgroundActivityItem_h
@import Foundation;

#include "STUIStatusBarIndicatorItem.h"
#include "STUIStatusBarActivityIconView.h"
#include "STUIStatusBarImageView.h"
#include "STUIStatusBarPillView.h"

@class NSString;

@interface STUIStatusBarBackgroundActivityItem : STUIStatusBarIndicatorItem

@property (retain, nonatomic) STUIStatusBarPillView *backgroundView;
@property (retain, nonatomic) STUIStatusBarActivityIconView *iconView;
@property (retain, nonatomic) STUIStatusBarImageView *secondaryIconView;
@property (retain, nonatomic) NSString *previousBackgroundActivityIdentifier;

/* class methods */
+ (id)backgroundDisplayIdentifier;
+ (id)secondaryIconDisplayIdentifier;
+ (BOOL)_identifierContainsItemImage:(id)image;
+ (BOOL)_identifierContainsSecondaryItemImage:(id)image;
+ (double)_verticalOffsetForActivityWithIdentifier:(id)identifier;
+ (double)_fontSizeAdjustmentForActivityWithIdentifier:(id)identifier;

/* instance methods */
- (id)indicatorEntryKey;
- (id)createDisplayItemForIdentifier:(id)identifier;
- (id)_backgroundActivityViewForIdentifier:(id)identifier;
- (BOOL)canEnableDisplayItem:(id)item fromData:(id)data;
- (id)applyUpdate:(id)update toDisplayItem:(id)item;
- (void)updatedDisplayItemsWithData:(id)data;
- (void)applyStyleAttributes:(id)attributes toDisplayItem:(id)item;
- (id)systemImageNameForUpdate:(id)update;
- (id)imageNameForUpdate:(id)update;
- (id)_systemImageNameForActivityWithIdentifier:(id)identifier;
- (id)_imageNameForActivityWithIdentifier:(id)identifier;
- (id)_textLabelForActivityWithIdentifier:(id)identifier;
- (id)imageForUpdate:(id)update;
- (id)_secondarySystemImageNameForActivityWithIdentifier:(id)identifier;
- (id)secondaryImageForUpdate:(id)update;
- (id)_backgroundColorForActivityWithIdentifier:(id)identifier;
- (BOOL)_shouldRingForActivityWithIdentifier:(id)identifier traitCollection:(id)collection;
- (BOOL)_shouldPulseBackgroundForActivityWithIdentifier:(id)identifier traitCollection:(id)collection;
- (BOOL)_shouldPulseSymbolForActivityWithIdentifier:(id)identifier traitCollection:(id)collection;
- (id)_visualEffectForActivityWithIdentifier:(id)identifier traitCollection:(id)collection;
- (void)_create_backgroundView;
- (void)_create_iconView;
- (void)_create_secondaryIconView;
- (id)imageView;
- (id)viewForIdentifier:(id)identifier;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)identifier;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)identifier;
- (BOOL)crossfadeForUpdate:(id)update;
@end

#endif /* STUIStatusBarBackgroundActivityItem_h */
