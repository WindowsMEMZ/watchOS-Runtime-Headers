//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NACListeningModesMessage_h
#define NACListeningModesMessage_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface NACListeningModesMessage : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 originIdentifier; } _has;
}

@property (retain, nonatomic) NSMutableArray *availableListeningModes;
@property (readonly, nonatomic) BOOL hasCurrentListeningMode;
@property (retain, nonatomic) NSString *currentListeningMode;
@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) NSString *category;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (nonatomic) int originIdentifier;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) NSData *error;

/* class methods */
+ (Class)availableListeningModeType;

/* instance methods */
- (void)clearAvailableListeningModes;
- (void)addAvailableListeningMode:(id)mode;
- (unsigned long long)availableListeningModesCount;
- (id)availableListeningModeAtIndex:(unsigned long long)index;
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

#endif /* NACListeningModesMessage_h */
