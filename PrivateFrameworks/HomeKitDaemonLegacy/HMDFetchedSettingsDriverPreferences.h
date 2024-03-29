//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDFetchedSettingsDriverPreferences_h
#define HMDFetchedSettingsDriverPreferences_h
@import Foundation;

#include "HMDFetchedSettingsDriver-Protocol.h"
#include "HMDFetchedSettingsDriverDelegate-Protocol.h"
#include "HMFLogging-Protocol.h"

@class NSString, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface HMDFetchedSettingsDriverPreferences : NSObject<HMFLogging, HMDFetchedSettingsDriver> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSUserDefaults *_userDefaults;
  NSString *_prefix;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDFetchedSettingsDriverDelegate> *delegate;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithQueue:(id)queue userDefaults:(id)defaults prefix:(id)prefix defaultValues:(id)values;
- (void)startWithKeyPaths:(id)paths completion:(id /* block */)completion;
- (void)fetchSettingsForKeyPaths:(id)paths completion:(id /* block */)completion;
- (void)updateSettingWithKeyPath:(id)path boolSettingValue:(id)value completion:(id /* block */)completion;
- (void)updateSettingWithKeyPath:(id)path integerSettingValue:(id)value completion:(id /* block */)completion;
- (void)updateSettingWithKeyPath:(id)path languageSettingValue:(id)value completion:(id /* block */)completion;
- (void)languageValueListWithCompletion:(id /* block */)completion;
- (void)updateSettingWithKeyPath:(id)path primaryUserInfo:(id)info completion:(id /* block */)completion;
@end

#endif /* HMDFetchedSettingsDriverPreferences_h */
