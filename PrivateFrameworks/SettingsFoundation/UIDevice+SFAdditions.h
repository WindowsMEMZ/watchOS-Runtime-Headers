//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1061.4.0.0.0
//
#ifndef UIDevice_SFAdditions_h
#define UIDevice_SFAdditions_h
@import Foundation;

@interface UIDevice (SFAdditions)
/* instance methods */
- (BOOL)sf_isiPad;
- (BOOL)sf_isiPhone;
- (BOOL)sf_isAppleTV;
- (BOOL)sf_isAudioAccessory;
- (BOOL)sf_isiPod;
- (BOOL)sf_hasHardwareHomeButton;
- (BOOL)sf_isInternalInstall;
- (BOOL)sf_isCarrierInstall;
- (BOOL)sf_isChinaRegionCellularDevice;
- (id)sf_serialNumber;
- (unsigned long long)sf_yearOfManufacture;
- (unsigned long long)sf_weekOfManufacture;
- (id)sf_monthAndYearOfManufacture;
- (id)sf_configString;
- (id)sf_colorCodedSerialNumber;
- (id)sf_deviceSubTypeString;
- (id)sf_screenClassString;
- (id)sf_regionCode;
- (id)sf_plantCode;
- (id)sf_udidString;
- (BOOL)sf_deviceSupportsDisplayZoom;
- (id)sf_productType;
- (id)sf_deviceType;
- (id)sf_regulatoryDeviceVariant;
- (BOOL)sf_isDeveloperModeEnabled;
- (BOOL)sf_inRetailKioskMode;
@end

#endif /* UIDevice_SFAdditions_h */
