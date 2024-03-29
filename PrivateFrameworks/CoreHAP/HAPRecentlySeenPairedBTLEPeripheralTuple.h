//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPRecentlySeenPairedBTLEPeripheralTuple_h
#define HAPRecentlySeenPairedBTLEPeripheralTuple_h
@import Foundation;

#include "HMFObject.h"

@class NSNumber, NSString;

@interface HAPRecentlySeenPairedBTLEPeripheralTuple : HMFObject {
  /* instance variables */
  double _lastSeen;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL notifyingCharacteristicUpdated;
@property (nonatomic) BOOL monitorState;
@property (nonatomic) unsigned long long connectionPriority;
@property (nonatomic) unsigned long long advertisementFormat;
@property (retain, nonatomic) NSNumber *stateNumber;
@property (retain, nonatomic) NSNumber *configNumber;
@property (retain, nonatomic) NSNumber *category;

/* instance methods */
- (id)initRecentlySeenPairedHAPBLEPeripheral:(id)hapbleperipheral;
- (void)updateWithPeripheral:(id)peripheral;
- (void)updatePairedPeripheralConfiguration:(BOOL)configuration connectionPriority:(unsigned long long)priority;
- (id)description;
@end

#endif /* HAPRecentlySeenPairedBTLEPeripheralTuple_h */
