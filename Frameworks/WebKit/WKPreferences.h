//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WKPreferences_h
#define WKPreferences_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "WKObject-Protocol.h"

@class NSString;
@protocol {ObjectStorage<WebKit::WebPreferences>="data"{type="__lx"[112C]}};

@interface WKPreferences : NSObject<WKObject, NSCopying, NSSecureCoding> {
  /* instance variables */
  struct ObjectStorage<WebKit::WebPreferences> { struct type { unsigned char x[112] __lx; } data; } _preferences;
}

@property (nonatomic) BOOL _telephoneNumberDetectionIsEnabled;
@property (nonatomic) long long _storageBlockingPolicy;
@property (nonatomic) BOOL _compositingBordersVisible;
@property (nonatomic) BOOL _compositingRepaintCountersVisible;
@property (nonatomic) BOOL _tiledScrollingIndicatorVisible;
@property (nonatomic) BOOL _resourceUsageOverlayVisible;
@property (nonatomic) unsigned long long _visibleDebugOverlayRegions;
@property (nonatomic) BOOL _legacyLineLayoutVisualCoverageEnabled;
@property (nonatomic) BOOL _contentChangeObserverEnabled;
@property (nonatomic) BOOL _acceleratedDrawingEnabled;
@property (nonatomic) BOOL _displayListDrawingEnabled;
@property (nonatomic) BOOL _largeImageAsyncDecodingEnabled;
@property (nonatomic) BOOL _needsInAppBrowserPrivacyQuirks;
@property (nonatomic) BOOL _animatedImageAsyncDecodingEnabled;
@property (nonatomic) BOOL _textAutosizingEnabled;
@property (nonatomic) BOOL _developerExtrasEnabled;
@property (nonatomic) BOOL _logsPageMessagesToSystemConsoleEnabled;
@property (nonatomic) BOOL _hiddenPageDOMTimerThrottlingEnabled;
@property (nonatomic) BOOL _hiddenPageDOMTimerThrottlingAutoIncreases;
@property (nonatomic) BOOL _pageVisibilityBasedProcessSuppressionEnabled;
@property (nonatomic) BOOL _allowFileAccessFromFileURLs;
@property (nonatomic) unsigned long long _javaScriptRuntimeFlags;
@property (nonatomic) BOOL _standalone;
@property (nonatomic) BOOL _diagnosticLoggingEnabled;
@property (nonatomic) unsigned long long _defaultFontSize;
@property (nonatomic) unsigned long long _defaultFixedPitchFontSize;
@property (copy, nonatomic) NSString *_fixedPitchFontFamily;
@property (nonatomic) BOOL _offlineApplicationCacheIsEnabled;
@property (nonatomic) BOOL _fullScreenEnabled;
@property (nonatomic) BOOL _shouldSuppressKeyboardInputDuringProvisionalNavigation;
@property (nonatomic) BOOL _allowsPictureInPictureMediaPlayback;
@property (nonatomic) BOOL _applePayCapabilityDisclosureAllowed;
@property (nonatomic) BOOL _loadsImagesAutomatically;
@property (nonatomic) BOOL _peerConnectionEnabled;
@property (nonatomic) BOOL _mediaDevicesEnabled;
@property (nonatomic) BOOL _getUserMediaRequiresFocus;
@property (nonatomic) BOOL _screenCaptureEnabled;
@property (nonatomic) BOOL _mockCaptureDevicesEnabled;
@property (nonatomic) BOOL _mockCaptureDevicesPromptEnabled;
@property (nonatomic) BOOL _mediaCaptureRequiresSecureConnection;
@property (nonatomic) BOOL _enumeratingAllNetworkInterfacesEnabled;
@property (nonatomic) BOOL _iceCandidateFilteringEnabled;
@property (nonatomic) double _inactiveMediaCaptureSteamRepromptIntervalInMinutes;
@property (nonatomic) BOOL _interruptAudioOnPageVisibilityChangeEnabled;
@property (nonatomic) BOOL _javaScriptCanAccessClipboard;
@property (nonatomic) BOOL _domPasteAllowed;
@property (nonatomic) BOOL _shouldAllowUserInstalledFonts;
@property (nonatomic) BOOL _shouldAllowDesignSystemUIFonts;
@property (nonatomic) long long _editableLinkBehavior;
@property (nonatomic) BOOL _avFoundationEnabled;
@property (nonatomic) BOOL _shouldEnableTextAutosizingBoost;
@property (nonatomic) BOOL _safeBrowsingEnabled;
@property (nonatomic) BOOL _colorFilterEnabled;
@property (nonatomic) BOOL _punchOutWhiteBackgroundsInDarkMode;
@property (nonatomic) BOOL _lowPowerVideoAudioBufferSizeEnabled;
@property (nonatomic) BOOL _shouldIgnoreMetaViewport;
@property (nonatomic) BOOL _videoQualityIncludesDisplayCompositingEnabled;
@property (nonatomic) BOOL _deviceOrientationEventEnabled;
@property (nonatomic) BOOL _needsSiteSpecificQuirks;
@property (nonatomic) BOOL _itpDebugModeEnabled;
@property (nonatomic) BOOL _mediaSourceEnabled;
@property (nonatomic) BOOL _secureContextChecksEnabled;
@property (nonatomic) BOOL _remotePlaybackEnabled;
@property (nonatomic) BOOL _webAudioEnabled;
@property (nonatomic) BOOL _acceleratedCompositingEnabled;
@property (nonatomic) BOOL _serviceWorkerEntitlementDisabledForTesting;
@property (nonatomic) BOOL _accessibilityIsolatedTreeEnabled;
@property (nonatomic) BOOL _speechRecognitionEnabled;
@property (nonatomic) BOOL _privateClickMeasurementEnabled;
@property (nonatomic) BOOL _privateClickMeasurementDebugModeEnabled;
@property (nonatomic) long long _pitchCorrectionAlgorithm;
@property (nonatomic) BOOL _mediaSessionEnabled;
@property (nonatomic) BOOL _extensibleSSOEnabled;
@property (nonatomic) BOOL _requiresPageVisibilityToPlayAudio;
@property (nonatomic) BOOL _fileSystemAccessEnabled;
@property (nonatomic) BOOL _storageAPIEnabled;
@property (nonatomic) BOOL _accessHandleEnabled;
@property (nonatomic) BOOL _notificationsEnabled;
@property (nonatomic) BOOL _notificationEventEnabled;
@property (nonatomic) BOOL _pushAPIEnabled;
@property (nonatomic) BOOL _modelDocumentEnabled;
@property (nonatomic) double _interactionRegionMinimumCornerRadius;
@property (nonatomic) double _interactionRegionInlinePadding;
@property (nonatomic) BOOL _requiresFullscreenToLockScreenOrientation;
@property (nonatomic) double _mediaPreferredFullscreenWidth;
@property (nonatomic) BOOL _appBadgeEnabled;
@property (nonatomic) BOOL _clientBadgeEnabled;
@property (nonatomic) BOOL _verifyWindowOpenUserGestureFromUIProcess;
@property (nonatomic) BOOL _managedMediaSourceEnabled;
@property (nonatomic) double _managedMediaSourceLowThreshold;
@property (nonatomic) double _managedMediaSourceHighThreshold;
@property (nonatomic) BOOL javaScriptEnabled;
@property (nonatomic) BOOL _requestAnimationFrameEnabled;
@property (nonatomic) BOOL _subpixelAntialiasedLayerTextEnabled;
@property (nonatomic) double minimumFontSize;
@property (nonatomic) BOOL javaScriptCanOpenWindowsAutomatically;
@property (nonatomic) BOOL fraudulentWebsiteWarningEnabled;
@property (nonatomic) BOOL shouldPrintBackgrounds;
@property (nonatomic) BOOL textInteractionEnabled;
@property (nonatomic) BOOL siteSpecificQuirksModeEnabled;
@property (nonatomic) BOOL elementFullscreenEnabled;
@property (nonatomic) long long inactiveSchedulingPolicy;
@property (readonly) struct Object { undefined * * x0; void * x1; } * _apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_features;
+ (id)_internalDebugFeatures;
+ (id)_experimentalFeatures;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)_setRequestAnimationFrameEnabled:(BOOL)enabled;
- (void)_setSubpixelAntialiasedLayerTextEnabled:(BOOL)enabled;
- (void)_setTelephoneNumberDetectionIsEnabled:(BOOL)enabled;
- (void)_setStorageBlockingPolicy:(long long)policy;
- (void)_setOfflineApplicationCacheIsEnabled:(BOOL)enabled;
- (void)_setFullScreenEnabled:(BOOL)enabled;
- (void)_setAllowsPictureInPictureMediaPlayback:(BOOL)playback;
- (void)_setCompositingBordersVisible:(BOOL)visible;
- (void)_setCompositingRepaintCountersVisible:(BOOL)visible;
- (void)_setTiledScrollingIndicatorVisible:(BOOL)visible;
- (void)_setResourceUsageOverlayVisible:(BOOL)visible;
- (void)_setVisibleDebugOverlayRegions:(unsigned long long)regions;
- (void)_setLegacyLineLayoutVisualCoverageEnabled:(BOOL)enabled;
- (void)_setContentChangeObserverEnabled:(BOOL)enabled;
- (void)_setAcceleratedDrawingEnabled:(BOOL)enabled;
- (void)_setDisplayListDrawingEnabled:(BOOL)enabled;
- (void)_setLargeImageAsyncDecodingEnabled:(BOOL)enabled;
- (void)_setNeedsInAppBrowserPrivacyQuirks:(BOOL)quirks;
- (void)_setAnimatedImageAsyncDecodingEnabled:(BOOL)enabled;
- (void)_setTextAutosizingEnabled:(BOOL)enabled;
- (void)_setDeveloperExtrasEnabled:(BOOL)enabled;
- (void)_setLogsPageMessagesToSystemConsoleEnabled:(BOOL)enabled;
- (void)_setHiddenPageDOMTimerThrottlingEnabled:(BOOL)enabled;
- (void)_setHiddenPageDOMTimerThrottlingAutoIncreases:(BOOL)increases;
- (void)_setPageVisibilityBasedProcessSuppressionEnabled:(BOOL)enabled;
- (void)_setAllowFileAccessFromFileURLs:(BOOL)urls;
- (void)_setJavaScriptRuntimeFlags:(unsigned long long)flags;
- (BOOL)_isStandalone;
- (void)_setStandalone:(BOOL)standalone;
- (void)_setDiagnosticLoggingEnabled:(BOOL)enabled;
- (void)_setDefaultFontSize:(unsigned long long)size;
- (void)_setDefaultFixedPitchFontSize:(unsigned long long)size;
- (void)_setFixedPitchFontFamily:(id)family;
- (BOOL)_isEnabledForInternalDebugFeature:(id)feature;
- (void)_setEnabled:(BOOL)enabled forInternalDebugFeature:(id)feature;
- (BOOL)_isEnabledForFeature:(id)feature;
- (void)_setEnabled:(BOOL)enabled forFeature:(id)feature;
- (BOOL)_isEnabledForExperimentalFeature:(id)feature;
- (void)_setEnabled:(BOOL)enabled forExperimentalFeature:(id)feature;
- (void)_setApplePayCapabilityDisclosureAllowed:(BOOL)allowed;
- (void)_setShouldSuppressKeyboardInputDuringProvisionalNavigation:(BOOL)navigation;
- (void)_setLoadsImagesAutomatically:(BOOL)automatically;
- (void)_setPeerConnectionEnabled:(BOOL)enabled;
- (void)_setMediaDevicesEnabled:(BOOL)enabled;
- (void)_setGetUserMediaRequiresFocus:(BOOL)focus;
- (void)_setScreenCaptureEnabled:(BOOL)enabled;
- (void)_setMockCaptureDevicesEnabled:(BOOL)enabled;
- (void)_setMockCaptureDevicesPromptEnabled:(BOOL)enabled;
- (void)_setMediaCaptureRequiresSecureConnection:(BOOL)connection;
- (void)_setInactiveMediaCaptureSteamRepromptIntervalInMinutes:(double)minutes;
- (void)_setInterruptAudioOnPageVisibilityChangeEnabled:(BOOL)enabled;
- (void)_setEnumeratingAllNetworkInterfacesEnabled:(BOOL)enabled;
- (void)_setICECandidateFilteringEnabled:(BOOL)enabled;
- (void)_setJavaScriptCanAccessClipboard:(BOOL)clipboard;
- (void)_setShouldAllowUserInstalledFonts:(BOOL)fonts;
- (void)_setShouldAllowDesignSystemUIFonts:(BOOL)uifonts;
- (void)_setEditableLinkBehavior:(long long)behavior;
- (void)_setAVFoundationEnabled:(BOOL)enabled;
- (void)_setColorFilterEnabled:(BOOL)enabled;
- (void)_setPunchOutWhiteBackgroundsInDarkMode:(BOOL)mode;
- (void)_setLowPowerVideoAudioBufferSizeEnabled:(BOOL)enabled;
- (void)_setShouldIgnoreMetaViewport:(BOOL)viewport;
- (void)_setNeedsSiteSpecificQuirks:(BOOL)quirks;
- (void)_setItpDebugModeEnabled:(BOOL)enabled;
- (void)_setMediaSourceEnabled:(BOOL)enabled;
- (void)_setManagedMediaSourceEnabled:(BOOL)enabled;
- (void)_setManagedMediaSourceLowThreshold:(double)threshold;
- (void)_setManagedMediaSourceHighThreshold:(double)threshold;
- (void)_setSecureContextChecksEnabled:(BOOL)enabled;
- (void)_setWebAudioEnabled:(BOOL)enabled;
- (void)_setAcceleratedCompositingEnabled:(BOOL)enabled;
- (void)_setRemotePlaybackEnabled:(BOOL)enabled;
- (void)_setServiceWorkerEntitlementDisabledForTesting:(BOOL)testing;
- (void)_setDOMPasteAllowed:(BOOL)allowed;
- (void)_setShouldEnableTextAutosizingBoost:(BOOL)boost;
- (BOOL)_isSafeBrowsingEnabled;
- (void)_setSafeBrowsingEnabled:(BOOL)enabled;
- (void)_setVideoQualityIncludesDisplayCompositingEnabled:(BOOL)enabled;
- (void)_setDeviceOrientationEventEnabled:(BOOL)enabled;
- (void)_setAccessibilityIsolatedTreeEnabled:(BOOL)enabled;
- (void)_setSpeechRecognitionEnabled:(BOOL)enabled;
- (void)_setPrivateClickMeasurementEnabled:(BOOL)enabled;
- (void)_setPrivateClickMeasurementDebugModeEnabled:(BOOL)enabled;
- (void)_setPitchCorrectionAlgorithm:(long long)algorithm;
- (void)_setMediaSessionEnabled:(BOOL)enabled;
- (BOOL)_isExtensibleSSOEnabled;
- (void)_setExtensibleSSOEnabled:(BOOL)ssoenabled;
- (void)_setRequiresPageVisibilityToPlayAudio:(BOOL)audio;
- (void)_setFileSystemAccessEnabled:(BOOL)enabled;
- (void)_setStorageAPIEnabled:(BOOL)apienabled;
- (void)_setAccessHandleEnabled:(BOOL)enabled;
- (void)_setNotificationsEnabled:(BOOL)enabled;
- (void)_setNotificationEventEnabled:(BOOL)enabled;
- (void)_setPushAPIEnabled:(BOOL)apienabled;
- (void)_setModelDocumentEnabled:(BOOL)enabled;
- (void)_setRequiresFullscreenToLockScreenOrientation:(BOOL)orientation;
- (void)_setInteractionRegionMinimumCornerRadius:(double)radius;
- (void)_setInteractionRegionInlinePadding:(double)padding;
- (void)_setMediaPreferredFullscreenWidth:(double)width;
- (void)_setAppBadgeEnabled:(BOOL)enabled;
- (void)_setClientBadgeEnabled:(BOOL)enabled;
- (void)_setVerifyWindowOpenUserGestureFromUIProcess:(BOOL)uiprocess;
- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isFraudulentWebsiteWarningEnabled;
- (BOOL)isTextInteractionEnabled;
- (BOOL)isSiteSpecificQuirksModeEnabled;
- (BOOL)isElementFullscreenEnabled;
@end

#endif /* WKPreferences_h */
