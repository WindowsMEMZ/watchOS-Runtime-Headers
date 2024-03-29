//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSSmartSiriVolumeUserIntent_h
#define CSSmartSiriVolumeUserIntent_h
@import Foundation;

@interface CSSmartSiriVolumeUserIntent : NSObject {
  /* instance variables */
  unsigned long long kSSVCAUserIntentValidForSeconds;
  float kSSVCAUserIntentVolumeIncreaseFactor;
  float kSSVCAUserIntentVolumeDecreaseFactor;
  float kSSVCAUserIntentPermanentOffsetFactorDelta;
  float kSSVCAUserIntentPermanentOffsetFactorLowerBound;
  float kSSVCAUserIntentPermanentOffsetFactorUpperBound;
  float kSSVCA_DEVICE_SIMPLE_MIN_TTS_VOLUME;
  float kSSVCA_DEVICE_SIMPLE_MAX_TTS_VOLUME;
  float kSSVCA_DEVICE_DEFAULT_MIN_TTS_VOLUME;
  float kSSVCA_DEVICE_DEFAULT_MAX_TTS_VOLUME;
}

@property (nonatomic) unsigned long long userIntentType;
@property (nonatomic) unsigned long long userIntentValidForSeconds;
@property (nonatomic) long long userIntentTime;
@property (nonatomic) long long latestVolumeTime;
@property (nonatomic) float userIntentVolume;
@property (nonatomic) float latestVolume;
@property (nonatomic) float permanentOffsetFactor;
@property (nonatomic) BOOL permanentOffsetIsEnabled;

/* instance methods */
- (double)applyLowerAndUpperBoundsToVolume:(float)volume;
- (void)initWithStoredInformationAndAsset:(id)asset;
- (float)increaseSiriVolumeBasedOnUserIntent;
- (float)decreaseSiriVolumeBasedOnUserIntent;
- (void)storeASVStateInformation;
- (double)applyLowerAndUpperBoundsToVolumeOffset:(float)offset;
@end

#endif /* CSSmartSiriVolumeUserIntent_h */
