//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKProtoPasscodeUpgradeFlowShouldExitRequest_h
#define NPKProtoPasscodeUpgradeFlowShouldExitRequest_h
@import Foundation;

#include "PBRequest.h"
#include "NSCopying-Protocol.h"

@class NSData;

@interface NPKProtoPasscodeUpgradeFlowShouldExitRequest : PBRequest<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 passcodeChanged; unsigned int x :1 pending; } _has;
}

@property (nonatomic) BOOL hasPasscodeChanged;
@property (nonatomic) BOOL passcodeChanged;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;
@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending;

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

#endif /* NPKProtoPasscodeUpgradeFlowShouldExitRequest_h */
