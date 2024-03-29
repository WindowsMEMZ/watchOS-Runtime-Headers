//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPNFCAccessDeviceCredentialKeyRequest_h
#define HAPNFCAccessDeviceCredentialKeyRequest_h
@import Foundation;

#include "HAPNFCAccessKeyStateWrapper.h"
#include "HAPNFCAccessKeyTypeWrapper.h"
#include "HAPTLVProtocol-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface HAPNFCAccessDeviceCredentialKeyRequest : NSObject<NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPNFCAccessKeyTypeWrapper *type;
@property (retain, nonatomic) NSData *key;
@property (retain, nonatomic) NSData *issuerKeyIdentifier;
@property (retain, nonatomic) HAPNFCAccessKeyStateWrapper *state;
@property (retain, nonatomic) NSData *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)parsedFromData:(id)data error:(id *)error;

/* instance methods */
- (id)init;
- (id)initWithType:(id)type key:(id)key issuerKeyIdentifier:(id)identifier state:(id)state identifier:(id)identifier;
- (BOOL)parseFromData:(id)data error:(id *)error;
- (id)serializeWithError:(id *)error;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HAPNFCAccessDeviceCredentialKeyRequest_h */
