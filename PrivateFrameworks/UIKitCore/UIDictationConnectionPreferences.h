//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIDictationConnectionPreferences_h
#define UIDictationConnectionPreferences_h
@import Foundation;

@class AFPreferences;

@interface UIDictationConnectionPreferences : NSObject

@property (retain, nonatomic) AFPreferences *afPreferences;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initSingleton;
- (BOOL)dictationIsEnabled;
- (long long)dataSharingOptInStatus;
- (BOOL)suppressDataSharingOptIn;
- (BOOL)suppressDictationOptIn;
- (BOOL)ignoreServerManualEndpointingThreshold;
- (id)manualEndpointingThreshold;
- (id)languageCode;
- (void)afPreferencesChanged:(id)changed;
- (id)dictationSLSEnabledLanguages;
- (id)getOfflineDictationStatusForLanguage:(id)language;
- (BOOL)isOnDeviceDictationSupportMissingAssetForLanguage:(id)language;
- (BOOL)isOnDeviceEmojiRecognitionSupportAvailableForLanguage:(id)language;
@end

#endif /* UIDictationConnectionPreferences_h */
