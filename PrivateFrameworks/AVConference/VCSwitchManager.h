//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCSwitchManager_h
#define VCSwitchManager_h
@import Foundation;

@interface VCSwitchManager : NSObject

@property unsigned int localSwitches;
@property unsigned int remoteSwitches;
@property unsigned int negotiatedSwitches;

/* instance methods */
- (void)initializeLocalSwitches;
- (void)setupLocalOnOffSwitches;
- (void)setupLocalABTestSwitches;
- (void)setupLocalSwitchesIndividually;
- (void)setupLocalOnOffSwitchesFromMasterSwitch;
- (void)setupLocalAudioTestGroupSwitches;
- (void)setupLocalVideoTestGroupSwitches;
- (void)setupLocalNetworkTestGroupSwitches;
- (void)setupLocalRateControlTestGroupSwitches;
- (void)setupLocalDuplicationTestGroupSwitches;
- (void)updateDuplicationEnhancementSwitches;
- (void)negotiateSwitches;
- (void)negotiateSwitchesForIsCaller:(BOOL)caller;
- (void)setRemoteSwitches:(unsigned int)switches isCaller:(BOOL)caller;
- (BOOL)isSwitchEnabled:(unsigned int)enabled;
- (BOOL)isLocalSwitchEnabled:(unsigned int)enabled;
- (unsigned int)applyNegotiationRulesUsingLocalSwitches:(unsigned int)switches negotiatedSwitches:(unsigned int)switches;
- (id)description;
@end

#endif /* VCSwitchManager_h */
