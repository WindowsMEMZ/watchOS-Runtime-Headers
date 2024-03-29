//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 406.1.12.0.0
//
#ifndef AXHADeviceControllerProtocol_Protocol_h
#define AXHADeviceControllerProtocol_Protocol_h
@import Foundation;

@protocol AXHADeviceControllerProtocol <NSObject>
/* instance methods */
- (void)device:(id)device didUpdateProperty:(unsigned long long)property;
- (void)registerForPropertyUpdates:(id /* block */)updates;
- (void)stopPropertyUpdates;
- (void)updateProperty:(unsigned long long)property forDeviceID:(id)id;
- (void)writeValue:(id)value forProperty:(unsigned long long)property andDeviceID:(id)id;
@end

#endif /* AXHADeviceControllerProtocol_Protocol_h */
