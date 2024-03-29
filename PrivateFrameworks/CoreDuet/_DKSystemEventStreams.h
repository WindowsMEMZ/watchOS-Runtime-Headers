//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _DKSystemEventStreams_h
#define _DKSystemEventStreams_h
@import Foundation;

@interface _DKSystemEventStreams : NSObject
/* class methods */
+ (id)deviceInUseProxyStream;
+ (id)appInFocusStream;
+ (id)appUsageStream;
+ (id)appWebUsageStream;
+ (id)appClipUsageStream;
+ (id)appMediaUsageStream;
+ (id)appInstallStream;
+ (id)appActivityStream;
+ (id)appIntentsStream;
+ (id)appRelevantShortcutsStream;
+ (id)appLocationActivityStream;
+ (id)appViewedInDockStream;
+ (id)widgetsViewedStream;
+ (id)notificationUsageStream;
+ (id)focusModeStream;
+ (id)deviceActivityLevelStream;
+ (id)standbyTimerStream;
+ (id)deviceActivityLevelFeedbackStream;
+ (id)doNotDisturbStream;
+ (id)airplaneModeStream;
+ (id)nextEventForTopOffProtectionStream;
+ (id)deviceIsLockedStream;
+ (id)deviceIsLockedImputedStream;
+ (id)keybagIsLockedStream;
+ (id)deviceIsPluggedInStream;
+ (id)deviceBatteryPercentageStream;
+ (id)deviceLowPowerModeStream;
+ (id)alarmStream;
+ (id)timerStream;
+ (id)airplayPredictionStream;
+ (id)siriServiceStream;
+ (id)siriIntentEventStream;
+ (id)discoverabilitySignalsStream;
+ (id)discoverabilityUsageStream;
+ (id)diskSubsystemAccessStream;
+ (id)displayIsBacklit;
+ (id)displayOrientationStream;
+ (id)audioInputRouteStream;
+ (id)audioOutputRoutStream;
+ (id)audioOutputRouteStream;
+ (id)motionStream;
+ (id)locationVisitStream;
+ (id)microLocationVisitStream;
+ (id)locationCoordinatesStream;
+ (id)calendarEventStream;
+ (id)userIsFirstBacklightOnAfterWakeup;
+ (id)carPlayIsConnectedStream;
+ (id)bluetoothIsConnectedStream;
+ (id)watchNearbyStream;
+ (id)defaultPairedDeviceNearbyStream;
+ (id)watchActiveStream;
+ (id)nowPlayingStream;
+ (id)callInProgressStream;
+ (id)homeKitSceneStream;
+ (id)homeKitAccessoryControlStream;
+ (id)homeKitAppViewStream;
+ (id)searchFeedbackStream;
+ (id)shareSheetFeedbackStream;
+ (id)shareSheetSuggestLessFeedbackStream;
+ (id)mapsShareEtaFeedbackStream;
+ (id)safariHistoryStream;
+ (id)tombstoneStream;
+ (id)internalQueryDataCollectionStream;
+ (id)pairedDeviceForecastStream;
+ (id)remoteDeviceInBedTimesStream;
+ (id)appLaunchFeedbackStream;
+ (id)wifiConnectionStream;
+ (id)appDirectoryInteractionStream;
+ (id)behavioralRuleFeaturesStream;
+ (id)peopleSuggesterOutputForSiriNLStream;
+ (id)familyPredictionStream;
+ (id)gameCenterSuggestionsFeedbackStream;
@end

#endif /* _DKSystemEventStreams_h */
