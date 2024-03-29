//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMedicationExposableDoseEvent_h
#define HKMedicationExposableDoseEvent_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class HKMedicationIdentifier, NSDate, NSNumber, NSString, NSUUID;

@interface HKMedicationExposableDoseEvent : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *semanticIdentifier;
@property (readonly, nonatomic) long long logOrigin;
@property (readonly, copy, nonatomic) NSString *scheduleItemIdentifier;
@property (readonly, copy, nonatomic) HKMedicationIdentifier *medicationIdentifier;
@property (readonly, copy, nonatomic) NSNumber *scheduledDoseQuantity;
@property (readonly, copy, nonatomic) NSNumber *doseQuantity;
@property (readonly, copy, nonatomic) NSDate *scheduledDate;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSUUID *persistedUUID;

/* class methods */
+ (id)asNeededExposableDoseEventForMedication:(id)medication doseQuantity:(id)quantity;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDoseEvent:(id)event;
- (id)_initWithLogOrigin:(long long)origin scheduleItemIdentifier:(id)identifier semanticIdentifier:(id)identifier medicationIdentifier:(id)identifier scheduledDoseQuantity:(id)quantity doseQuantity:(id)quantity scheduledDate:(id)date startDate:(id)date status:(long long)status persistedUUID:(id)uuid;
- (id)updateForNewStatus:(long long)status;
- (id)updateForNewDoseQuantity:(id)quantity;
- (id)updateForNewStartDate:(id)date;
- (id)updateForSemanticIdentifier:(id)identifier;
- (BOOL)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HKMedicationExposableDoseEvent_h */
