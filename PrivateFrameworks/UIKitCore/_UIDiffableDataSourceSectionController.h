//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDiffableDataSourceSectionController_h
#define _UIDiffableDataSourceSectionController_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "_UIDiffableDataSourceSectionControllerHandlers.h"
#include "__UIDiffableDataSource.h"

@class NSArray, NSMapTable, NSSet;
@protocol _UIDiffableDataSourceSectionControllerDelegate;

@interface _UIDiffableDataSourceSectionController : NSObject<NSCopying> {
  /* instance variables */
  __UIDiffableDataSource *_dataSource;
  NSMapTable *_snapshotsMap;
  NSObject<_UIDiffableDataSourceSectionControllerDelegate> *_delegate;
}

@property (readonly, nonatomic) NSArray *itemRenderers;
@property (readonly, nonatomic) NSSet *associatedSectionIdentifiers;
@property (copy, nonatomic) _UIDiffableDataSourceSectionControllerHandlers *handlers;

/* instance methods */
- (id)initWithDiffableDataSourceImpl:(id)impl;
- (id)initWithDiffableDataSource:(id)source;
- (id)initWithItemRenderers:(id)renderers;
- (id)initWithItemRenderers:(id)renderers associatedSectionIdentifiers:(id)identifiers;
- (id)initWithItemRenderers:(id)renderers associatedSectionIdentifiers:(id)identifiers snapshotsMap:(id)map dataSource:(id)source;
- (id)snapshotForSection:(id)section;
- (id)snapshotForItem:(id)item;
- (void)applySnapshot:(id)snapshot toSection:(id)section animatingDifferences:(BOOL)differences;
- (void)applySnapshot:(id)snapshot toSection:(id)section animatingDifferences:(BOOL)differences completion:(id /* block */)completion;
- (void)applySnapshot:(id)snapshot toSection:(id)section customAnimationsProvider:(id /* block */)provider;
- (void)applySnapshot:(id)snapshot toSection:(id)section viewPropertyAnimator:(id)animator customAnimationsProvider:(id /* block */)provider;
- (void)_applySnapshot:(id)snapshot toSection:(id)section animatingDifferences:(BOOL)differences viewPropertyAnimator:(id)animator animationsProvider:(id /* block */)provider completion:(id /* block */)completion;
- (void)__applySnapshot:(id)snapshot toSection:(id)section animatingDifferences:(BOOL)differences viewPropertyAnimator:(id)animator animationsProvider:(id /* block */)provider completion:(id /* block */)completion;
- (void)_updateAffectedVisibleCellConfigurationsForExapansionStateWithSnapshot:(id)snapshot;
- (BOOL)_snapshotHasExpandOrCollapseUpdates:(id)updates;
- (BOOL)_shouldPerformCustomCollapseExpandAnimationsForInitialSnapshot:(id)snapshot finalSnapshot:(id)snapshot;
- (id /* block */)_customCollapseExpandAnimationsForSnapshot:(id)snapshot initialSectionSnapshot:(id)snapshot finalSectionSnapshot:(id)snapshot viewPropertyAnimator:(id)animator visibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds sectionIndex:(long long)index;
- (void)_configureCell:(id)cell forItem:(id)item;
- (id)_snapshotForSectionContainingItem:(id)item;
- (id)_collectionView;
- (id)dataSource;
- (id)delegate;
- (void)setDelegate:(id)delegate;
- (void)setDataSource:(id)source;
- (void)_configureForDataSource:(id)source;
- (void)configureCell:(id)cell forItem:(id)item;
- (void)_configureForItemRenderersIfNeeded:(id)needed;
- (id)_sectionIdentifierForItem:(id)item;
- (BOOL)_performDisclosureAction:(unsigned long long)action forItem:(id)item;
- (id)_parentFocusItemForItem:(id)item;
- (id)_extantMutableSnapshotForSection:(id)section;
- (id)_extantMutableSnapshotForItem:(id)item;
- (id)_snapshotsMap;
- (void)_updateSnapshot:(id)snapshot forSectionIdentifier:(id)identifier;
- (BOOL)_queryClientShouldExpandItem:(id)item;
- (void)_queryClientWillExpandItem:(id)item;
- (BOOL)_queryClientShouldCollapseItem:(id)item;
- (void)_queryClientWillCollapseItem:(id)item;
- (BOOL)_queryClientShouldQueryForSnapshotForExpandingParentItem:(id)item;
- (id)_queryClientSnapshotForExpandingParentItemForItem:(id)item currentSectionSnapshot:(id)snapshot;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* _UIDiffableDataSourceSectionController_h */
