//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STUIStatusBarCellularCondensedItem_h
#define STUIStatusBarCellularCondensedItem_h
@import Foundation;

#include "STUIStatusBarCellularItem.h"
#include "STUIStatusBarCellularNetworkTypeView.h"
#include "STUIStatusBarDualCellularSignalView.h"
#include "STUIStatusBarEmergencySignalView.h"
#include "STUIStatusBarMultilineStringView.h"
#include "STUIStatusBarStringView.h"

@interface STUIStatusBarCellularCondensedItem : STUIStatusBarCellularItem

@property (retain, nonatomic) STUIStatusBarDualCellularSignalView *dualSignalView;
@property (retain, nonatomic) STUIStatusBarMultilineStringView *dualNameView;
@property (retain, nonatomic) STUIStatusBarStringView *dualSingleLineNameView;
@property (retain, nonatomic) STUIStatusBarStringView *dualSingleLineNameAndTypeView;
@property (retain, nonatomic) STUIStatusBarEmergencySignalView *sosSignalView;
@property (retain, nonatomic) STUIStatusBarCellularNetworkTypeView *animatedNetworkTypeView;
@property (nonatomic) BOOL reducesFontSize;

/* class methods */
+ (id)groupWithHighPriority:(long long)priority lowPriority:(long long)priority typeClass:(Class)class allowDualNetwork:(BOOL)network;
+ (id)dualSignalStrengthDisplayIdentifier;
+ (id)dualNameDisplayIdentifier;
+ (id)dualSingleLineNameDisplayIdentifier;
+ (id)dualSingleLineNameAndTypeDisplayIdentifier;
+ (id)sosSignalStrengthDisplayIdentifier;
+ (id)animatedTypeDisplayIdentifier;

/* instance methods */
- (id)initWithIdentifier:(id)identifier statusBar:(id)bar;
- (id)dependentEntryKeys;
- (BOOL)canEnableDisplayItem:(id)item fromData:(id)data;
- (id)applyUpdate:(id)update toDisplayItem:(id)item;
- (void)applyStyleAttributes:(id)attributes toDisplayItem:(id)item;
- (id)_stringForCellularType:(long long)type;
- (id)_fontForEntry:(id)entry styleAttributes:(id)attributes baselineOffset:(double *)offset;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_nonCondensedFontRangeForEntry:(id)entry;
- (id)_singleCellularEntryMatching:(id /* block */)matching;
- (BOOL)_showCallFowardingForEntry:(id)entry;
- (BOOL)_animateServiceType:(long long)type prefixLength:(long long *)length currentType:(long long)type;
- (void)prepareAnimation:(id)animation forDisplayItem:(id)item;
- (id)entryForDisplayItemWithIdentifier:(id)identifier;
- (void)_create_dualSignalView;
- (void)_create_dualNameView;
- (void)_create_dualSingleLineNameView;
- (void)_create_dualSingleLineNameAndTypeView;
- (void)_create_sosSignalView;
- (void)_create_animatedNetworkTypeView;
- (id)viewForIdentifier:(id)identifier;
@end

#endif /* STUIStatusBarCellularCondensedItem_h */
