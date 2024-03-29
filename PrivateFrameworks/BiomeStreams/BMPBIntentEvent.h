//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMPBIntentEvent_h
#define BMPBIntentEvent_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface BMPBIntentEvent : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 absoluteTimestamp; unsigned int x :1 intentHandlingStatus; unsigned int x :1 intentType; unsigned int x :1 interactionDirection; unsigned int x :1 donatedBySiri; } _has;
}

@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL hasSourceId;
@property (retain, nonatomic) NSString *sourceId;
@property (readonly, nonatomic) BOOL hasIntentClass;
@property (retain, nonatomic) NSString *intentClass;
@property (readonly, nonatomic) BOOL hasIntentVerb;
@property (retain, nonatomic) NSString *intentVerb;
@property (nonatomic) BOOL hasIntentType;
@property (nonatomic) int intentType;
@property (nonatomic) BOOL hasIntentHandlingStatus;
@property (nonatomic) int intentHandlingStatus;
@property (readonly, nonatomic) BOOL hasInteraction;
@property (retain, nonatomic) NSData *interaction;
@property (readonly, nonatomic) BOOL hasItemID;
@property (retain, nonatomic) NSString *itemID;
@property (nonatomic) BOOL hasDonatedBySiri;
@property (nonatomic) BOOL donatedBySiri;
@property (nonatomic) BOOL hasInteractionDirection;
@property (nonatomic) int interactionDirection;
@property (readonly, nonatomic) BOOL hasGroupIdentifier;
@property (retain, nonatomic) NSString *groupIdentifier;

/* instance methods */
- (id)intentTypeAsString:(int)string;
- (int)StringAsIntentType:(id)type;
- (id)intentHandlingStatusAsString:(int)string;
- (int)StringAsIntentHandlingStatus:(id)status;
- (id)interactionDirectionAsString:(int)string;
- (int)StringAsInteractionDirection:(id)direction;
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

#endif /* BMPBIntentEvent_h */
