//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebViewPrivate_h
#define WebViewPrivate_h
@import Foundation;

#include "WebDeviceOrientationProvider-Protocol.h"
#include "WebFormDelegate-Protocol.h"
#include "WebGeolocationProvider-Protocol.h"

@class NSURL;
@protocol WebCaretChangeListener, WebNotificationProvider, {HashMap<unsigned long, WTF::RetainPtr<id>, WTF::DefaultHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id>>, WTF::HashTableTraits>="m_impl"{HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id>>>, WTF::DefaultHash<unsigned long>, WTF::HashMap<unsigned long, WTF::RetainPtr<id>>::KeyValuePairTraits, WTF::HashTraits<unsigned long>>=""(?="m_table"^v"m_tableForLLDB"^I)}}, {Lock="m_byte"{Atomic<unsigned char>="value"{atomic<unsigned char>="__a_"{__cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>>="__a_value"AC}}}}, {RefPtr<WebCore::ValidationBubble, WTF::RawPtrTraits<WebCore::ValidationBubble>, WTF::DefaultRefDerefTraits<WebCore::ValidationBubble>>="m_ptr"^{ValidationBubble}}, {RefPtr<WebViewGroup, WTF::RawPtrTraits<WebViewGroup>, WTF::DefaultRefDerefTraits<WebViewGroup>>="m_ptr"^{WebViewGroup}}, {RetainPtr<CGColor *>="m_ptr"^v}, {RetainPtr<NSData>="m_ptr"^v}, {RetainPtr<NSMutableSet>="m_ptr"^v}, {RetainPtr<NSString>="m_ptr"^v}, {RetainPtr<WAKWindow>="m_ptr"^v}, {RetainPtr<WebFixedPositionContent>="m_ptr"^v}, {RetainPtr<WebIndicateLayer>="m_ptr"^v}, {RetainPtr<WebInspector>="m_ptr"^v}, {RetainPtr<WebNodeHighlight>="m_ptr"^v}, {RetainPtr<WebPreferences>="m_ptr"^v}, {RetainPtr<WebVideoFullscreenController>="m_ptr"^v}, {RetainPtr<id>="m_ptr"^v}, {String="m_impl"{RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>>="m_ptr"^{StringImpl}}}, {Vector<WTF::RetainPtr<WebVideoFullscreenController>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc>="m_buffer"^v"m_capacity"I"m_size"I}, {unique_ptr<WebCore::AlternativeTextUIController, std::default_delete<WebCore::AlternativeTextUIController>>="__ptr_"{__compressed_pair<WebCore::AlternativeTextUIController *, std::default_delete<WebCore::AlternativeTextUIController>>="__value_"^{AlternativeTextUIController}}}, {unique_ptr<WebViewRenderingUpdateScheduler, std::default_delete<WebViewRenderingUpdateScheduler>>="__ptr_"{__compressed_pair<WebViewRenderingUpdateScheduler *, std::default_delete<WebViewRenderingUpdateScheduler>>="__value_"^{WebViewRenderingUpdateScheduler}}};

@interface WebViewPrivate : NSObject {
  /* instance variables */
  struct Page * page;
  struct RefPtr<WebViewGroup, WTF::RawPtrTraits<WebViewGroup>, WTF::DefaultRefDerefTraits<WebViewGroup>> { struct WebViewGroup *m_ptr; } group;
  id UIDelegate;
  struct RetainPtr<id> { void *m_ptr; } UIDelegateForwarder;
  id resourceProgressDelegate;
  id downloadDelegate;
  id policyDelegate;
  struct RetainPtr<id> { void *m_ptr; } policyDelegateForwarder;
  id frameLoadDelegate;
  struct RetainPtr<id> { void *m_ptr; } frameLoadDelegateForwarder;
  NSObject<WebFormDelegate> *formDelegate;
  id editingDelegate;
  struct RetainPtr<id> { void *m_ptr; } editingDelegateForwarder;
  id scriptDebugDelegate;
  id historyDelegate;
  struct RetainPtr<id> { void *m_ptr; } resourceProgressDelegateForwarder;
  struct RetainPtr<id> { void *m_ptr; } formDelegateForwarder;
  struct RetainPtr<WebInspector> { void *m_ptr; } inspector;
  struct RetainPtr<WebNodeHighlight> { void *m_ptr; } currentNodeHighlight;
  struct RefPtr<WebCore::ValidationBubble, WTF::RawPtrTraits<WebCore::ValidationBubble>, WTF::DefaultRefDerefTraits<WebCore::ValidationBubble>> { struct ValidationBubble *m_ptr; } formValidationBubble;
  BOOL shouldMaintainInactiveSelection;
  BOOL allowsUndo;
  float zoomMultiplier;
  BOOL zoomsTextOnly;
  struct RetainPtr<NSString> { void *m_ptr; } applicationNameForUserAgent;
  struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } userAgent;
  BOOL userAgentOverridden;
  struct RetainPtr<WebPreferences> { void *m_ptr; } preferences;
  NSURL *userStyleSheetLocation;
  struct RetainPtr<WAKWindow> { void *m_ptr; } hostWindow;
  int programmaticFocusCount;
  struct WebResourceDelegateImplementationCache { undefined *didReceiveAuthenticationChallengeFunc; undefined *canAuthenticateAgainstProtectionSpaceFunc; undefined *connectionPropertiesFunc; undefined *webThreadDidFinishLoadingFromDataSourceFunc; undefined *webThreadDidFailLoadingWithErrorFromDataSourceFunc; undefined *webThreadIdentifierForRequestFunc; undefined *webThreadDidLoadResourceFromMemoryCacheFunc; undefined *webThreadWillSendRequestFunc; undefined *webThreadDidReceiveResponseFunc; undefined *webThreadDidReceiveContentLengthFunc; undefined *webThreadWillCacheResponseFunc; undefined *identifierForRequestFunc; undefined *willSendRequestFunc; undefined *didReceiveResponseFunc; undefined *didReceiveContentLengthFunc; undefined *didFinishLoadingFromDataSourceFunc; undefined *didFailLoadingWithErrorFromDataSourceFunc; undefined *didLoadResourceFromMemoryCacheFunc; undefined *willCacheResponseFunc; undefined *plugInFailedWithErrorFunc; undefined *shouldUseCredentialStorageFunc; undefined *shouldPaintBrokenImageForURLFunc; } resourceLoadDelegateImplementations;
  struct WebFrameLoadDelegateImplementationCache { undefined *didCreateJavaScriptContextForFrameFunc; undefined *didClearWindowObjectForFrameFunc; undefined *didClearWindowObjectForFrameInScriptWorldFunc; undefined *didClearInspectorWindowObjectForFrameFunc; undefined *windowScriptObjectAvailableFunc; undefined *didHandleOnloadEventsForFrameFunc; undefined *didReceiveServerRedirectForProvisionalLoadForFrameFunc; undefined *didCancelClientRedirectForFrameFunc; undefined *willPerformClientRedirectToURLDelayFireDateForFrameFunc; undefined *didChangeLocationWithinPageForFrameFunc; undefined *didPushStateWithinPageForFrameFunc; undefined *didReplaceStateWithinPageForFrameFunc; undefined *didPopStateWithinPageForFrameFunc; undefined *willCloseFrameFunc; undefined *didStartProvisionalLoadForFrameFunc; undefined *didReceiveTitleForFrameFunc; undefined *didCommitLoadForFrameFunc; undefined *didFailProvisionalLoadWithErrorForFrameFunc; undefined *didFailLoadWithErrorForFrameFunc; undefined *didFinishLoadForFrameFunc; undefined *didFirstLayoutInFrameFunc; undefined *didFirstVisuallyNonEmptyLayoutInFrameFunc; undefined *didLayoutFunc; undefined *didReceiveIconForFrameFunc; undefined *didFinishDocumentLoadForFrameFunc; undefined *didDisplayInsecureContentFunc; undefined *didRunInsecureContentFunc; undefined *didDetectXSSFunc; undefined *didRemoveFrameFromHierarchyFunc; undefined *webThreadDidLayoutFunc; } frameLoadDelegateImplementations;
  struct WebScriptDebugDelegateImplementationCache { BOOL didParseSourceExpectsBaseLineNumber; BOOL exceptionWasRaisedExpectsHasHandlerFlag; undefined *didParseSourceFunc; undefined *failedToParseSourceFunc; undefined *exceptionWasRaisedFunc; } scriptDebugDelegateImplementations;
  struct WebHistoryDelegateImplementationCache { undefined *navigatedFunc; undefined *clientRedirectFunc; undefined *serverRedirectFunc; undefined *deprecatedSetTitleFunc; undefined *setTitleFunc; undefined *populateVisitedLinksFunc; } historyDelegateImplementations;
  BOOL closed;
  BOOL closing;
  unsigned long long deviceOrientation;
  BOOL shouldCloseWithWindow;
  BOOL mainFrameDocumentReady;
  BOOL drawsBackground;
  BOOL tabKeyCyclesThroughElementsChanged;
  BOOL becomingFirstResponder;
  BOOL becomingFirstResponderFromOutside;
  BOOL usesPageCache;
  struct RetainPtr<CGColor *> { void *m_ptr; } backgroundColor;
  struct RetainPtr<NSString> { void *m_ptr; } mediaStyle;
  BOOL hasSpellCheckerDocumentTag;
  long long spellCheckerDocumentTag;
  BOOL isStopping;
  id UIKitDelegate;
  struct RetainPtr<id> { void *m_ptr; } UIKitDelegateForwarder;
  id WebMailDelegate;
  BOOL allowsMessaging;
  struct RetainPtr<NSMutableSet> { void *m_ptr; } _caretChangeListeners;
  NSObject<WebCaretChangeListener> *_caretChangeListener;
  struct CGSize { double width; double height; } fixedLayoutSize;
  BOOL mainViewIsScrollingOrZooming;
  int didDrawTiles;
  struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { atomic  __a_value; unsigned char x0; } __a_; } value; } m_byte; } pendingFixedPositionLayoutRectMutex;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pendingFixedPositionLayoutRect;
  struct HashMap<unsigned long, WTF::RetainPtr<id>, WTF::DefaultHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id>>, WTF::HashTableTraits> { struct HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id>>>, WTF::DefaultHash<unsigned long>, WTF::HashMap<unsigned long, WTF::RetainPtr<id>>::KeyValuePairTraits, WTF::HashTraits<unsigned long>> { union { void *m_table; unsigned int *m_tableForLLDB; } x0; } m_impl; } identifierMap;
  BOOL _keyboardUIModeAccessed;
  int _keyboardUIMode;
  BOOL shouldUpdateWhileOffscreen;
  BOOL needsOneShotDrawingSynchronization;
  BOOL postsAcceleratedCompositingNotifications;
  struct unique_ptr<WebViewRenderingUpdateScheduler, std::default_delete<WebViewRenderingUpdateScheduler>> { struct __compressed_pair<WebViewRenderingUpdateScheduler *, std::default_delete<WebViewRenderingUpdateScheduler>> { struct WebViewRenderingUpdateScheduler *__value_; } __ptr_; } renderingUpdateScheduler;
  struct CGSize { double width; double height; } lastLayoutSize;
  struct RetainPtr<WebVideoFullscreenController> { void *m_ptr; } fullscreenController;
  struct Vector<WTF::RetainPtr<WebVideoFullscreenController>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } fullscreenControllersExiting;
  struct RetainPtr<WebIndicateLayer> { void *m_ptr; } indicateLayer;
  NSObject<WebGeolocationProvider> *_geolocationProvider;
  NSObject<WebDeviceOrientationProvider> *m_deviceOrientationProvider;
  NSObject<WebNotificationProvider> *_notificationProvider;
  BOOL interactiveFormValidationEnabled;
  int validationMessageTimerMagnification;
  float customDeviceScaleFactor;
  struct RetainPtr<WebFixedPositionContent> { void *m_ptr; } _fixedPositionContent;
  struct unique_ptr<WebCore::AlternativeTextUIController, std::default_delete<WebCore::AlternativeTextUIController>> { struct __compressed_pair<WebCore::AlternativeTextUIController *, std::default_delete<WebCore::AlternativeTextUIController>> { struct AlternativeTextUIController *__value_; } __ptr_; } m_alternativeTextUIController;
  struct RetainPtr<NSData> { void *m_ptr; } sourceApplicationAuditData;
  BOOL _didPerformFirstNavigation;
}

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)init;
- (void)dealloc;
@end

#endif /* WebViewPrivate_h */
