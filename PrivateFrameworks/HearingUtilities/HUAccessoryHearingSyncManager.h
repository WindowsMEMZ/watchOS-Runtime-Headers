//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 406.1.12.0.0
//
#ifndef HUAccessoryHearingSyncManager_h
#define HUAccessoryHearingSyncManager_h
@import Foundation;

@class NSDictionary, NSMutableDictionary;

@interface HUAccessoryHearingSyncManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *cachedEnabled;
@property (retain, nonatomic) NSMutableDictionary *deviceListeningState;
@property (retain, nonatomic) NSMutableDictionary *persistentDeviceListeningState;
@property (retain, nonatomic) NSDictionary *watchListeningState;
@property (retain, nonatomic) NSMutableDictionary *deviceType;
@property (retain, nonatomic) NSMutableDictionary *nearbyDevicesListeningState;

/* class methods */
+ (id)sharedInstance;
+ (id)adaptiveTransparencySupportedDevices;
+ (id)syncableSupportedDevices;

/* instance methods */
- (struct { long long x0; long long x1; })deviceState;
- (id)init;
- (void)_initCachedEnabled;
- (void)_registerForAccessoryHearingSettingsUpdate;
- (void)_registerForAccessoryManagerUpdate;
- (void)_registerForNearbyControllerUpdate;
- (void)listeningModeDidChange:(id)change;
- (void)sendUpdateToAccessory;
- (id)deviceTypes;
- (id)deviceTypeForProductCode:(id)code;
- (long long)deviceTypeForAddress:(id)address;
- (long long)listeningStateForAddress:(id)address andStoredState:(id)state;
- (long long)listeningModesChangedState:(id)state;
@end

#endif /* HUAccessoryHearingSyncManager_h */
