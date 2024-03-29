//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAP2TLVParamServiceSignature_h
#define HAP2TLVParamServiceSignature_h
@import Foundation;

#include "HAP2TLVParamCharacteristicList.h"
#include "HAP2TLVServicePropertiesWrapper.h"
#include "HAPTLVProtocol-Protocol.h"
#include "HAPTLVUnsignedNumberValue.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface HAP2TLVParamServiceSignature : NSObject<NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVUnsignedNumberValue *instanceID;
@property (retain, nonatomic) NSData *serviceType;
@property (retain, nonatomic) HAP2TLVServicePropertiesWrapper *properties;
@property (retain, nonatomic) NSData *linkedServices;
@property (retain, nonatomic) HAP2TLVParamCharacteristicList *characteristicList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)parsedFromData:(id)data error:(id *)error;

/* instance methods */
- (id)init;
- (id)initWithInstanceID:(id)id serviceType:(id)type properties:(id)properties linkedServices:(id)services characteristicList:(id)list;
- (BOOL)parseFromData:(id)data error:(id *)error;
- (id)serializeWithError:(id *)error;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HAP2TLVParamServiceSignature_h */
