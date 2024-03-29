//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 524.1.0.0.0
//
#ifndef RPPerson_h
#define RPPerson_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class CURangingMeasurement, NSArray, NSMutableDictionary, NSString;

@interface RPPerson : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSMutableDictionary *deviceDict;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) int activityLevel;
@property (readonly, copy, nonatomic) NSString *contactID;
@property (readonly, copy, nonatomic) NSArray *devices;
@property (readonly, nonatomic) unsigned int flags;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) int proximity;
@property (readonly) CURangingMeasurement *relativeLocation;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)descriptionWithLevel:(int)level;
- (unsigned int)removeRPDevice:(id)rpdevice;
- (unsigned int)updateWithRPDevice:(id)rpdevice;
- (unsigned int)_updateDeviceDerivedInfo;
@end

#endif /* RPPerson_h */
