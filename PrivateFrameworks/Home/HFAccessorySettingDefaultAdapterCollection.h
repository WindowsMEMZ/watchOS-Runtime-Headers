//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFAccessorySettingDefaultAdapterCollection_h
#define HFAccessorySettingDefaultAdapterCollection_h
@import Foundation;

#include "HFAccessorySettingAdapter.h"
#include "HFAccessorySettingManagedConfigurationAdapter.h"
#include "HFAccessorySettingSiriLanguageAdapter.h"

@class NSSet;

@interface HFAccessorySettingDefaultAdapterCollection : NSObject

@property (retain, nonatomic) HFAccessorySettingManagedConfigurationAdapter *managedConfigurationAdapter;
@property (retain, nonatomic) HFAccessorySettingAdapter *mobileTimerAdapter;
@property (retain, nonatomic) HFAccessorySettingSiriLanguageAdapter *siriLanguageAdapter;
@property (readonly, nonatomic) NSSet *allAdapters;

/* instance methods */
@end

#endif /* HFAccessorySettingDefaultAdapterCollection_h */
