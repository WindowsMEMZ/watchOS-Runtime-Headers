//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 976.40.4.0.0
//
#ifndef PCSManateeShareableIdentity_h
#define PCSManateeShareableIdentity_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "PCSManateePrivateKey.h"

@interface PCSManateeShareableIdentity : PBCodable<NSCopying>

@property (readonly, nonatomic) BOOL hasEncryptionPrivateKey;
@property (retain, nonatomic) PCSManateePrivateKey *encryptionPrivateKey;
@property (readonly, nonatomic) BOOL hasSigningPrivateKey;
@property (retain, nonatomic) PCSManateePrivateKey *signingPrivateKey;

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

#endif /* PCSManateeShareableIdentity_h */
