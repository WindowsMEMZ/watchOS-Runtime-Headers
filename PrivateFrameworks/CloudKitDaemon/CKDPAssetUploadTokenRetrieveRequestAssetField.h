//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDPAssetUploadTokenRetrieveRequestAssetField_h
#define CKDPAssetUploadTokenRetrieveRequestAssetField_h
@import Foundation;

#include "PBCodable.h"
#include "CKDPRecordFieldIdentifier.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveRequestAssetField : PBCodable<NSCopying>

@property (readonly, nonatomic) BOOL hasField;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *field;
@property (retain, nonatomic) NSMutableArray *assets;

/* class methods */
+ (Class)assetsType;

/* instance methods */
- (void)clearAssets;
- (void)addAssets:(id)assets;
- (unsigned long long)assetsCount;
- (id)assetsAtIndex:(unsigned long long)index;
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

#endif /* CKDPAssetUploadTokenRetrieveRequestAssetField_h */
