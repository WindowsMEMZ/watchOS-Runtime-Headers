//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions_h
#define CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 contentRequestAuthorizeGetOptions; } _has;
}

@property (retain, nonatomic) NSMutableArray *contentRequestHeaders;
@property (nonatomic) BOOL hasContentRequestAuthorizeGetOptions;
@property (nonatomic) unsigned long long contentRequestAuthorizeGetOptions;

/* class methods */
+ (Class)contentRequestHeadersType;

/* instance methods */
- (void)clearContentRequestHeaders;
- (void)addContentRequestHeaders:(id)headers;
- (unsigned long long)contentRequestHeadersCount;
- (id)contentRequestHeadersAtIndex:(unsigned long long)index;
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

#endif /* CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions_h */
