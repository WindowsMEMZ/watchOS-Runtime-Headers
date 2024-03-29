//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef MKFNotificationRegistrationCharacteristic_Protocol_h
#define MKFNotificationRegistrationCharacteristic_Protocol_h
@import Foundation;

@protocol MKFNotificationRegistrationCharacteristic <MKFNotificationRegistration, MKFNotificationRegistrationCharacteristicPublicExtensions>

@property (retain, nonatomic) NSObject<MKFCharacteristic> *characteristic;
@property (readonly, copy, nonatomic) MKFNotificationRegistrationCharacteristicDatabaseID *databaseID;
@property (readonly) NSObject<MKFHome> *home;

@end

#endif /* MKFNotificationRegistrationCharacteristic_Protocol_h */
