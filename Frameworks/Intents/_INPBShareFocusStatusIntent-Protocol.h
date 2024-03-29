//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBShareFocusStatusIntent_Protocol_h
#define _INPBShareFocusStatusIntent_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBFocusStatus.h"
#include "_INPBIntentMetadata.h"
#include "_INPBShareFocusStatusIntent-Protocol.h"

@class NSString;

@protocol _INPBShareFocusStatusIntent <NSObject>

@property (retain, nonatomic) _INPBFocusStatus *focusStatus;
@property (readonly, nonatomic) BOOL hasFocusStatus;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;

@end

#endif /* _INPBShareFocusStatusIntent_Protocol_h */
