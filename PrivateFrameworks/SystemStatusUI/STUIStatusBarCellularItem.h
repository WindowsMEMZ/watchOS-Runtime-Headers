//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STUIStatusBarCellularItem_h
#define STUIStatusBarCellularItem_h
@import Foundation;

#include "STUIStatusBarItem.h"
#include "STUIStatusBarCellularItemTypeStringProvider-Protocol.h"
#include "STUIStatusBarCellularSignalView.h"
#include "STUIStatusBarImageView.h"
#include "STUIStatusBarStringView.h"

@class NSString;

@interface STUIStatusBarCellularItem : STUIStatusBarItem

@property (readonly, nonatomic) NSString *cellularDataEntryKey;
@property (retain, nonatomic) STUIStatusBarStringView *serviceNameView;
@property (retain, nonatomic) STUIStatusBarCellularSignalView *signalView;
@property (retain, nonatomic) STUIStatusBarStringView *networkTypeView;
@property (retain, nonatomic) STUIStatusBarImageView *warningView;
@property (retain, nonatomic) STUIStatusBarImageView *callForwardingView;
@property (retain, nonatomic) STUIStatusBarStringView *rawStringView;
@property (nonatomic) BOOL showsDisabledSignalBars;
@property (nonatomic) BOOL marqueeServiceName;
@property (weak, nonatomic) NSObject<STUIStatusBarCellularItemTypeStringProvider> *typeStringProvider;

/* class methods */
+ (id)groupWithHighPriority:(long long)priority lowPriority:(long long)priority typeClass:(Class)class allowDualNetwork:(BOOL)network;
+ (id)signalStrengthDisplayIdentifier;
+ (id)warningDisplayIdentifier;
+ (id)nameDisplayIdentifier;
+ (id)typeDisplayIdentifier;
+ (id)callForwardingDisplayIdentifier;
+ (id)rawDisplayIdentifier;

/* instance methods */
- (id)initWithIdentifier:(id)identifier statusBar:(id)bar;
- (id)dependentEntryKeys;
- (id)_fillColorForUpdate:(id)update entry:(id)entry;
- (id)_backgroundColorForUpdate:(id)update entry:(id)entry;
- (BOOL)_updateSignalView:(id)view withUpdate:(id)update entry:(id)entry forceShowingDisabledSignalBars:(BOOL)bars;
- (id)entryForDisplayItemWithIdentifier:(id)identifier;
- (id)applyUpdate:(id)update toDisplayItem:(id)item;
- (id)_stringForCellularType:(long long)type;
- (BOOL)_showCallFowardingForEntry:(id)entry;
- (void)prepareAnimation:(id)animation forDisplayItem:(id)item;
- (void)_create_signalView;
- (void)_create_serviceNameView;
- (void)_create_networkTypeView;
- (void)_create_warningView;
- (void)_create_callForwardingView;
- (void)_create_rawStringView;
- (void)setmarqueeServiceName:(BOOL)name;
- (id)viewForIdentifier:(id)identifier;
@end

#endif /* STUIStatusBarCellularItem_h */
