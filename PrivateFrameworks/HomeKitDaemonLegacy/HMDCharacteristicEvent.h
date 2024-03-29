//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCharacteristicEvent_h
#define HMDCharacteristicEvent_h
@import Foundation;

#include "HMDCharacteristicEventBase.h"
#include "NSSecureCoding-Protocol.h"

@interface HMDCharacteristicEvent : HMDCharacteristicEventBase<NSSecureCoding>

@property (retain, nonatomic) id eventValue;

/* class methods */
+ (id)logCategory;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithModel:(id)model home:(id)home;
- (id)description;
- (id)emptyModelObject;
- (void)_handleUpdateRequest:(id)request;
- (BOOL)_evaluateNewValue:(id)value;
- (BOOL)_compareEventValue:(id)value;
- (id)dumpState;
- (id)createPayload;
- (BOOL)isCompatibleWithEvent:(id)event;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)modelObjectWithChangeType:(unsigned long long)type;
- (void)_transactionObjectUpdated:(id)updated newValues:(id)values message:(id)message;
- (void)_transactionObjectRemoved:(id)removed message:(id)message;
- (id)analyticsTriggerEventData;
@end

#endif /* HMDCharacteristicEvent_h */
