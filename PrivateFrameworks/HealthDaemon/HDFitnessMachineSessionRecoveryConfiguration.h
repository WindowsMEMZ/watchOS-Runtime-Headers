//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDFitnessMachineSessionRecoveryConfiguration_h
#define HDFitnessMachineSessionRecoveryConfiguration_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData, NSDate, NSString, NSUUID;

@interface HDFitnessMachineSessionRecoveryConfiguration : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSUUID *sessionUUID;
@property (readonly, nonatomic) NSUUID *machineUUID;
@property (readonly, nonatomic) unsigned long long machineType;
@property (readonly, copy, nonatomic) NSString *machineName;
@property (copy, nonatomic) NSString *machineBrand;
@property (readonly, nonatomic) unsigned long long activityType;
@property (readonly, nonatomic) NSDate *machineStartDate;
@property (readonly, nonatomic) NSDate *machinePreferredUntilDate;
@property (readonly, nonatomic) NSData *nfcSessionIDData;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSessionUUID:(id)uuid machineUUID:(id)uuid machineType:(unsigned long long)type machineName:(id)name machineBrand:(id)brand activityType:(unsigned long long)type machineStartDate:(id)date machinePreferredUntilDate:(id)date nfcSessionIDData:(id)iddata;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* HDFitnessMachineSessionRecoveryConfiguration_h */
