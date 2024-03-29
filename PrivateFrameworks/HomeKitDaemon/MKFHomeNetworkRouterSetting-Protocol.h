//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef MKFHomeNetworkRouterSetting_Protocol_h
#define MKFHomeNetworkRouterSetting_Protocol_h
@import Foundation;

@protocol MKFHomeNetworkRouterSetting <MKFHomeSetting, MKFHomeNetworkRouterSettingPublicExtensions>

@property (copy, nonatomic) NSString *activeNetworkRouterInitialSetupNeededUUID;
@property (copy, nonatomic) NSString *minHomeKitVersionForAccessoryNetworkProtectionChange;
@property (copy, nonatomic) NSString *minimumNetworkRouterSupportHomeKitVersion;
@property (retain, nonatomic) NSObject<MKFHAPAccessory> *networkAccessory;
@property (readonly, copy, nonatomic) MKFHomeNetworkRouterSettingDatabaseID *databaseID;

@end

#endif /* MKFHomeNetworkRouterSetting_Protocol_h */
