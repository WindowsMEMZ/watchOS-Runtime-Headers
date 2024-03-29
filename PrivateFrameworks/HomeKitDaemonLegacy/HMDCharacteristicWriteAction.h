//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCharacteristicWriteAction_h
#define HMDCharacteristicWriteAction_h
@import Foundation;

#include "HMDAction.h"
#include "HMDBackingStoreObjectProtocol-Protocol.h"
#include "HMDCharacteristic.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface HMDCharacteristicWriteAction : HMDAction<NSSecureCoding, HMDBackingStoreObjectProtocol>

@property (readonly, weak, nonatomic) HMDCharacteristic *characteristic;
@property (copy, nonatomic) id targetValue;
@property (readonly, nonatomic) NSDictionary *actionInformation;
@property (readonly, nonatomic) NSString *dumpState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)actionWithDictionaryRepresentation:(id)representation home:(id)home;
+ (BOOL)supportsSecureCoding;
+ (id)logCategory;

/* instance methods */
- (id)init;
- (id)initWithUUID:(id)uuid characteristic:(id)characteristic targetValue:(id)value actionSet:(id)set;
- (unsigned long long)type;
- (id)stateDump;
- (id)dictionaryRepresentation;
- (void)executeWithSource:(unsigned long long)source clientName:(id)name completionHandler:(id /* block */)handler;
- (BOOL)isSecureAction;
- (BOOL)isActionForCharacteristic:(id)characteristic;
- (BOOL)isCompatibleWithAction:(id)action;
- (BOOL)requiresDeviceUnlock;
- (BOOL)isUnsecuringAction;
- (unsigned long long)entitlementsForNotification;
- (BOOL)isAssociatedWithAccessory:(id)accessory;
- (id)associatedAccessories;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)transactionObjectUpdated:(id)updated newValues:(id)values message:(id)message;
- (void)transactionObjectRemoved:(id)removed message:(id)message;
- (void)_processWriteActionModelUpdated:(id)updated message:(id)message;
- (id)modelObjectWithChangeType:(unsigned long long)type;
- (id)attributeDescriptions;
@end

#endif /* HMDCharacteristicWriteAction_h */
