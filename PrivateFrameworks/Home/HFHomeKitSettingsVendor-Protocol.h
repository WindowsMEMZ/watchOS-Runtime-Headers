//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFHomeKitSettingsVendor_Protocol_h
#define HFHomeKitSettingsVendor_Protocol_h
@import Foundation;

@protocol HFHomeKitSettingsVendor <HFHomeKitObject, HFGroupableItemProtocol>

@property (readonly, nonatomic) HMHome *hf_home;
@property (readonly, nonatomic) NSSet *hf_dependentHomeKitObjectsForDownstreamItems;
@property (readonly, nonatomic) HFHomeKitSettingsAdapterManager *hf_settingsAdapterManager;
@property (readonly, nonatomic) HFHomeKitSettingsValueManager *hf_settingsValueManager;
@property (readonly, nonatomic) BOOL hasValidSettings;
@property (readonly) HMSettings *settings;
@property (readonly, nonatomic) NSSet *homekitObjectIdentifiers;

@end

#endif /* HFHomeKitSettingsVendor_Protocol_h */
