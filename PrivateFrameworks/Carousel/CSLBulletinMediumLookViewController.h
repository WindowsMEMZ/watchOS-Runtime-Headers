//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLBulletinMediumLookViewController_h
#define CSLBulletinMediumLookViewController_h
@import Foundation;

#include "CSLNotificationListViewController.h"
#include "CSLBulletinAlertItem.h"
#include "CSLBulletinDismissalHelper.h"
#include "CSLBulletinMediumLookViewControllerDelegate-Protocol.h"
#include "CSLNotificationActionDelegate-Protocol.h"
#include "CUISAlertChevronViewDelegate-Protocol.h"
#include "CUISAlertSwipeToDismissViewBehaviorDelegate-Protocol.h"
#include "CUISBulletinActionMenuDelegate-Protocol.h"

@class CUISAlertSwipeToDismissViewBehavior, CUISBulletinActionMenu, NSString, WatchQuickAction;

@interface CSLBulletinMediumLookViewController : CSLNotificationListViewController<CUISAlertSwipeToDismissViewBehaviorDelegate, CUISBulletinActionMenuDelegate, CUISAlertChevronViewDelegate>

@property (retain, nonatomic) CUISAlertSwipeToDismissViewBehavior *swipeToDismissBehavior;
@property (retain, nonatomic) CUISBulletinActionMenu *actionMenu;
@property (retain, nonatomic) CSLBulletinAlertItem *groupedItem;
@property (nonatomic) BOOL crossApp;
@property (retain, nonatomic) WatchQuickAction *clearQuickAction;
@property (nonatomic) BOOL showDone;
@property (retain, nonatomic) CSLBulletinDismissalHelper *dismissalHelper;
@property (weak, nonatomic) NSObject<CSLNotificationActionDelegate> *actionDelegate;
@property (weak, nonatomic) NSObject<CSLBulletinMediumLookViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;
+ (double)defaultPresentationDampingRatio;

/* instance methods */
- (id)initWithGroupedItem:(id)item dataModel:(id)model cellFactoryManager:(id)manager dismissalHelper:(id)helper;
- (id)initWithDataModel:(id)model cellFactoryManager:(id)manager dismissalHelper:(id)helper;
- (id)initWithGroupedItem:(id)item mediumLookItems:(id)items cellFactoryManager:(id)manager dismissalHelper:(id)helper;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)alertChevronViewDidMoveToSuperview:(id)superview;
- (id)swipeToDismissLabel;
- (void)addBulletinAlertItem:(id)item animated:(BOOL)animated shouldRevealItem:(BOOL)item;
- (BOOL)removeBulletinWithID:(id)id animated:(BOOL)animated;
- (void)removeItem:(id)item animated:(BOOL)animated withCompletion:(id /* block */)completion;
- (void)reloadItem:(id)item;
- (void)handleSwipeActionForManageItem:(id)item completion:(id /* block */)completion;
- (void)handleSwipeActionForClearItem:(id)item;
- (id)collectionView:(id)view viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)path;
- (double)collectionView:(id)view layout:(id)layout heightForHeaderInSection:(long long)section;
- (double)collectionView:(id)view layout:(id)layout heightForFooterInSection:(long long)section;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)offset;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidScroll:(id)scroll;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)bulletinActionMenu:(id)menu didSelectItem:(id)item;
- (void)didDismissBulletinActionMenu:(id)menu;
- (void)behaviorDidPerformSwipeAction;
- (void)_setupQuickAction;
- (BOOL)_dismissIfEmpty;
- (void)_updateCrossApp;
- (void)_createActionMenuForPresentations;
- (void)_createActionMenuForPresentation:(id)presentation;
- (void)revealMostRecentItemAnimated:(BOOL)animated;
- (void)_doneButtonTapped:(id)tapped;
- (BOOL)isCrossApp;
@end

#endif /* CSLBulletinMediumLookViewController_h */
