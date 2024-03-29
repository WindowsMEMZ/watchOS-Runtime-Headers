//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 730.8.0.0.0
//
#ifndef HMAccessoryDelegate_Protocol_h
#define HMAccessoryDelegate_Protocol_h
@import Foundation;

@protocol HMAccessoryDelegate <NSObject>
@optional
/* instance methods */
- (void)accessoryDidUpdateName:(id)name;
- (void)accessory:(id)accessory didUpdateNameForService:(id)service;
- (void)accessory:(id)accessory didUpdateAssociatedServiceTypeForService:(id)service;
- (void)accessoryDidUpdateServices:(id)services;
- (void)accessory:(id)accessory didAddProfile:(id)profile;
- (void)accessory:(id)accessory didRemoveProfile:(id)profile;
- (void)accessoryDidUpdateReachability:(id)reachability;
- (void)accessory:(id)accessory service:(id)service didUpdateValueForCharacteristic:(id)characteristic;
- (void)accessory:(id)accessory didUpdateFirmwareVersion:(id)version;
@end

#endif /* HMAccessoryDelegate_Protocol_h */
