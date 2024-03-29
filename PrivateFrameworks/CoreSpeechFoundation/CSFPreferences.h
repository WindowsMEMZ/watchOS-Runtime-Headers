//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSFPreferences_h
#define CSFPreferences_h
@import Foundation;

@interface CSFPreferences : NSObject
/* class methods */
+ (id)sharedPreferences;

/* instance methods */
- (BOOL)voiceTriggerEnabled;
- (BOOL)phraseSpotterEnabled;
- (void)setVoiceTriggerEverUsed;
- (BOOL)isAttentiveSiriEnabled;
- (BOOL)isAttentiveSiriAudioLoggingEnabled;
- (BOOL)isGazeSimlModelEnabled;
- (BOOL)isGazeMandatory;
- (BOOL)isGazeSignalEnabled;
- (BOOL)isDeferredActivationEnabled;
- (BOOL)isDeferredAsrResultsEnabled;
- (BOOL)twoShotNotificationEnabled;
- (float)getAttendingTimeoutConfig;
- (BOOL)_storeModeEnabled;
- (void)setFileLoggingIsEnabled:(BOOL)enabled;
- (BOOL)fileLoggingIsEnabled;
- (BOOL)_isAdaptiveSiriVolumeDisabled;
- (void)disableAdaptiveSiriVolume:(id)volume;
- (id)fileLoggingLevel;
- (void)setFileLoggingLevel:(id)level;
- (id)baseDir;
- (id)voiceTriggerAudioLogDirectory;
- (id)geckoAudioLogDirectory;
- (id)getOnDeviceCompilationCacheDirectory;
- (id)getOnDeviceCompilationCacheDirectoryForBenchmark;
- (id)getOnDeviceCompilationUUIdSubDir;
- (id)mhLogDirectory;
- (id)remoteP2pLogDirectory;
- (id)remoteGradingDataDirectory;
- (id)ssvLogDirectory;
- (id)getSSVLogFilePathWithSessionIdentifier:(id)identifier;
- (id)trialBaseAssetDirectory;
- (id)assistantLogDirectory;
- (id)assistantAudioFileLogDirectory;
- (id)myriadHashDirectory;
- (id)myriadHashFilePath;
- (BOOL)secondPassAudioLoggingEnabled;
- (BOOL)speakerRecognitionAudioLoggingEnabled;
- (BOOL)personalizedSiriEnrollmentAudioLoggingEnabled;
- (BOOL)jarvisAudioLoggingEnabled;
- (void)setJarvisTriggerMode:(long long)mode;
- (long long)getJarvisTriggerMode;
- (BOOL)startOfSpeechAudioLoggingEnabled;
- (BOOL)forceVoiceTriggerAPMode;
- (BOOL)forceVoiceTriggerAOPMode;
- (void)_updatePreferenceSettingsForAccessory:(id)accessory settingsUpdateBlock:(id /* block */)block;
- (void)setBooleanAccessorySettingValue:(BOOL)value forKey:(id)key forAccessory:(id)accessory;
- (void)setMediaPlayingSettingForAccessory:(id)accessory isMediaPlaying:(BOOL)playing isInterrupted:(BOOL)interrupted interruptedTime:(double)time;
- (BOOL)getBooleanAccessorySettingValueForKey:(id)key forAccessory:(id)accessory;
- (void)_clearAccessorySettingForKeys:(id)keys forAccessory:(id)accessory;
- (double)getMediaPlaybackInterruptedTime:(id)time;
- (void)clearMediaPlaybackInterruptedTimeOnAccessory:(id)accessory;
- (BOOL)isMediaPlayingOnAccessory:(id)accessory;
- (void)setIsMediaPlayingOnAccessory:(id)accessory isMediaPlaying:(BOOL)playing isInterrupted:(BOOL)interrupted interruptedTime:(double)time;
- (void)clearMediaPlayingStatusOnAccessory:(id)accessory;
- (BOOL)isAlarmPlayingOnAccessory:(id)accessory;
- (void)setIsAlarmPlayingOnAccessory:(id)accessory isAlarmPlaying:(BOOL)playing;
- (void)clearAlarmPlayingStatusOnAccessory:(id)accessory;
- (BOOL)isTimerPlayingOnAccessory:(id)accessory;
- (void)setIsTimerPlayingOnAccessory:(id)accessory isTimerPlaying:(BOOL)playing;
- (void)clearTimerPlayingStatusOnAccessory:(id)accessory;
- (void)clearMyriadSettingsOnAccessory:(id)accessory;
- (id)getStartOfSpeechAudioLogFilePath;
- (BOOL)_isDirectory:(id)directory;
- (double)remoteVoiceTriggerDelayTime;
- (double)remoteVoiceTriggerEndpointTimeoutWithDefault:(double)default;
- (id)interstitialRelativeDirForLevel:(long long)level;
- (id)interstitialAbsoluteDirForLevel:(long long)level;
- (BOOL)myriadFileLoggingEnabled;
- (BOOL)enableAudioInjection:(BOOL)injection;
- (BOOL)enableBenchmarkService:(BOOL)service;
- (BOOL)audioInjectionEnabled;
- (BOOL)enableProgrammableAudioInjection:(BOOL)injection;
- (BOOL)useSpeexForAudioInjection;
- (BOOL)programmableAudioInjectionEnabled;
- (BOOL)enableAudioInjection:(BOOL)injection withKey:(struct __CFString *)key;
- (void)setAudioInjectionFilePath:(id)path;
- (id)audioInjectionFilePath;
- (BOOL)isPHSSupported;
- (BOOL)_isRemoteVoiceTriggerAvailable;
- (BOOL)isSpeakerRecognitionAvailable;
- (unsigned long long)speakerIdScoreReportingType;
- (BOOL)smartSiriVolumeSoftVolumeEnabled;
- (BOOL)smartSiriVolumeContextAwareLoggingEnabled;
- (BOOL)smartSiriVolumeContextAwareEnabled;
- (BOOL)isAdaptiveSiriVolumeTemporaryIntentValid;
- (BOOL)isAdaptiveSiriVolumePermanentOffsetEnabled;
- (float)adaptiveSiriVolumePermanentOffset;
- (int)adaptiveSiriVolumeRecentIntent;
- (double)audioSessionActivationDelay;
- (unsigned long long)maxNumLoggingFiles;
- (unsigned long long)maxNumGradingFiles;
- (BOOL)useSiriActivationSPIForHomePod;
- (BOOL)useSiriActivationSPIForwatchOS;
- (BOOL)shouldOverwriteRemoteVADScore;
- (float)overwritingRemoteVADScore;
- (void)setHearstFirstPassModelVersion:(id)version;
- (void)setHearstSecondPassModelVersion:(id)version;
- (id)fakeHearstModelPath;
- (void)setFakeHearstModelPath:(id)path;
- (BOOL)companionSyncVoiceTriggerUtterancesEnabled;
- (BOOL)opportuneSpeakListenerBypassEnabled;
- (BOOL)bypassPersonalizedHeySiri;
- (BOOL)isMphVTEnabled;
- (BOOL)isMultiChannelAudioLoggingEnabled;
- (BOOL)isAdBlockerAudioLoggingEnabled;
- (BOOL)isSelfTriggerFileLoggingEnabled;
- (void)setASVUserIntent:(id)intent;
- (void)getASVUserIntent:(id)intent;
- (void)setSiriLanguageCodeDarwin:(id)darwin;
- (id)languageCodeDarwin;
- (void)setRemoteDarwinEverConnectedWithNotifyKey:(const char *)key;
- (void)setIdleUserPreventSleepAssertionAcquitionDate:(id)date;
- (id)getIdleUserPreventSleepAssertionAcquitionDate;
- (BOOL)isP2PTransferEnabled;
- (BOOL)isReducedPHSThresholdEnabled;
- (BOOL)isModelBenchmarkingEnabled;
- (long long)geckoLoggingLevel;
- (void)enableAttentiveSiriAPI:(id)api;
- (BOOL)isAttentiveSiriAPIEnabled;
- (void)enableEndpointEnhancedLogging:(id)logging;
- (BOOL)isEndpointEnhancedLoggingEnabled;
- (BOOL)isEndpointAssetOverridingEnabled;
- (id)fakeEndpointAssetPath;
- (BOOL)isEndpointAssetBypassTrialEnabled;
- (BOOL)isVoiceTriggerAssetOverridingEnabled;
- (id)fakeVoiceTriggerAssetPath;
- (id)fakeVoiceTriggerAudioAccessoryFirstPassAssetPath;
- (BOOL)isMitigationAssetOverridingEnabled;
- (id)fakeMitigationAssetPath;
- (BOOL)bypassTrialAssets;
- (void)setSelfTriggerEnabledAccessory:(BOOL)accessory;
- (BOOL)isSelfTriggerEnabledAccessory;
- (BOOL)shouldOverwriteVoiceTriggerMLock;
- (BOOL)overwritingVoiceTriggerMLock;
- (BOOL)bypassSpeakerIdForMitigation;
- (id)readSpeakerIdScoreOverrrideConfig;
- (BOOL)firstPassDebuggingEnabled;
- (BOOL)forceMitigateForHybridSDSD;
- (void)setPowerLoggingCurrentAssetConfigVersion:(id)version;
- (id)powerLoggingCurrentAssetConfigVersion;
- (id)whiteListedMultiPhraseLocales;
- (void)whiteListMultiPhraseLocale:(id)locale;
- (void)setPowerLoggingCurrentLanguage:(id)language;
- (id)powerLoggingCurrentLanguage;
- (unsigned long long)overridingFrameSkipRate;
- (BOOL)shouldDisableImplicitTraining;
- (BOOL)isFlexibleFollowupsUserDisabled;
- (BOOL)isFlexibleFollowupsSupported;
@end

#endif /* CSFPreferences_h */
