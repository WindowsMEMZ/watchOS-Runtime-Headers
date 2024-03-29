//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 130.14.0.0.0
//
#ifndef AVSystemController_h
#define AVSystemController_h
@import Foundation;

@class BOOL *, NSString;

@interface AVSystemController : NSObject {
  /* instance variables */
  struct AVSystemControllerPrivate * _priv;
  BOOL mFullMute;
  float mVolume;
  NSString *mCategory;
}

/* class methods */
+ (void)postNotificationOnMainQueue:(id)queue notification:(id)notification object:(id)object;
+ (id)sharedAVSystemController;
+ (id)sharedInstance;

/* instance methods */
- (id)errorWithCode:(int)code description:(id)description;
- (void)releaseSharedInstance;
- (void)handleServerDied;
- (void)postEffectiveVolumeNotification:(id)notification;
- (void)postFullMuteDidChangeNotification:(id)notification;
- (id)init;
- (void)dealloc;
- (BOOL)changeActiveCategoryVolumeBy:(float)by fallbackCategory:(id)category resultVolume:(float *)volume affectedCategory:(id *)category;
- (BOOL)changeActiveCategoryVolume:(BOOL)volume fallbackCategory:(id)category resultVolume:(float *)volume affectedCategory:(id *)category;
- (BOOL)setVibeIntensityTo:(float)to;
- (BOOL)getVibeIntensity:(float *)intensity;
- (BOOL)changeActiveCategoryVolumeBy:(float)by;
- (BOOL)changeActiveCategoryVolume:(BOOL)volume;
- (BOOL)setActiveCategoryVolumeTo:(float)to fallbackCategory:(id)category resultVolume:(float *)volume affectedCategory:(id *)category;
- (BOOL)setActiveCategoryVolumeTo:(float)to;
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name fallbackCategory:(id)category;
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name;
- (BOOL)changeActiveCategoryVolumeBy:(float)by forRoute:(id)route andDeviceIdentifier:(id)identifier;
- (BOOL)changeActiveCategoryVolume:(BOOL)volume forRoute:(id)route andDeviceIdentifier:(id)identifier;
- (BOOL)setActiveCategoryVolumeTo:(float)to forRoute:(id)route andDeviceIdentifier:(id)identifier;
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name forRoute:(id)route andDeviceIdentifier:(id)identifier;
- (BOOL)changeVolumeForRouteBy:(float)by forCategory:(id)category mode:(id)mode route:(id)route deviceIdentifier:(id)identifier andRouteSubtype:(id)subtype;
- (BOOL)changeVolumeForRoute:(BOOL)route forCategory:(id)category mode:(id)mode route:(id)route deviceIdentifier:(id)identifier andRouteSubtype:(id)subtype;
- (BOOL)setVolumeForRouteTo:(float)to forCategory:(id)category mode:(id)mode route:(id)route deviceIdentifier:(id)identifier andRouteSubtype:(id)subtype;
- (int)setVolume:(float)volume category:(id)category mode:(id)mode route:(id)route deviceIdentifier:(id)identifier routeSubtype:(id)subtype rampUpwardDuration:(id)duration rampDownwardDuration:(id)duration;
- (int)setVolume:(float)volume category:(id)category mode:(id)mode route:(id)route deviceIdentifier:(id)identifier routeSubtype:(id)subtype rampUpDuration:(float)duration rampDownDuration:(float)duration;
- (int)setVolume:(float)volume category:(id)category mode:(id)mode route:(id)route deviceIdentifier:(id)identifier routeSubtype:(id)subtype rampUpDuration:(float)duration rampDownDuration:(float)duration retainFullMute:(BOOL)mute;
- (BOOL)getVolumeForRoute:(float *)route forCategory:(id)category mode:(id)mode route:(id)route deviceIdentifier:(id)identifier andRouteSubtype:(id)subtype;
- (int)getVolume:(float *)volume category:(id)category mode:(id)mode route:(id)route deviceIdentifier:(id)identifier routeSubtype:(id)subtype;
- (int)volumeCategoryAndMode:(id)mode mode:(id)mode outCategory:(id *)category outMode:(id *)mode;
- (BOOL)toggleActiveCategoryMuted;
- (BOOL)toggleActiveCategoryMutedForRoute:(id)route andDeviceIdentifier:(id)identifier;
- (BOOL)getActiveCategoryMuted:(BOOL *)muted;
- (BOOL)getActiveCategoryMuted:(BOOL *)muted forRoute:(id)route andDeviceIdentifier:(id)identifier;
- (BOOL)changeVolumeBy:(float)by forCategory:(id)category;
- (BOOL)changeVolume:(BOOL)volume forCategory:(id)category;
- (BOOL)changeVolume:(BOOL)volume forCategory:(id)category mode:(id)mode;
- (BOOL)setVolumeTo:(float)to forCategory:(id)category;
- (BOOL)setVolumeTo:(float)to forCategory:(id)category retainFullMute:(BOOL)mute;
- (BOOL)setVolumeTo:(float)to forCategory:(id)category mode:(id)mode;
- (BOOL)setBTHFPRoute:(id)bthfproute availableForVoicePrompts:(BOOL)prompts;
- (BOOL)didCancelRoutePicking:(id)picking;
- (BOOL)setPickedRouteWithPassword:(id)password withPassword:(id)password;
- (BOOL)getVolume:(float *)volume forCategory:(id)category;
- (BOOL)getVolume:(float *)volume forCategory:(id)category mode:(id)mode;
- (BOOL)setSilentMode:(BOOL)mode untilTime:(id)time reason:(id)reason clientType:(unsigned int)type;
- (BOOL)getSilentMode;
- (BOOL)getSilentMode:(BOOL *)mode error:(id *)error;
- (id)routeForCategory:(id)category;
- (id)volumeCategoryForAudioCategory:(id)category;
- (int)toggleInputMute;
- (int)setInputMute:(struct { unsigned int x0[8] })mute muteValue:(BOOL)value;
- (int)getInputMute:(struct { unsigned int x0[8] })mute outMuteValue:(BOOL *)value;
- (int)clearUplinkMutedCache;
- (int)allowAppToInitiateRecordingTemporarily:(id)temporarily;
- (id)pickableRoutesForCategory:(id)category andMode:(id)mode;
- (id)pickableRoutesForCategory:(id)category;
- (BOOL)currentRouteHasVolumeControl;
- (BOOL)overrideToPartnerRoute;
- (BOOL)allowUserToExceedEUVolumeLimit;
- (BOOL)hasRouteSharingPolicyLongFormVideo:(id)video;
- (BOOL)shouldClientWithAudioScore:(int)score hijackRoute:(id)route hijackDeniedReason:(id *)reason;
- (id)attributeForKey:(id)key;
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;
@end

#endif /* AVSystemController_h */
