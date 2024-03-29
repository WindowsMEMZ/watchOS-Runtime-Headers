//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBHangUpCallIntentResponse_Protocol_h
#define _INPBHangUpCallIntentResponse_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBHangUpCallIntentResponse-Protocol.h"

@class NSString;

@protocol _INPBHangUpCallIntentResponse <NSObject>

@property (nonatomic) int hungUpCallType;
@property (nonatomic) BOOL hasHungUpCallType;

/* instance methods */
- (id)hungUpCallTypeAsString:(int)string;
- (int)StringAsHungUpCallType:(id)type;
@end

#endif /* _INPBHangUpCallIntentResponse_Protocol_h */
