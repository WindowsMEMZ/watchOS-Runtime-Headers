//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFAggregatedCharacteristicReadPolicy_h
#define HFAggregatedCharacteristicReadPolicy_h
@import Foundation;

#include "HFCharacteristicReadPolicy-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSArray, NSString;

@interface HFAggregatedCharacteristicReadPolicy : NSObject<HFCharacteristicReadPolicy, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) NSArray *policies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithPolicies:(id)policies;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (unsigned long long)evaluateWithCharacteristic:(id)characteristic traits:(out id *)traits;
@end

#endif /* HFAggregatedCharacteristicReadPolicy_h */
