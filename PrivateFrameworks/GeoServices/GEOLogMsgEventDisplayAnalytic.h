//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOLogMsgEventDisplayAnalytic_h
#define GEOLogMsgEventDisplayAnalytic_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface GEOLogMsgEventDisplayAnalytic : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_meanImageSpacing; unsigned int x :1 has_displayActionTrigger; unsigned int x :1 has_displayEvent; unsigned int x :1 has_movementDistance; unsigned int x :1 has_renderedImageCount; unsigned int x :1 has_requestedImageCount; unsigned int x :1 has_requiredResourcesAvailable; unsigned int x :1 has_totalTime; } _flags;
}

@property (nonatomic) BOOL hasDisplayActionTrigger;
@property (nonatomic) int displayActionTrigger;
@property (nonatomic) BOOL hasRequiredResourcesAvailable;
@property (nonatomic) unsigned int requiredResourcesAvailable;
@property (nonatomic) BOOL hasTotalTime;
@property (nonatomic) unsigned int totalTime;
@property (nonatomic) BOOL hasRequestedImageCount;
@property (nonatomic) unsigned int requestedImageCount;
@property (nonatomic) BOOL hasRenderedImageCount;
@property (nonatomic) unsigned int renderedImageCount;
@property (nonatomic) BOOL hasMovementDistance;
@property (nonatomic) unsigned int movementDistance;
@property (nonatomic) BOOL hasMeanImageSpacing;
@property (nonatomic) double meanImageSpacing;
@property (nonatomic) BOOL hasDisplayEvent;
@property (nonatomic) int displayEvent;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)displayActionTriggerAsString:(int)string;
- (int)StringAsDisplayActionTrigger:(id)trigger;
- (id)displayEventAsString:(int)string;
- (int)StringAsDisplayEvent:(id)event;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* GEOLogMsgEventDisplayAnalytic_h */
