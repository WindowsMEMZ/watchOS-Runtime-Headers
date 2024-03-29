//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUTopLevelCollectionViewController_h
#define NMUTopLevelCollectionViewController_h
@import Foundation;

#include "NMUMPModelCollectionViewController.h"
#include "NMUMenuViewController.h"
#include "NMUTopLevelCollectionDelegate-Protocol.h"
#include "NMUTopLevelCollectionSyncInfoController.h"

@class MPIdentifierSet, NMCKeyValueObserver, NSIndexPath, NSString;

@interface NMUTopLevelCollectionViewController : NMUMPModelCollectionViewController<NMUTopLevelCollectionDelegate> {
  /* instance variables */
  NMUMenuViewController *_menuViewController;
  NMCKeyValueObserver *_menuContentSizeObserver;
  BOOL _hasScrolledToBottom;
  NSIndexPath *_lastNotifiedFirstVisibleItemIndexPath;
  MPIdentifierSet *_lastNotifiedFirstVisibleItemIdentifiers;
}

@property (weak, @dynamic, nonatomic) NSObject<NMUTopLevelCollectionDelegate> *delegate;
@property (retain, nonatomic) NMUTopLevelCollectionSyncInfoController *syncInfoController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (void)scrollToItemWithIdentifiers:(id)identifiers;
- (void)setNeedsContentLoaderUpdate;
- (void)setNeedsContentUnavailableViewUpdate;
- (void)configureCell:(id)cell withModelObject:(id)object atIndexPath:(id)path;
- (void)contentLoaderWillBeginLoadingContent:(id)content;
- (void)contentLoaderDidFinishLoadingContent:(id)content;
- (void)contentLoader:(id)loader didUpdateModelResponseWithChangeDetails:(id)details;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (Class)classForCellWithReuseIdentifier:(id)identifier;
- (id)collectionView:(id)view viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)path;
- (BOOL)collectionView:(id)view shouldHighlightItemAtIndexPath:(id)path;
- (void)topLevelCollectionViewController:(id)controller didLandOnItemAtIndexPath:(id)path;
- (id)_menuViewController;
- (void)_updateMenuViewVisibility;
- (void)_updateMenuContentInset;
- (void)_updateBackViewHeight;
- (void)_scrollToFirstVisibleItemIfNeeded;
- (BOOL)_shouldAutomaticallyAdjustContentOffset;
- (void)_setMarqueeViewsPaused:(BOOL)paused;
- (void)_updateSpinnersForVisibleItemAtIndexPath:(id)path;
- (void)_notifyDidLandOnItemIfNeeded;
- (void)_ensureContentUnavailableViewMinimumHeight;
@end

#endif /* NMUTopLevelCollectionViewController_h */
