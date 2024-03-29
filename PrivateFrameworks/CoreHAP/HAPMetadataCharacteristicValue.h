//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPMetadataCharacteristicValue_h
#define HAPMetadataCharacteristicValue_h
@import Foundation;

#include "HMFObject.h"

@class NSArray, NSNumber;

@interface HAPMetadataCharacteristicValue : HMFObject

@property (retain, nonatomic) NSNumber *minValue;
@property (retain, nonatomic) NSNumber *maxValue;
@property (retain, nonatomic) NSNumber *stepValue;
@property (retain, nonatomic) NSNumber *minLength;
@property (retain, nonatomic) NSNumber *maxLength;
@property (readonly, nonatomic) NSArray *validValues;

/* class methods */
+ (id)initWithDictionary:(id)dictionary;

/* instance methods */
- (id)initWithMinLength:(id)length maxLength:(id)length;
- (id)initWithMinValue:(id)value maxValue:(id)value stepValue:(id)value validValues:(id)values;
- (id)generateDictionary;
- (id)description;
- (void)dump;
@end

#endif /* HAPMetadataCharacteristicValue_h */
