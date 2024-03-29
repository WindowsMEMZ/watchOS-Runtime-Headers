//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDFetchedSettingsDriver_Protocol_h
#define HMDFetchedSettingsDriver_Protocol_h
@import Foundation;

@protocol HMDFetchedSettingsDriver <NSObject>

@property (weak) NSObject<HMDFetchedSettingsDriverDelegate> *delegate;

/* instance methods */
- (void)startWithKeyPaths:(id)paths completion:(id /* block */)completion;
- (void)fetchSettingsForKeyPaths:(id)paths completion:(id /* block */)completion;
- (void)updateSettingWithKeyPath:(id)path boolSettingValue:(id)value completion:(id /* block */)completion;
- (void)updateSettingWithKeyPath:(id)path integerSettingValue:(id)value completion:(id /* block */)completion;
- (void)updateSettingWithKeyPath:(id)path languageSettingValue:(id)value completion:(id /* block */)completion;
- (void)languageValueListWithCompletion:(id /* block */)completion;
- (void)updateSettingWithKeyPath:(id)path primaryUserInfo:(id)info completion:(id /* block */)completion;
@end

#endif /* HMDFetchedSettingsDriver_Protocol_h */
