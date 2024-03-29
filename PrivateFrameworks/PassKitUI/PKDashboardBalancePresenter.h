//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDashboardBalancePresenter_h
#define PKDashboardBalancePresenter_h
@import Foundation;

#include "PKDashboardBalanceView.h"
#include "PKDashboardItemPresenter-Protocol.h"

@class NSString, UICollectionView;

@interface PKDashboardBalancePresenter : NSObject<PKDashboardItemPresenter> {
  /* instance variables */
  PKDashboardBalanceView *_sampleBalanceView;
  UICollectionView *_collectionView;
}

@property (nonatomic) long long cellStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (Class)itemClass;
- (id)collectionViewCellClasses;
- (id)_identifierForItem:(id)item;
- (id)cellForItem:(id)item inCollectionView:(id)view atIndexPath:(id)path;
- (void)updateCell:(id)cell forItem:(id)item inCollectionView:(id)view atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)item inCollectionView:(id)view atIndexPath:(id)path;
- (BOOL)canSelectItem:(id)item inCollectionView:(id)view atIndexPath:(id)path;
- (void)didSelectItem:(id)item inCollectionView:(id)view atIndexPath:(id)path navigationController:(id)controller canPresent:(id /* block */)present;
- (void)_updateBalanceView:(id)view withItem:(id)item;
- (void)traitCollectionDidChangeFromTrait:(id)trait toTrait:(id)trait inCollectionView:(id)view;
@end

#endif /* PKDashboardBalancePresenter_h */
