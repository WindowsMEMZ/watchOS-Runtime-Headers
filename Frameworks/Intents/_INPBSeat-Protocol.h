//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBSeat_Protocol_h
#define _INPBSeat_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBSeat-Protocol.h"

@class NSString;

@protocol _INPBSeat <NSObject>

@property (copy, nonatomic) NSString *seatNumber;
@property (readonly, nonatomic) BOOL hasSeatNumber;
@property (copy, nonatomic) NSString *seatRow;
@property (readonly, nonatomic) BOOL hasSeatRow;
@property (copy, nonatomic) NSString *seatSection;
@property (readonly, nonatomic) BOOL hasSeatSection;
@property (copy, nonatomic) NSString *seatingType;
@property (readonly, nonatomic) BOOL hasSeatingType;

@end

#endif /* _INPBSeat_Protocol_h */
