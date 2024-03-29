//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXTimeOutputPreferences_h
#define AXTimeOutputPreferences_h
@import Foundation;

#include "AXSettings.h"

@interface AXTimeOutputPreferences : AXSettings
/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)accessibilityDomainAccessor;
- (id)_npsValueForPreferenceKey:(id)key;
- (id)_npsValueForPreferenceKey:(id)key expectedClass:(Class)class;
- (void)_setNPSValue:(id)npsvalue preferenceKey:(id)key;
- (BOOL)_npsBoolValueForPreferenceKey:(id)key defaultValue:(BOOL)value;
- (long long)_npsIntegerValueForPreferenceKey:(id)key defaultValue:(long long)value;
- (BOOL)_voiceOverIsEnabled;
- (BOOL)_voiceOverIsInTripleClick;
- (BOOL)tapToSpeakTimeEnabled;
- (void)setTapToSpeakTimeEnabled:(BOOL)enabled;
- (long long)tapToSpeakTimeAvailability;
- (void)setTapToSpeakTimeAvailability:(long long)availability;
- (BOOL)voiceOverTapticTimeMode;
- (void)setVoiceOverTapticTimeMode:(BOOL)mode;
- (long long)voiceOverTapticTimeEncoding;
- (void)setVoiceOverTapticTimeEncoding:(long long)encoding;
- (BOOL)voiceOverTapticChimesEnabled;
- (void)setVoiceOverTapticChimesEnabled:(BOOL)enabled;
- (long long)voiceOverTapticChimesFrequencyEncoding;
- (void)setVoiceOverTapticChimesFrequencyEncoding:(long long)encoding;
- (long long)voiceOverTapticChimesSoundType;
- (void)setVoiceOverTapticChimesSoundType:(long long)type;
- (id)tapticChimesFrequencyOptions;
- (id)tapticChimesSoundsOptions;
- (id)tapToSpeakAvailabilityOptions;
- (id)tapticTimeEncodingOptions;
- (id)localizedStringForKey:(id)key;
- (id)tapticChimesLocalizedTitle;
- (id)tapticChimesLocalizedDescription;
- (id)tapticChimesLocalizedCurrentFrequency;
- (id)tapticChimesLocalizedCurrentSounds;
- (id)tapticChimesScheduleLocalizedTitle;
- (id)tapticChimesSoundsLocalizedTitle;
- (id)localizedStringForTapticChimesFrequencyEncoding:(long long)encoding;
- (id)localizedStringForTapticChimesSoundType:(long long)type;
- (id)tapToSpeakTimeLocalizedTitle;
- (id)tapToSpeakTimeLocalizedDescription;
- (id)localizedStringForTapToSpeakTimeAvailability:(long long)availability;
- (id)tapticTimeLocalizedTitle;
- (id)tapticTimeLocalizedDescription;
- (id)tapticTimeLocalizedCurrentMode;
- (id)tapticTimeModeLocalizedDescription;
- (id)localizedStringForTapticTimeEncoding:(long long)encoding;
@end

#endif /* AXTimeOutputPreferences_h */
