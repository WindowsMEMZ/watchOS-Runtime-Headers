//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef AFBluetoothDevice_Protocol_h
#define AFBluetoothDevice_Protocol_h
@import Foundation;

@protocol AFBluetoothDevice 
/* instance methods */
- (void)prewarm;
- (id)identifier;
- (id)deviceInfo;
- (void)getDeviceInfo:(id /* block */)info;
- (void)getHeadphoneInEarDetectionState:(id /* block */)state;
- (void)getHeadphoneListeningMode:(id /* block */)mode;
- (void)setHeadphoneListeningMode:(long long)mode completion:(id /* block */)completion;
- (void)connect:(id /* block */)connect;
- (void)disconnect:(id /* block */)disconnect;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
@end

#endif /* AFBluetoothDevice_Protocol_h */
