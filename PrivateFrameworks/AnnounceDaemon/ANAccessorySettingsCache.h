//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 217.20.3.0.0
//
#ifndef ANAccessorySettingsCache_h
#define ANAccessorySettingsCache_h
@import Foundation;

#include "HMAccessorySettingsDataSourceDelegate-Protocol.h"

@class HMAccessorySettingsDataSource, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_os_log;

@interface ANAccessorySettingsCache : NSObject<HMAccessorySettingsDataSourceDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *settingsQueue;
@property (readonly, nonatomic) HMAccessorySettingsDataSource *accessorySettingsDataSource;
@property (readonly, nonatomic) NSMutableDictionary *cachedAccessorySettings;
@property (readonly, nonatomic) NSMutableDictionary *lastAccessorySettingsFetch;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccessorySettingsDataSource:(id)source;
- (id)settingsForAccessory:(id)accessory;
- (void)accessorySettingsDataSource:(id)source didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)identifier settings:(id)settings;
- (id)_fetchSettingsForAccessory:(id)accessory useCache:(BOOL)cache;
- (void)_updateSettings:(id)settings forAccessoryWithIdentifier:(id)identifier;
- (void)_removeSettingsForAccessoryWithIdentifier:(id)identifier;
@end

#endif /* ANAccessorySettingsCache_h */
