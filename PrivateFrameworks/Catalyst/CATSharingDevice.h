//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.0.0.0.0
//
#ifndef CATSharingDevice_h
#define CATSharingDevice_h
@import Foundation;

@class NSDate, NSString, NSUUID;

@interface CATSharingDevice : NSObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *modelIdentifier;
@property (readonly, nonatomic) long long RSSI;
@property (readonly, nonatomic) BOOL paired;
@property (readonly, nonatomic) unsigned long long pairingState;
@property (readonly, nonatomic) NSDate *detectionTime;

/* class methods */
+ (id)unlocalizedDescriptivePairingStateForPairingState:(unsigned long long)state;

/* instance methods */
- (id)initWithIdentifier:(id)identifier modelIdentifier:(id)identifier RSSI:(long long)rssi paired:(BOOL)paired pairingState:(unsigned long long)state detectionTime:(id)time;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)debugDescription;
- (BOOL)isEqualToDevice:(id)device;
- (BOOL)isPaired;
@end

#endif /* CATSharingDevice_h */
