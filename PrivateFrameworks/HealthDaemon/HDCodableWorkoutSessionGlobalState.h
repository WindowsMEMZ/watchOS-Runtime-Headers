//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCodableWorkoutSessionGlobalState_h
#define HDCodableWorkoutSessionGlobalState_h
@import Foundation;

#include "PBCodable.h"
#include "HDCodableWorkoutActivity.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface HDCodableWorkoutSessionGlobalState : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 endDate; unsigned int x :1 sessionState; unsigned int x :1 sessionStateChangeDate; unsigned int x :1 sessionStateEvent; unsigned int x :1 sessionStateEventDate; unsigned int x :1 startDate; } _has;
}

@property (nonatomic) BOOL hasSessionState;
@property (nonatomic) long long sessionState;
@property (nonatomic) BOOL hasSessionStateChangeDate;
@property (nonatomic) double sessionStateChangeDate;
@property (nonatomic) BOOL hasSessionStateEvent;
@property (nonatomic) long long sessionStateEvent;
@property (nonatomic) BOOL hasSessionStateEventDate;
@property (nonatomic) double sessionStateEventDate;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) double endDate;
@property (readonly, nonatomic) BOOL hasCurrentActivity;
@property (retain, nonatomic) HDCodableWorkoutActivity *currentActivity;
@property (retain, nonatomic) NSMutableArray *events;

/* class methods */
+ (Class)eventsType;

/* instance methods */
- (void)clearEvents;
- (void)addEvents:(id)events;
- (unsigned long long)eventsCount;
- (id)eventsAtIndex:(unsigned long long)index;
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

#endif /* HDCodableWorkoutSessionGlobalState_h */
