//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.0.0.0.0
//
#ifndef C2MPCloudKitOperationInfo_h
#define C2MPCloudKitOperationInfo_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface C2MPCloudKitOperationInfo : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 operationGroupIndex; unsigned int x :1 operationTriggered; } _has;
}

@property (readonly, nonatomic) BOOL hasOperationId;
@property (retain, nonatomic) NSString *operationId;
@property (readonly, nonatomic) BOOL hasOperationType;
@property (retain, nonatomic) NSString *operationType;
@property (nonatomic) BOOL hasOperationTriggered;
@property (nonatomic) BOOL operationTriggered;
@property (nonatomic) BOOL hasOperationGroupIndex;
@property (nonatomic) unsigned int operationGroupIndex;

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

#endif /* C2MPCloudKitOperationInfo_h */
