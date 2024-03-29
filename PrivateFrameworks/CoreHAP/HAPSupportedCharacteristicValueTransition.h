//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPSupportedCharacteristicValueTransition_h
#define HAPSupportedCharacteristicValueTransition_h
@import Foundation;

#include "HAPCharacteristicValueTransitionTypesWrapper.h"
#include "HAPTLVProtocol-Protocol.h"
#include "HAPTLVSignedNumberValue.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface HAPSupportedCharacteristicValueTransition : NSObject<NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVSignedNumberValue *HAPInstanceID;
@property (retain, nonatomic) HAPCharacteristicValueTransitionTypesWrapper *transitionTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)parsedFromData:(id)data error:(id *)error;

/* instance methods */
- (id)init;
- (id)initWithHAPInstanceID:(id)id transitionTypes:(id)types;
- (BOOL)parseFromData:(id)data error:(id *)error;
- (id)serializeWithError:(id *)error;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HAPSupportedCharacteristicValueTransition_h */
