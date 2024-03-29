//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SHSheetPresenter_h
#define SHSheetPresenter_h
@import Foundation;

#include "ObjectManipulationDelegate-Protocol.h"
#include "SFAirDropViewControllerDelegate-Protocol.h"
#include "SHSheetActivityPerformerResult.h"
#include "SHSheetInteractor-Protocol.h"
#include "SHSheetInteractorDelegate-Protocol.h"
#include "SHSheetPresenter-Protocol.h"
#include "SHSheetPresenterDelegate-Protocol.h"
#include "SHSheetRouter.h"
#include "UIActivity.h"
#include "UIActivityCollaborationParticipantsViewControllerDelegate-Protocol.h"
#include "_UIActivityUserDefaultsViewController.h"
#include "_UIActivityUserDefaultsViewControllerDelegate-Protocol.h"
#include "_UIRemoteSheet-Protocol.h"

@class NSArray, NSString, NSUUID, SFAirDropViewController, UIViewController;
@protocol UIViewController<SHSheetContentView;

@interface SHSheetPresenter : NSObject<SHSheetInteractorDelegate, UIActivityCollaborationParticipantsViewControllerDelegate, _UIActivityUserDefaultsViewControllerDelegate, SFAirDropViewControllerDelegate, ObjectManipulationDelegate, SHSheetPresenter>

@property (nonatomic) BOOL didRequestInitialConfiguration;
@property (nonatomic) BOOL didReceiveInitialConfiguration;
@property (nonatomic) BOOL didRequestDismissal;
@property (nonatomic) BOOL isReportingActivityResult;
@property (retain, nonatomic) SHSheetActivityPerformerResult *activityResult;
@property (nonatomic) BOOL activityViewControllerIsPresenting;
@property (nonatomic) BOOL activityViewControllerPresentationDidBegin;
@property (nonatomic) BOOL activityViewControllerIsEmbedded;
@property (weak, nonatomic) UIViewController<SHSheetContentView> *mainViewController;
@property (weak, nonatomic) UIViewController<SHSheetContentView> *secondaryViewController;
@property (weak, nonatomic) SFAirDropViewController *airdropViewController;
@property (weak, nonatomic) _UIActivityUserDefaultsViewController *userDefaultsViewController;
@property (weak, nonatomic) UIViewController *optionsViewController;
@property (weak, nonatomic) UIViewController *collaborationOptionsViewController;
@property (weak, nonatomic) UIViewController *collaborationParticipantsViewController;
@property (retain, nonatomic) NSUUID *collaborationItemIdentifier;
@property (copy, nonatomic) id /* block */ collaborationCreateSharingURLCompletionHandler;
@property (copy, nonatomic) id /* block */ presentationDelayedTestingBlock;
@property (weak, nonatomic) NSObject<SHSheetPresenterDelegate> *delegate;
@property (readonly, nonatomic) SHSheetRouter *router;
@property (readonly, nonatomic) NSObject<SHSheetInteractor> *interactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *selectedAssetIdentifiers;
@property (nonatomic) BOOL isContentManaged;
@property (readonly, nonatomic) UIActivity *currentActivity;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) BOOL isCollaborationSelected;
@property (readonly, nonatomic) NSObject<_UIRemoteSheet> *remoteSheet;
@property (readonly, nonatomic) BOOL useRemoteUIService;

/* instance methods */
- (id)initWithRouter:(id)router interactor:(id)interactor;
- (void)_startSessionIfNeeded;
- (id)session;
- (void)updateCustomView;
- (void)updateWithContext:(id)context;
- (void)preheatExtensionDiscovery;
- (void)reloadActivity:(id)activity;
- (void)_updateConfiguration;
- (void)activityViewControllerWillBePresented:(id)presented;
- (void)activityViewControllerWillBeEmbedded:(id)embedded;
- (void)_activityViewControllerPresentationDidBegin:(id)begin;
- (void)activityViewControllerWillAppear:(id)appear;
- (void)activityViewControllerDidAppear:(id)appear;
- (void)activityViewControllerWillDisappear:(id)disappear;
- (void)activityViewControllerDidDisappear:(id)disappear;
- (void)activityViewControllerSizeWillChange:(id)change;
- (void)activityViewController:(id)controller traitCollectionDidChange:(id)change;
- (void)activityViewControllerDidResignContentViewControllerOfPopover:(id)popover;
- (void)prepareViewIfNeeded;
- (void)present;
- (void)performActivity:(id)activity;
- (void)dismiss;
- (void)_dismiss;
- (void)_completeInitialConfigurationUpdate;
- (void)_didCompleteActivityWithResult:(id)result;
- (void)_registerForApplicationStateChangeNotification;
- (void)_unregisterForApplicationStateChangeNotification;
- (void)_didEnterBackground:(id)background;
- (void)_willEnterForeground:(id)foreground;
- (void)interactorDidUpdateSessionConfiguration:(id)configuration;
- (void)interactorDidUpdateObjectManipulationSupport:(id)support;
- (void)interactorDidUpdateHeaderMetadata:(id)metadata;
- (void)interactorDidUpdateCollaborationDetails:(id)details;
- (void)_updateContentView:(id)view;
- (void)_presentAirDropCollaborationUnsupportedAlert;
- (void)interactor:(id)interactor willPerformActivity:(id)activity;
- (void)interactor:(id)interactor didPerformActivityWithResult:(id)result;
- (id)interactor:(id)interactor activityPresentationControllerForActivity:(id)activity;
- (void)interactor:(id)interactor didPerformUserDefaultsActivityWithContext:(id)context;
- (void)interactor:(id)interactor didPerformAirdropViewActivityWithNoContentView:(BOOL)view;
- (void)interactorDidFailPerformActivityNotCollaborationEligible:(id)eligible;
- (void)interactor:(id)interactor didUpdateAirDropTransferWithChange:(id)change;
- (id)interactor:(id)interactor linkMetadataForActivity:(id)activity;
- (void)interactor:(id)interactor airDropViewServiceWillStartTransferToRecipient:(id)recipient;
- (void)interactor:(id)interactor didChangeMetadata:(id)metadata;
- (void)collaborationParticipantsViewController:(id)controller didCreateURL:(id)url error:(id)error;
- (void)_didCompleteCollaborationSharingURLCreationWithResult:(id)result;
- (void)interactor:(id)interactor createSharingURLWithParticipantsForCollaborationRequest:(id)request completionHandler:(id /* block */)handler;
- (void)interactor:(id)interactor creatingCollaborationForActivity:(id)activity;
- (void)interactor:(id)interactor didCreateCollaborationForActivity:(id)activity;
- (void)interactor:(id)interactor didFailCreatingCollaborationForActivity:(id)activity error:(id)error;
- (void)interactor:(id)interactor didCancelCollaborationForActivity:(id)activity;
- (void)interactor:(id)interactor canShareFolderContainingExistingSharedItemsWithCompletionHandler:(id /* block */)handler;
- (void)interactor:(id)interactor canManageShareForDocumentInSharedFolderWithCompletionHandler:(id /* block */)handler;
- (void)performPeopleSuggestionProxy:(id)proxy;
- (void)removePeopleSuggestionProxy:(id)proxy;
- (void)performShareActivityProxy:(id)proxy;
- (void)performShareActivityProxy:(id)proxy activityIdentifier:(id)identifier;
- (void)performActionActivityProxy:(id)proxy;
- (void)didLongPressShareActivityWithIdentifier:(id)identifier;
- (void)handlePeopleSuggestion:(id)suggestion;
- (void)handleInfoSuggestionPress:(id)press;
- (void)handleActivity:(id)activity;
- (void)handleOptions;
- (void)handleCollaborationOptions;
- (void)didSelectCollaborativeAction;
- (void)didSelectSendCopyAction;
- (void)handleCustomHeaderButton;
- (void)handleClose;
- (void)handleNext;
- (void)handleActionsEdit;
- (id)customTitleForActivityType:(id)type;
- (void)_expandSharingContentView;
- (void)_showScreenTimeRestrictedAlert;
- (void)userDefaultsViewController:(id)controller didToggleActivityWithIdentifier:(id)identifier activityCategory:(long long)category;
- (void)userDefaultsViewController:(id)controller didFavoriteActivity:(BOOL)activity withIdentifier:(id)identifier activityCategory:(long long)category;
- (void)userDefaultsViewController:(id)controller didUpdateFavoritesProxies:(id)proxies activityCategory:(long long)category;
- (void)userDefaultsViewController:(id)controller didSelectActivityWithIdentifier:(id)identifier activityCategory:(long long)category disabled:(BOOL)disabled;
- (void)airDropViewControllerDidDismiss:(id)dismiss;
- (void)airDropViewServiceWillStartTransfer:(id)transfer toRecipient:(id)recipient;
- (void)airDropViewControllerDidStartTransfer:(id)transfer;
- (void)airDropViewController:(id)controller didFinishTransferWithSuccess:(BOOL)success;
- (void)airDropViewController:(id)controller requestSharedItemsWithDataRequest:(id)request completionHandler:(id /* block */)handler;
- (void)airDropViewController:(id)controller requestSendingAppBundleIdentifierWithCompletionHandler:(id /* block */)handler;
- (void)_finishAirdropActivityPerformer:(id)performer withSuccess:(BOOL)success;
- (BOOL)_shouldCompleteAirdropActivity;
- (id)requestRefreshedCustomizationGroups;
- (void)runScrollingTestWithName:(id)name type:(long long)type completionHandler:(id /* block */)handler;
@end

#endif /* SHSheetPresenter_h */
