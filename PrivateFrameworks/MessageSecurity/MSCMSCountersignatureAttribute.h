//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.40.6.0.0
//
#ifndef MSCMSCountersignatureAttribute_h
#define MSCMSCountersignatureAttribute_h
@import Foundation;

#include "MSCMSAttributeCoder-Protocol.h"
#include "MSCMSSignerInfo.h"
#include "MSOID.h"

@class NSArray;

@interface MSCMSCountersignatureAttribute : NSObject<MSCMSAttributeCoder>

@property unsigned long long chainMode;
@property (retain) NSArray *additionalCertificates;
@property (weak, nonatomic) MSCMSSignerInfo *containingSignerInfo;
@property (readonly) NSArray *signers;
@property (readonly, retain) MSOID *attributeType;

/* instance methods */
- (id)initWithAttribute:(id)attribute error:(id *)error;
- (id)initWithAttribute:(id)attribute LAContext:(id)lacontext error:(id *)error;
- (id)initWithAttribute:(id)attribute certificates:(id)certificates LAContext:(id)lacontext error:(id *)error;
- (id)initWithAttribute:(id)attribute certificates:(id)certificates LAContext:(id)lacontext containingSignerInfo:(id)info error:(id *)error;
- (id)initWithSignerInfo:(id)info;
- (id)initWithSignerInfo:(id)info additionalCertificates:(id)certificates;
- (id)initWithSignerInfo:(id)info signerChainMode:(unsigned long long)mode;
- (id)initWithSignerInfo:(id)info signerChainMode:(unsigned long long)mode additionalCertificates:(id)certificates;
- (void)addSigner:(id)signer;
- (void)addSigner:(id)signer withCertificates:(id)certificates;
- (void)addSigner:(id)signer withChainMode:(unsigned long long)mode error:(id *)error;
- (void)removeSignerCertificatesWithIndexes:(id)indexes;
- (void)removeSignersWithIndexes:(id)indexes error:(id *)error;
- (void)removeSignersWithCertificate:(struct __SecCertificate *)certificate error:(id *)error;
- (void)removeSignersWithEmailAddress:(id)address error:(id *)error;
- (void)removeSignersWithIdentity:(struct __SecIdentity *)identity error:(id *)error;
- (BOOL)verifyCountersignatures:(id)countersignatures error:(id *)error;
- (BOOL)verifyCountersignaturesAndCountersignersWithPolicies:(id)policies verifyTime:(id)time anchorCertificates:(id)certificates signature:(id)signature error:(id *)error;
- (id)encodeAttributeWithError:(id *)error;
@end

#endif /* MSCMSCountersignatureAttribute_h */
