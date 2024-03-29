//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 346.2.9.0.0
//
#ifndef SCROIOHIDElement_h
#define SCROIOHIDElement_h
@import Foundation;

#include "SCROIOElement.h"
#include "SCROIOBluetoothElementProtocol-Protocol.h"
#include "SCROIOHIDElementProtocol-Protocol.h"

@class NSString;

@interface SCROIOHIDElement : SCROIOElement<SCROIOBluetoothElementProtocol, SCROIOHIDElementProtocol> {
  /* instance variables */
  struct __IOHIDDevice * _hidDevice;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned int productId;
@property (readonly, nonatomic) unsigned int vendorId;
@property (readonly, nonatomic) NSString *manufacturerName;
@property (readonly, nonatomic) NSString *productName;

/* instance methods */
- (id)initWithIOObject:(unsigned int)ioobject;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void *)hidDevice;
- (int)transport;
- (BOOL)isBluetoothLowEnergy;
- (id)bluetoothAddress;
@end

#endif /* SCROIOHIDElement_h */
