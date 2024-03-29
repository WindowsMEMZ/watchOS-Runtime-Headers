//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPNFCAccessControl_h
#define HAPNFCAccessControl_h
@import Foundation;

#include "HAPNFCAccessDeviceCredentialKeyRequest.h"
#include "HAPNFCAccessDeviceCredentialKeyResponse.h"
#include "HAPNFCAccessIssuerKeyRequest.h"
#include "HAPNFCAccessIssuerKeyResponse.h"
#include "HAPNFCAccessOperationTypeWrapper.h"
#include "HAPNFCAccessReaderKeyRequest.h"
#include "HAPNFCAccessReaderKeyResponse.h"
#include "HAPTLVProtocol-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface HAPNFCAccessControl : NSObject<NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPNFCAccessOperationTypeWrapper *operationType;
@property (retain, nonatomic) HAPNFCAccessIssuerKeyRequest *issuerKeyRequest;
@property (retain, nonatomic) HAPNFCAccessIssuerKeyResponse *issuerKeyResponse;
@property (retain, nonatomic) HAPNFCAccessDeviceCredentialKeyRequest *deviceCredentialKeyRequest;
@property (retain, nonatomic) HAPNFCAccessDeviceCredentialKeyResponse *deviceCredentialKeyResponse;
@property (retain, nonatomic) HAPNFCAccessReaderKeyRequest *readerKeyRequest;
@property (retain, nonatomic) HAPNFCAccessReaderKeyResponse *readerKeyResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)parsedFromData:(id)data error:(id *)error;

/* instance methods */
- (id)init;
- (id)initWithOperationType:(id)type issuerKeyRequest:(id)request issuerKeyResponse:(id)response deviceCredentialKeyRequest:(id)request deviceCredentialKeyResponse:(id)response readerKeyRequest:(id)request readerKeyResponse:(id)response;
- (BOOL)parseFromData:(id)data error:(id *)error;
- (id)serializeWithError:(id *)error;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HAPNFCAccessControl_h */
