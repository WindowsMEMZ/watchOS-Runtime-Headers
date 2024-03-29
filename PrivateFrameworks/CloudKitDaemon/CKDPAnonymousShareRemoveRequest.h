//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDPAnonymousShareRemoveRequest_h
#define CKDPAnonymousShareRemoveRequest_h
@import Foundation;

#include "PBRequest.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface CKDPAnonymousShareRemoveRequest : PBRequest<NSCopying>

@property (readonly, nonatomic) BOOL hasAnonymousShareTupleHash;
@property (retain, nonatomic) NSString *anonymousShareTupleHash;
@property (readonly, nonatomic) BOOL hasEncryptedShareTuple;
@property (retain, nonatomic) NSData *encryptedShareTuple;

/* class methods */
+ (id)options;

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* CKDPAnonymousShareRemoveRequest_h */
