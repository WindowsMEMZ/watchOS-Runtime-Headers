//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDashboardAuxiliaryPassInformationPresenter_h
#define PKDashboardAuxiliaryPassInformationPresenter_h
@import Foundation;

#include "PKDashboardAuxiliaryPassInformationItemCollectionViewCell.h"
#include "PKDashboardItemPresenter-Protocol.h"

@class NSString, PKSecureElementPass;

@interface PKDashboardAuxiliaryPassInformationPresenter : NSObject<PKDashboardItemPresenter> {
  /* instance variables */
  PKDashboardAuxiliaryPassInformationItemCollectionViewCell *_sampleCell;
  PKSecureElementPass *_pass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPass:(id)pass;
- (Class)itemClass;
- (id)collectionViewCellClasses;
- (void)traitCollectionDidChangeFromTrait:(id)trait toTrait:(id)trait inCollectionView:(id)view;
- (BOOL)canSelectItem:(id)item inCollectionView:(id)view atIndexPath:(id)path;
- (void)didSelectItem:(id)item inCollectionView:(id)view atIndexPath:(id)path navigationController:(id)controller canPresent:(id /* block */)present;
- (id)cellForItem:(id)item inCollectionView:(id)view atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)item inCollectionView:(id)view atIndexPath:(id)path;
- (void)updateCell:(id)cell forItem:(id)item inCollectionView:(id)view atIndexPath:(id)path;
- (void)_configureCell:(id)cell forItem:(id)item inCollectionView:(id)view forIndexPath:(id)path;
@end

#endif /* PKDashboardAuxiliaryPassInformationPresenter_h */
