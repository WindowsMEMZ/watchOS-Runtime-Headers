//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector_h
#define COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector : PBCodable<NSCopying>

@property (readonly, nonatomic) BOOL hasPersonalizationVector;
@property (retain, nonatomic) NSData *personalizationVector;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;
@property (readonly, nonatomic) BOOL hasBundleSubscribedVector;
@property (retain, nonatomic) NSData *bundleSubscribedVector;
@property (readonly, nonatomic) BOOL hasBundleSubscribedVectorVersion;
@property (retain, nonatomic) NSString *bundleSubscribedVectorVersion;
@property (readonly, nonatomic) BOOL hasSportsUuidVector;
@property (retain, nonatomic) NSData *sportsUuidVector;
@property (readonly, nonatomic) BOOL hasSportsFavoritesVector;
@property (retain, nonatomic) NSData *sportsFavoritesVector;

/* instance methods */
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

#endif /* COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector_h */
