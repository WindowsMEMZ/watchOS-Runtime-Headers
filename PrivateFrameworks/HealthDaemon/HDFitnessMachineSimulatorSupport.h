//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDFitnessMachineSimulatorSupport_h
#define HDFitnessMachineSimulatorSupport_h
@import Foundation;

@class NSData, NSString, NSUUID;

@interface HDFitnessMachineSimulatorSupport : NSObject

@property (readonly, nonatomic) unsigned long long fitnessMachineType;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSData *btIdentifierData;
@property (readonly, nonatomic) NSString *btIdentifier;

/* instance methods */
- (id)initWithFitnessMachineType:(unsigned long long)type;
- (void)updateAdvertisementDataForSimulation:(id)simulation;
@end

#endif /* HDFitnessMachineSimulatorSupport_h */
