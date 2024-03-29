//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 301.2.1.0.0
//
#ifndef BLEMIDIAccessor_h
#define BLEMIDIAccessor_h
@import Foundation;

@interface BLEMIDIAccessor : NSObject
/* class methods */
+ (unsigned int)midiDeviceForUUID:(id)uuid;
+ (unsigned int)midiDeviceForUUID:(id)uuid isLocalPeripheral:(BOOL)peripheral isRemotePeripheral:(BOOL)peripheral;
+ (unsigned int)nullDevice;
+ (unsigned int)localPeripheral;
+ (id)localPeripheralName;
+ (id)uuidForMIDIDevice:(unsigned int)mididevice;
+ (id)nameForMIDIDevice:(unsigned int)mididevice;
+ (BOOL)deviceIsRemotePeripheral:(unsigned int)peripheral;
+ (BOOL)deviceIsLocalPeripheral:(unsigned int)peripheral;
+ (BOOL)deviceIsNullDevice:(unsigned int)device;
+ (BOOL)deviceIsOnline:(unsigned int)online;
+ (BOOL)uuidIsForgettable:(id)forgettable;
+ (unsigned short)timeStampOffset:(unsigned long long)offset;
+ (unsigned short)reconstructWithHighByte:(unsigned char)byte lowByte:(unsigned char)byte overflow:(BOOL)overflow;
+ (unsigned long long)timeStampWithEpoch:(unsigned long long)epoch offset:(unsigned short)offset;
+ (void)splitOffset:(unsigned short)offset intoHeaderByte:(char *)byte timeStampByte:(char *)byte;
+ (void)logEvent:(char *)event length:(unsigned short)length timeStamp:(unsigned long long)stamp intoBuffer:(char *)buffer;
@end

#endif /* BLEMIDIAccessor_h */
