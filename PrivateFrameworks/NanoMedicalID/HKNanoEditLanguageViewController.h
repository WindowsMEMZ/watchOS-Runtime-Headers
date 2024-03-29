//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKNanoEditLanguageViewController_h
#define HKNanoEditLanguageViewController_h
@import Foundation;

#include "PUICListCollectionViewController.h"
#include "HKNanoAllLanguagePickerDelegate-Protocol.h"
#include "HKNanoEditLanguageDiffableDataSource.h"
#include "PUICListCollectionViewDelegate-Protocol.h"

@class HKMedicalIDStore, HKSpokenLanguage, NSArray, NSIndexPath, NSMutableArray, NSString, _HKMedicalIDData;

@interface HKNanoEditLanguageViewController : PUICListCollectionViewController<PUICListCollectionViewDelegate, HKNanoAllLanguagePickerDelegate> {
  /* instance variables */
  _HKMedicalIDData *_medicalIDData;
  HKMedicalIDStore *_medicalIDStore;
  NSArray *_mostLikelyLanguages;
  NSMutableArray *_allSpokenLanguages;
  NSIndexPath *_currentlySelectedIndex;
}

@property (retain, nonatomic) HKSpokenLanguage *currentSelectedLanguage;
@property (retain, nonatomic) HKNanoEditLanguageDiffableDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)defaultCheckmarkImage;

/* instance methods */
- (id)initWithMedicalIDStore:(id)idstore medicalIDData:(id)iddata;
- (void)viewDidLoad;
- (void)cancelEditing;
- (void)doneEditing;
- (void)configureLanguageArrays;
- (void)configureDataSource;
- (id)snapshotForCurrentState;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)deselectCurrentIndexForCollectionView:(id)view newIndexPath:(id)path;
- (void)didSelectLanguage:(id)language;
- (id)indexPathForExistingSpokenLanguage:(id)language;
- (double)collectionView:(id)view layout:(id)layout estimatedHeightForHeaderInSection:(long long)section;
- (long long)collectionView:(id)view layout:(id)layout styleForSection:(long long)section;
@end

#endif /* HKNanoEditLanguageViewController_h */
