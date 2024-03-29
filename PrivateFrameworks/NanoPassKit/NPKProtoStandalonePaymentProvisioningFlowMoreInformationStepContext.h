//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKProtoStandalonePaymentProvisioningFlowMoreInformationStepContext_h
#define NPKProtoStandalonePaymentProvisioningFlowMoreInformationStepContext_h
@import Foundation;

#include "PBCodable.h"
#include "NPKProtoStandalonePaymentPass.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowMoreInformationStepContext : PBCodable<NSCopying>

@property (retain, nonatomic) NSMutableArray *moreInfoItems;
@property (readonly, nonatomic) BOOL hasPaymentPass;
@property (retain, nonatomic) NPKProtoStandalonePaymentPass *paymentPass;

/* class methods */
+ (Class)moreInfoItemsType;

/* instance methods */
- (void)clearMoreInfoItems;
- (void)addMoreInfoItems:(id)items;
- (unsigned long long)moreInfoItemsCount;
- (id)moreInfoItemsAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NPKProtoStandalonePaymentProvisioningFlowMoreInformationStepContext_h */
