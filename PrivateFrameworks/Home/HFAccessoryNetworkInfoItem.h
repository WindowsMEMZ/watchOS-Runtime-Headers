//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFAccessoryNetworkInfoItem_h
#define HFAccessoryNetworkInfoItem_h
@import Foundation;

#include "HFAccessoryInfoItem.h"

@class NSDate, NSDictionary, NSString;

@interface HFAccessoryNetworkInfoItem : HFAccessoryInfoItem

@property (nonatomic) unsigned long long networkInfoType;
@property (retain, nonatomic) NSDate *debounceDate;
@property (nonatomic) long long fakeNetworkStrength;
@property (retain, nonatomic) NSString *overrideName;
@property (retain, nonatomic) NSDictionary *wifiInfo;
@property (retain, nonatomic) NSString *forceCurrentDeviceNetworkSSID;
@property (nonatomic) BOOL initialSetup;
@property (readonly, nonatomic) BOOL supportsWiFiStrengthDisplay;

/* instance methods */
- (id)initWithAccessory:(id)accessory overrideSSIDName:(id)ssidname;
- (void)toggleNetworkInfoType;
- (unsigned long long)infoType;
- (id)_subclass_updateWithOptions:(id)options;
- (unsigned long long)_nextNetworkInfoType;
- (id)_localizedTitleForType:(unsigned long long)type;
- (id)_localizedDescriptionForType:(unsigned long long)type;
- (BOOL)_showSignalStrength:(unsigned long long)strength;
- (id)_getSignalStrengthIcon:(id)icon forFastUpdate:(BOOL)update;
- (long long)_getWiFiStrength:(id)strength forFastUpdate:(BOOL)update;
- (id)_updateAccessoryWifiInfo;
- (id)_extractWiFiInfo:(id)info;
- (BOOL)_isFirstPartyAccessory:(id)accessory;
- (id)_currentDeviceNetworkSSID;
- (id)_accessoryNetworkSSID;
- (id)_accessoryMACAddress;
- (BOOL)_hiddenForType:(unsigned long long)type;
@end

#endif /* HFAccessoryNetworkInfoItem_h */
