//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 600.0.0.0.0
//
#ifndef TLCapabilitiesManager_h
#define TLCapabilitiesManager_h
@import Foundation;

@class NSDictionary, NSString;

@interface TLCapabilitiesManager : NSObject {
  /* instance variables */
  BOOL _isInternalInstall;
  NSDictionary *_deviceCodeNameSimplicationMapping;
}

@property (readonly, nonatomic) BOOL ringtoneStoreAvailable;
@property (readonly, nonatomic) BOOL alertToneStoreAvailable;
@property (readonly, nonatomic) BOOL wantsModernDefaultRingtone;
@property (readonly, nonatomic) BOOL hasVibratorCapability;
@property (readonly, nonatomic) BOOL hasSynchronizedVibrationsCapability;
@property (readonly, nonatomic) BOOL hasUserGeneratedVibrationsCapability;
@property (readonly, nonatomic) BOOL internalInstall;
@property (readonly, nonatomic) NSString *deviceCodeName;
@property (readonly, nonatomic) NSString *simplifiedDeviceCodeName;
@property (readonly, nonatomic) BOOL homePod;

/* class methods */
+ (id)sharedCapabilitiesManager;

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)isRingtoneStoreAvailable;
- (BOOL)isAlertToneStoreAvailable;
- (BOOL)isInternalInstall;
- (BOOL)isHomePod;
@end

#endif /* TLCapabilitiesManager_h */
