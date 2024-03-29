//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLNotificationLongLookHandler_h
#define CSLNotificationLongLookHandler_h
@import Foundation;

#include "CSLBulletinAlertItem.h"
#include "CSLBulletinDismissalHelper.h"
#include "CSLBulletinQuickboardHelper.h"
#include "CSLNotificationActionDelegate-Protocol.h"
#include "CSLNotificationLongLookDismissal-Protocol.h"
#include "CUISBulletinActionMenuDelegate-Protocol.h"
#include "CUISBulletinClientFactoryDelegate-Protocol.h"
#include "CUISBulletinQuickLongLookViewControllerDelegate-Protocol.h"

@class NSString;
@protocol UIViewController<CUISBulletinQuickLongLook;

@interface CSLNotificationLongLookHandler : NSObject<CUISBulletinActionMenuDelegate, CUISBulletinClientFactoryDelegate, CUISBulletinQuickLongLookViewControllerDelegate>

@property (retain, nonatomic) CSLBulletinAlertItem *alertItem;
@property (retain, nonatomic) CSLBulletinDismissalHelper *dismissalHelper;
@property (retain, nonatomic) CSLBulletinQuickboardHelper *quickboardHelper;
@property (weak, nonatomic) NSObject<CSLNotificationLongLookDismissal> *dismissalHandler;
@property (nonatomic) BOOL pendingRemove;
@property (weak, nonatomic) NSObject<CSLNotificationActionDelegate> *delegate;
@property (readonly, nonatomic) UIViewController<CUISBulletinQuickLongLook> *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLongLookAlertItem:(id)item presenter:(id)presenter dismissalHelper:(id)helper dismissalHandler:(id)handler;
- (void)dealloc;
- (void)_setupActionMenuForItem:(id)item keepIfExists:(BOOL)exists;
- (void)removeItem;
- (void)handleButtonTap;
- (void)bulletinActionMenu:(id)menu didSelectItem:(id)item;
- (void)didDismissBulletinActionMenu:(id)menu;
- (void)clientFactoryRequestsDismissal:(id)dismissal;
- (void)clientFactoryRequestsInvalidateActionItems:(id)items;
- (unsigned long long)audioFeedbackAllowedForClientFactory:(id)factory;
- (void)audioFeedbackAllowedForClientFactory:(id)factory completion:(id /* block */)completion;
- (void)clientFactoryDidPerformAction:(id)action;
- (void)clientFactoryDidPerformAction:(id)action shouldAnimateAction:(BOOL)action;
- (void)_clientFactoryDidPerformAction:(id)action shouldAnimateAction:(BOOL)action;
- (void)clientFactory:(id)factory requestsPerformUNNotificationAction:(id)action completion:(id /* block */)completion;
- (void)clientFactory:(id)factory requestsPerformActionResponse:(id)response completion:(id /* block */)completion;
- (void)clientFactoryRequestsActionCompletion:(id)completion shouldAnimateAction:(BOOL)action actionResponse:(id)response;
- (void)clientFactoryRequestsUNNotificationActionCompletion:(id)completion unNotificationAction:(id)action shouldAnimateAction:(BOOL)action actionResponseContext:(id)context;
- (void)clientFactory:(id)factory requestsTextInputWithCompletion:(id /* block */)completion;
- (void)didTapIconInQuickLongLook:(id)look;
- (void)didTapLongLookContentInQuickLongLook:(id)look;
- (void)didTapQuickLookInQuickLongLook:(id)look;
- (void)didDismissActionMenuInQuickLongLook:(id)look;
- (void)didMuteActionMenuInQuickLongLook:(id)look;
- (BOOL)isMutedBulletinInQuickLongLook:(id)look;
- (void)didPerformActionInQuickLongLook:(id)look;
- (void)quickLongLook:(id)look requestPerformActionResponse:(id)response completion:(id /* block */)completion;
- (void)quickLongLook:(id)look requestActionCompletionForActionResponse:(id)response;
- (void)didSwipeToDismissInQuickLongLook:(id)look;
- (void)quickLongLook:(id)look didPresentMode:(unsigned long long)mode;
- (void)quickLongLook:(id)look didScrollToContentOffset:(struct CGPoint { double x0; double x1; })offset;
- (void)quickLongLook:(id)look didEndScrollingAtContentOffset:(struct CGPoint { double x0; double x1; })offset;
- (void)quickLongLook:(id)look setTimeVisible:(BOOL)visible;
- (void)willBeginDraggingInQuickLongLook:(id)look;
- (void)requestDismissQuickLongLook:(id)look;
- (void)requestRemovalOfQuickLongLook:(id)look;
- (id)alertBackground;
- (void)usePlainAnimationOnDismissalForQuickLongLook:(id)look;
- (BOOL)isQuickboardPresented;
- (void)requestReloadHeaderForQuickLongLookViewController:(id)controller isLongLook:(BOOL)look completion:(id /* block */)completion;
- (void)_handleLaunchApp;
- (void)_handleDismissButtonPressed;
- (void)_prepareDismissalWithCompletion:(id /* block */)completion;
- (void)_handleDismissalAnimated:(BOOL)animated;
- (void)_handleDismissalAndRemoveItemWithCompletion:(id /* block */)completion;
@end

#endif /* CSLNotificationLongLookHandler_h */
