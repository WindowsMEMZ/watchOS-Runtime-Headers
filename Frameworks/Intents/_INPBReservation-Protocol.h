//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBReservation_Protocol_h
#define _INPBReservation_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBDataString.h"
#include "_INPBReservation-Protocol.h"
#include "_INPBTimestamp.h"
#include "_INPBURLValue.h"

@class NSArray, NSString;

@protocol _INPBReservation <NSObject>

@property (retain, nonatomic) _INPBURLValue *url;
@property (readonly, nonatomic) BOOL hasUrl;
@property (copy, nonatomic) NSArray *actions;
@property (readonly, nonatomic) unsigned long long actionsCount;
@property (retain, nonatomic) _INPBTimestamp *bookingTime;
@property (readonly, nonatomic) BOOL hasBookingTime;
@property (retain, nonatomic) _INPBDataString *itemReference;
@property (readonly, nonatomic) BOOL hasItemReference;
@property (copy, nonatomic) NSString *reservationHolderName;
@property (readonly, nonatomic) BOOL hasReservationHolderName;
@property (copy, nonatomic) NSString *reservationNumber;
@property (readonly, nonatomic) BOOL hasReservationNumber;
@property (nonatomic) int reservationStatus;
@property (nonatomic) BOOL hasReservationStatus;

/* class methods */
+ (Class)actionsType;
/* instance methods */
- (void)clearActions;
- (void)addActions:(id)actions;
- (id)actionsAtIndex:(unsigned long long)index;
- (id)reservationStatusAsString:(int)string;
- (int)StringAsReservationStatus:(id)status;
@end

#endif /* _INPBReservation_Protocol_h */
