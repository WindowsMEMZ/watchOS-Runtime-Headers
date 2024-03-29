//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTPBAction_h
#define BLTPBAction_h
@import Foundation;

#include "PBCodable.h"
#include "BLTPBAppearance.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface BLTPBAction : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 behavior; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) BLTPBAppearance *appearance;
@property (nonatomic) int activationMode;
@property (readonly, nonatomic) BOOL hasLaunchURL;
@property (retain, nonatomic) NSString *launchURL;
@property (nonatomic) BOOL hasBehavior;
@property (nonatomic) int behavior;
@property (readonly, nonatomic) BOOL hasBehaviorParameters;
@property (retain, nonatomic) NSData *behaviorParameters;
@property (readonly, nonatomic) BOOL hasBehaviorParametersNulls;
@property (retain, nonatomic) NSData *behaviorParametersNulls;

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

#endif /* BLTPBAction_h */
