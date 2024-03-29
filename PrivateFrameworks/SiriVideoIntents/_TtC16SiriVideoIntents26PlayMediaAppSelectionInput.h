//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.14.1.0.0
//
#ifndef _TtC16SiriVideoIntents26PlayMediaAppSelectionInput_h
#define _TtC16SiriVideoIntents26PlayMediaAppSelectionInput_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"
#include "MLFeatureProvider-Protocol.h"

@class NSSet;

@interface SiriVideoIntents.PlayMediaAppSelectionInput : Swift._SwiftObject<MLFeatureProvider> { // (Swift)
  /* instance variables */
   result_appUsageScore1Day;
   result_appUsageScore7Days;
   supports_general;
   supports_audiobooks;
   supports_podcasts;
   result_nowPlayingUsage7Days;
   result_foregroundAppIsLastUsed;
   result_foregroundAppDuetElapsedSeconds;
   result_clientCarConnected;
   result_clientCarplay;
   result_clientDaylight;
   result_clientDevice;
   result_clientHourOfDay;
   result_clientIsActiveForegroundApp;
   result_clientLocaleIdentifier;
   result_clientLocaleLanguage;
   result_clientLocked;
   result_clientMotion;
   result_clientNavigating;
   result_clientWorkout;
   result_entitySearchAllTimeInteractionShare;
   result_entitySearchNormalizedSecondsSinceLastInteraction;
   result_entitySearchTrailing10MinuteInteractionShare;
   result_entitySearchTrailing1DayInteractionShare;
   result_entitySearchTrailing1HourInteractionShare;
   result_entitySearchTrailing28DayInteractionShare;
   result_entitySearchTrailing2MinuteInteractionShare;
   result_entitySearchTrailing6HourInteractionShare;
   result_entitySearchTrailing7DayInteractionShare;
   result_mediaNamePresent;
   result_mediaType;
   result_isNowPlayingDuetApp;
   result_nowPlayingDuetElapsedSeconds;
   result_nowPlayingState;
   result_spotlightMatches;
   result_libraryItems;
   result_subscriptionStatus;
   result_isNowPlayingApp;
}

@property (nonatomic, readonly) NSSet *featureNames;

/* instance methods */
- (id)featureValueForName:(id)name;
@end

#endif /* _TtC16SiriVideoIntents26PlayMediaAppSelectionInput_h */
