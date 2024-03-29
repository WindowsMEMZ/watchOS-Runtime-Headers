//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBTemporalEventTrigger_Protocol_h
#define _INPBTemporalEventTrigger_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBDateTimeRangeValue.h"
#include "_INPBTemporalEventTrigger-Protocol.h"

@class NSString;

@protocol _INPBTemporalEventTrigger <NSObject>

@property (retain, nonatomic) _INPBDateTimeRangeValue *dateTime;
@property (readonly, nonatomic) BOOL hasDateTime;

@end

#endif /* _INPBTemporalEventTrigger_Protocol_h */
