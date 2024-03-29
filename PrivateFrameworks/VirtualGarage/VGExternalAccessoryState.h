//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef VGExternalAccessoryState_h
#define VGExternalAccessoryState_h
@import Foundation;

@class NSDictionary, NSMeasurement, NSNumber, NSString;

@interface VGExternalAccessoryState : NSObject {
  /* instance variables */
  NSString *_displayName;
  NSString *_mapsDisplayName;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *manufacturer;
@property (retain, nonatomic) NSString *model;
@property (retain, nonatomic) NSString *year;
@property (retain, nonatomic) NSString *colorHex;
@property (retain, nonatomic) NSMeasurement *currentEVRange;
@property (retain, nonatomic) NSMeasurement *maxEVRange;
@property (retain, nonatomic) NSString *consumptionArguments;
@property (retain, nonatomic) NSString *chargingArguments;
@property (retain, nonatomic) NSNumber *batteryCharge;
@property (retain, nonatomic) NSMeasurement *minBatteryCapacity;
@property (retain, nonatomic) NSMeasurement *currentBatteryCapacity;
@property (retain, nonatomic) NSMeasurement *maxBatteryCapacity;
@property (nonatomic) NSNumber *supportedConnectors;
@property (readonly, nonatomic) BOOL isCharging;
@property (readonly, nonatomic) NSNumber *activeConnector;
@property (readonly, nonatomic) NSDictionary *powerByConnector;

/* instance methods */
- (void)_updateWithVehicleInfo:(id)info;
- (id)description;
@end

#endif /* VGExternalAccessoryState_h */
