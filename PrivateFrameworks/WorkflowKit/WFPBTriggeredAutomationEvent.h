//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFPBTriggeredAutomationEvent_h
#define WFPBTriggeredAutomationEvent_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface WFPBTriggeredAutomationEvent : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 batchCount; unsigned int x :1 batchDroppedCount; unsigned int x :1 requiredRuntimeConfirmation; unsigned int x :1 showsNotification; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasTriggerType;
@property (retain, nonatomic) NSString *triggerType;
@property (nonatomic) BOOL hasRequiredRuntimeConfirmation;
@property (nonatomic) BOOL requiredRuntimeConfirmation;
@property (nonatomic) BOOL hasBatchCount;
@property (nonatomic) unsigned int batchCount;
@property (nonatomic) BOOL hasBatchDroppedCount;
@property (nonatomic) unsigned int batchDroppedCount;
@property (nonatomic) BOOL hasShowsNotification;
@property (nonatomic) BOOL showsNotification;

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

#endif /* WFPBTriggeredAutomationEvent_h */
