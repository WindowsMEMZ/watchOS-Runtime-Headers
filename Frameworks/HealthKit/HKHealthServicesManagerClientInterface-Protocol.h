//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHealthServicesManagerClientInterface_Protocol_h
#define HKHealthServicesManagerClientInterface_Protocol_h
@import Foundation;

@protocol HKHealthServicesManagerClientInterface <NSObject>
/* instance methods */
- (void)clientRemote_deliverBluetoothStatus:(long long)status withError:(id)error;
- (void)clientRemote_deliverDiscoveryHealthService:(id)service toClient:(unsigned long long)client finished:(BOOL)finished withError:(id)error;
- (void)clientRemote_deliverSessionHealthServiceStatus:(long long)status toClient:(unsigned long long)client finished:(BOOL)finished withError:(id)error;
- (void)clientRemote_deliverSessionCharacteristics:(id)characteristics forService:(id)service toClient:(unsigned long long)client withError:(id)error;
@end

#endif /* HKHealthServicesManagerClientInterface_Protocol_h */
