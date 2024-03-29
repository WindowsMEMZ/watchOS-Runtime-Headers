//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKClockViewController_h
#define NTKClockViewController_h
@import Foundation;

#include "UIViewController.h"
#include "BLSBacklightSceneEnvironmentDelegate-Protocol.h"
#include "CLKSensitiveUIStateObserver-Protocol.h"
#include "CSLPIButtonHandlerProtocol-Protocol.h"
#include "NCEClockCelebrationViewControllerDelegate-Protocol.h"
#include "NPTOUserPhotoFaceServerDelegateProtocol-Protocol.h"
#include "NTKClockAppearanceTransitionDelegate-Protocol.h"
#include "NTKClockStatusBarViewControllerStatusObserver-Protocol.h"
#include "NTKClockViewDelegate-Protocol.h"
#include "NTKClockWakeController.h"
#include "NTKClockWakeControllerProvider-Protocol.h"
#include "NTKComplicationLocationManager.h"
#include "NTKFaceCollection.h"
#include "NTKFaceCollectionObserver-Protocol.h"
#include "NTKFaceLibraryViewController.h"
#include "NTKFaceLibraryViewControllerDelegate-Protocol.h"
#include "NTKFaceObserver-Protocol.h"
#include "NTKFaceSnapshotClient.h"
#include "NTKFaceViewController.h"
#include "NTKFaceViewControllerStatusBarDelegate-Protocol.h"
#include "NTKInteractiveAnimator.h"
#include "NTKLibraryFallbackFaceCollection.h"
#include "NTKPersistentFaceCollection.h"
#include "NTKTipReporter.h"
#include "NTKTritiumAnimationController.h"
#include "NTKTritiumAnimationControllerDelegate-Protocol.h"
#include "NTKTritiumController.h"
#include "NTKTritiumToolController.h"
#include "NTKTritiumToolControllerDelegate-Protocol.h"
#include "NTKTritiumWakeController.h"
#include "NTKUpNextUseMonitor.h"
#include "NTKWatchGesturesHomeTransitionCoordinatorClockDelegate-Protocol.h"
#include "NTKWidgetLocationPromptManager.h"
#include "ORBTapGestureRecognizerDelegate-Protocol.h"
#include "PPTNTKBlankFaceCollection.h"
#include "PUICCrownInputSequencerDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class BLSAssertion, BLSBacklightSceneVisualState, NCEClockCelebrationViewController, NSDate, NSLocale, NSLock, NSMutableArray, NSSet, NSString, NSTimer, ORBTapGestureRecognizer, PUICClientSideAnimation, PUICCrownInputSequencer, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol NTKClockViewControllerDelegate;

@interface NTKClockViewController : UIViewController<NTKClockViewDelegate, NTKFaceViewControllerStatusBarDelegate, NTKFaceLibraryViewControllerDelegate, ORBTapGestureRecognizerDelegate, CSLPIButtonHandlerProtocol, UIGestureRecognizerDelegate, NPTOUserPhotoFaceServerDelegateProtocol, NTKFaceCollectionObserver, CLKSensitiveUIStateObserver, NCEClockCelebrationViewControllerDelegate, NTKClockStatusBarViewControllerStatusObserver, NTKClockWakeControllerProvider, NTKFaceObserver, BLSBacklightSceneEnvironmentDelegate, NTKTritiumToolControllerDelegate, NTKTritiumAnimationControllerDelegate, PUICCrownInputSequencerDelegate, NTKClockAppearanceTransitionDelegate, NTKWatchGesturesHomeTransitionCoordinatorClockDelegate> {
  /* instance variables */
  Class _statusBarViewControllerClass;
  NTKPersistentFaceCollection *_libraryFaceCollection;
  NTKFaceCollection *_addableFaceCollection;
  NTKTipReporter *_tipFaceCollectionObserver;
  NTKLibraryFallbackFaceCollection *_fallbackLibraryFaceCollection;
  PPTNTKBlankFaceCollection *_pptBlankFaceCollection;
  BOOL _showsPPTBlankFaceCollection;
  NTKFaceSnapshotClient *_snapshotClient;
  NTKFaceViewController *_faceViewController;
  BOOL _faceViewControllerIsBorrowed;
  NTKFaceViewController *_borrowedFaceViewController;
  BOOL _pendingRecreateFaceContentAfterBorrowing;
  NTKFaceLibraryViewController *_libraryViewController;
  BOOL _libraryViewIsPresented;
  ORBTapGestureRecognizer *_orbRecognizer;
  double _orbZoomProgress;
  UILongPressGestureRecognizer *_longPressRecognizer;
  struct CGPoint { double x; double y; } _longPressBeganPoint;
  struct CGPoint { double x; double y; } _longPressBeganContentOffset;
  struct CGSize { double width; double height; } _longPressBeganScrollViewBoundsSize;
  PUICClientSideAnimation *_longPressAnimation;
  NTKInteractiveAnimator *_interactiveAnimator;
  BOOL _orbZoomActive;
  UILongPressGestureRecognizer *_speakTimeGestureRecognizer;
  UITapGestureRecognizer *_cancelSpeakTimeGestureRecognizer;
  BOOL _haveLoadedView;
  BOOL _haveFinishedLoadingView;
  NSTimer *_libraryTimeoutTimer;
  NSTimer *_libraryDismissalTransitionTimeoutTimer;
  NCEClockCelebrationViewController *_celebrationViewController;
  NTKComplicationLocationManager *_complicationLocationManager;
  NTKWidgetLocationPromptManager *_widgetLocationPromptManager;
  BOOL _needsEvaluatePrideAvailable;
  NTKUpNextUseMonitor *_upNextUseMonitor;
  UIView *_contentView;
  NTKTritiumToolController *_tritiumToolController;
  NTKTritiumWakeController *_tritiumWakeController;
  BOOL _tritiumVisibleBeforeFaceChange;
  BOOL _tritiumIsDismissingLibrary;
  BOOL _isTransitioningToTritiumFromLibrary;
  BOOL _tritiumIsAnimatingAlphaInCleanup;
  NSTimer *_tritiumTouchOverlayDelayTimer;
  NSMutableArray *_tritiumReusableStatusBarViewControllers;
  BLSBacklightSceneVisualState *_currentBacklightVisualState;
  NTKClockWakeController *_normalWakeController;
  NSLock *_finishedLoadingLock;
  NSMutableArray *_reusableStatusBarViewControllers;
  NSString *_tapSharePPTTestName;
  PUICCrownInputSequencer *_sequencer;
  double _lastSequencerVelocity;
  BOOL _homeTransitionRequested;
  BLSAssertion *_backlightAssertion;
  long long _transitioningToLocation;
  BOOL _longPressEnabledState;
  NSDate *_preloadAddableDate;
  NSLocale *_preloadAddableLocale;
}

@property (weak, nonatomic) NSObject<NTKClockViewControllerDelegate> *delegate;
@property (copy, nonatomic) NSSet *pauseReasons;
@property (readonly, nonatomic) BOOL finishedLoading;
@property (nonatomic) BOOL lockScreenBorrowed;
@property (readonly, nonatomic) BOOL currentFaceAllowsHomeScreenTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NTKTritiumController *wake_tritiumController;
@property (readonly, nonatomic) NTKTritiumAnimationController *wake_tritiumAnimationController;
@property (readonly, nonatomic) NTKFaceViewController *wake_faceViewController;
@property (readonly) BOOL wake_canPerformWristRaiseAnimation;
@property (readonly) BOOL wake_shouldDeferAnimationStart;

/* instance methods */
- (id)initWithStatusViewControllerClass:(Class)class;
- (void)sensitiveUIStateChanged;
- (void)dealloc;
- (void)_prewarmFaceContentIfNeeded;
- (void)_startLibraryTimeoutTimer;
- (void)_libraryTimeoutTimerFired;
- (void)_cancelLibraryTimeoutTimer;
- (void)_markLibraryFinishedLoading;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (id)_currentFaceViewController;
- (BOOL)_presentedViewControllerShouldNotBecomeFirstResponder;
- (void)updateSnapshotsSynchronously;
- (id)borrowIconZoomController;
- (void)restoreIconZoomController;
- (id)lifeCycleTrackingFaceViewController;
- (id)currentFace;
- (BOOL)currentFaceIsAnalog;
- (void)_ensureFaceViewControllerExists;
- (void)_pauseUpdates;
- (void)_resumeUpdates;
- (BOOL)_shouldPauseClockTimer;
- (void)_updateClockTimerPaused;
- (void)_updatePauseReasons:(id)reasons;
- (void)_applyCurrentPauseReasons;
- (BOOL)isFinishedLoading;
- (void)enableSlowMode;
- (void)disableSlowMode;
- (BOOL)_canPerformWristRaiseAnimation;
- (void)environment:(id)environment performBacklightSceneUpdate:(id)update;
- (void)environment:(id)environment timelinesForDateInterval:(id)interval previousSpecifier:(id)specifier completion:(id /* block */)completion;
- (BOOL)handleCrownPressed;
- (void)loadView;
- (id)_currentFaceCollection;
- (void)_createOrRecreateFaceContent;
- (BOOL)_hasRealFaceCollections;
- (void)_finishLoadingViewIfNecessary;
- (void)_handleLongPressGestureRecognizer:(id)recognizer;
- (void)_teardownExistingFaceViewControllerIfNeeded;
- (void)_didReceiveTritiumSettingChangeNotification;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (id)currentFaceDescription;
- (id)currentFaceClass;
- (id)powerLogDescription;
- (id)siriContextFaceIdentifier;
- (id)currentFaceReportingValue;
- (id)currentComplicationReportingValues;
- (id)_newFaceControllerForFace:(id)face withConfiguration:(id /* block */)configuration;
- (void)_showLibraryViewControllerWithCompletion:(id /* block */)completion;
- (void)_showLibraryViewControllerAnimated:(BOOL)animated withCompletion:(id /* block */)completion;
- (void)_prepareToPresentLibraryViewController;
- (void)__addChildViewController:(id)controller;
- (void)__removeChildViewController:(id)controller;
- (void)_endFaceLibraryControllerPresentation;
- (void)_removeLibraryController;
- (id)_borrowFaceViewController;
- (void)_putFaceViewControllerIntoClockViewController;
- (void)_putLibraryViewControllerIntoClockViewController;
- (void)_ensureStatusBarForFaceViewController:(id)controller;
- (void)makeStatusBarViewControllerAvailableForReuse:(id)reuse;
- (void)tritium_makeStatusBarViewControllerAvailableForReuse:(id)reuse;
- (id)currentClockComplicationCountSet;
- (id)currentComplicationApplicationIdentifiers;
- (id)currentWidgetComplications;
- (void)_notifyDuetOfComplicationActivation;
- (id)blurSourceImageForClockView:(id)view;
- (id)faceLibraryViewController:(id)controller newViewControllerForFace:(id)face configuration:(id /* block */)configuration;
- (void)faceLibraryViewControllerWillCompleteSelection:(id)selection;
- (void)faceLibraryViewControllerDidCompleteSelection:(id)selection;
- (void)faceLibraryViewControllerDidStartSwiping:(id)swiping;
- (void)faceLibraryViewControllerDidEndSwiping:(id)swiping atIndex:(unsigned long long)index;
- (BOOL)faceLibraryViewControllerShouldHandleLongPress:(id)press;
- (void)faceLibraryViewControllerFaceAppearanceDidChange:(id)change;
- (void)faceLibraryViewController:(id)controller willDecelerateToFaceViewController:(id)controller;
- (void)_updatePrideFaceAvailability;
- (BOOL)_faceCollectionContainsRestrictedFace:(id)face;
- (void)_removeRestrictedFaceFromCollection:(id)collection reloadCollection:(id /* block */)collection;
- (BOOL)_removePrideColorFromFacesInCollection:(id)collection;
- (void)_handleSpeakTimeGesture:(id)gesture;
- (void)_handleCancelSpeakTimeGesture:(id)gesture;
- (BOOL)_canHandleSpeakTimeGesture;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizer:(id)recognizer shouldRequireFailureOfGestureRecognizer:(id)recognizer;
- (void)ORBTapGestureRecognizerDidLatch:(id)latch;
- (void)_switcherGestureRecognizerDidLatch;
- (void)ORBTapGestureRecognizer:(id)recognizer setScaleFactor:(float)factor;
- (void)_beginOrbZoom;
- (void)_setOrbZoomProgress:(double)progress;
- (void)_endOrbZoom:(BOOL)zoom;
- (BOOL)_getLongPressEnabled;
- (void)_setLongPressEnabled:(BOOL)enabled;
- (void)_maybeSetOrbEnabled:(BOOL)enabled;
- (void)crownInputSequencerAverageCrownVelocityDidChange:(id)change;
- (void)crownInputSequencerDidBecomeIdle:(id)idle willDecelerate:(BOOL)decelerate;
- (void)_wheelChangedWithEvent:(id)event;
- (BOOL)wake_handleAlwaysOnTapToWakeAtPoint:(id)point withCompletion:(id /* block */)completion;
- (void)wake_resumeUpdates;
- (void)wake_pauseUpdates;
- (void)wake_applyCurrentPauseReasons;
- (BOOL)handleButton:(unsigned long long)button eventType:(unsigned long long)type;
- (void)performWristRaiseAnimation;
- (void)prepareWristRaiseAnimation;
- (void)cancelWristRaiseAnimation;
- (BOOL)_wakeAnimationsEnabled;
- (void)_updateCelebrationsEnableAnimatationsState;
- (void)celebrationViewControllerStartedAnimation:(id)animation;
- (void)celebrationViewControllerStoppedAnimation:(id)animation;
- (BOOL)celebrationAnimationsEnabled;
- (void)PPTToggleClockSwitcherTestNamed:(id)named;
- (void)PPTSetupFaceLibraryForToggleClockSwticherTest;
- (void)PPTSetupFaceLibraryForSwitcherScrollTest;
- (void)PPTShowFaceSwitcherWithCompletion:(id /* block */)completion;
- (void)PPTHideFaceSwitcherWithCompletion:(id /* block */)completion;
- (void)PPTStartScrubbingAnimated:(BOOL)animated withCompletion:(id /* block */)completion;
- (void)PPTEndScrubbingAnimated:(BOOL)animated withCompletion:(id /* block */)completion;
- (void)PPTScrubToDate:(id)date;
- (void)PPTCreateFaceOfStyle:(long long)style withCompletion:(id /* block */)completion;
- (void)PPTCreateBundledFaceWithfaceIdentifier:(id)identifier withCompletion:(id /* block */)completion;
- (void)PPTSwitchToFaceAtIndex:(unsigned long long)index withCompletion:(id /* block */)completion;
- (void)PPTRunScrollTestNamed:(id)named withCompletion:(id /* block */)completion;
- (void)PPTBringUpCompletionPickerTestNamed:(id)named;
- (void)PPTPigmentScrollTestNamed:(id)named;
- (void)PPTBringUpAddableFacesCollectionTestNamed:(id)named;
- (void)PPTTapEditButtonTestNamed:(id)named;
- (void)PPTSwitcherScrollTestNamed:(id)named;
- (void)PPTTapShareButtonTestNamed:(id)named;
- (void)_handleShareFaceAlertContainerViewAppeared;
- (void)PPTAppendSingleFaceToFaceLibrary;
- (void)PPTCleanFaceLibrary;
- (unsigned long long)PPTCurrentFaceStyle;
- (long long)PPTFaceIndexForFaceStyle:(long long)style;
- (void)PPTSetupLibraryForSwitchToFacePPT:(long long)ppt isTargetFaceInDock:(BOOL)dock;
- (void)PPTSetupLibraryForSwitchToFacePPTWithFaceIdentifier:(id)identifier isTargetFaceInDock:(BOOL)dock;
- (long long)PPTFaceIndexForPPTFaceName:(id)name;
- (long long)PPTFaceIndexForPPTFaceIdentifier:(id)identifier;
- (long long)PPTFaceStyleForPPTFaceName:(id)name;
- (void)PPTUseBlankFaceLibrary;
- (void)PPTRestoreLibrary;
- (id)PPTUniqueComplicationsToSlotForCurrentFace;
- (id)PPTDescriptionForComplication:(id)complication;
- (void)PPTPrepareComplicationTest;
- (void)PPTCreateComplication:(id)complication forSlot:(id)slot synchronously:(BOOL)synchronously;
- (void)PPTCleanupLastComplication;
- (id)userPhotoFaceDirectory;
- (void)clockFaceCountCurrent:(unsigned long long *)current max:(unsigned long long *)max;
- (BOOL)createNewUserPhotoFaceFromPath:(id)path;
- (BOOL)createNewKaleidoscopeFaceFromPath:(id)path;
- (BOOL)createNewCustomPhotoFaceFromFaceStyle:(long long)style andPath:(id)path;
- (void)statusBarDidChange;
- (void)faceConfigurationDidChange:(id)change;
- (void)faceCollection:(id)collection didAddFace:(id)face atIndex:(unsigned long long)index;
- (void)faceCollection:(id)collection didRemoveFace:(id)face atIndex:(unsigned long long)index;
- (void)faceCollection:(id)collection didSelectFace:(id)face atIndex:(unsigned long long)index;
- (void)faceCollectionDidLoad:(id)load;
- (void)_localeDidChangeNotification;
- (void)_significantTimeChangeNotification;
- (void)_handleTimeOffsetChange;
- (void)_preloadAddableFacesWithCompletion:(id /* block */)completion;
- (void)_prewarmFaceLibraryContentAfterClearing:(BOOL)clearing withCompletion:(id /* block */)completion;
- (void)_handleDeviceLockChange;
- (void)_addFaceFromNotification:(id)notification;
- (void)_viewFaceFromNotification:(id)notification;
- (void)_viewWhatsNewFromNotification:(id)notification;
- (void)_makeClockFrontmostApp;
- (void)_addFaceForBundleIdentifier:(id)identifier;
- (void)_viewFaceForBundleIdentifier:(id)identifier;
- (void)_viewWhatsNew;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })launchRectForComplicationApplicationIdentifier:(id)identifier;
- (id)configurationForHomeScreenAppearance:(id)appearance;
- (void)homeScreenAppearanceTransitionWillStart:(id)start towardsLocation:(long long)location;
- (void)homeScreenAppearanceTransition:(id)transition applyProgress:(double)progress;
- (void)homeScreenAppearanceTransitionDidEnd:(id)end atLocation:(long long)location;
- (void)_applyStatusBarAlpha:(double)alpha;
- (void)_invalidateHomeScreenAppearance;
- (id)wake_clockContentView;
- (BOOL)tritium_playTouchOverlayAnimationWithContinueBlock:(id /* block */)block;
- (BOOL)tritiumAnimationController:(id)controller prepareForTransitionToTritiumOnAnimated:(BOOL)animated withCompletion:(id /* block */)completion;
- (void)tritiumAnimationController:(id)controller cleanupAfterTritiumTransitionAnimated:(BOOL)animated withCompletion:(id /* block */)completion;
- (BOOL)canHandleDoublePinchOnClockFaceViaCoordinator:(id)coordinator;
- (void)handleDoublePinchOnClockFaceViaCoordinator:(id)coordinator;
- (BOOL)isLockScreenBorrowed;
@end

#endif /* NTKClockViewController_h */
