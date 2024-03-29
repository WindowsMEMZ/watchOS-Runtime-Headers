//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBPauseWorkoutIntent_Protocol_h
#define _INPBPauseWorkoutIntent_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBDataString.h"
#include "_INPBIntentMetadata.h"
#include "_INPBPauseWorkoutIntent-Protocol.h"

@class NSString;

@protocol _INPBPauseWorkoutIntent <NSObject>

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBDataString *workoutName;
@property (readonly, nonatomic) BOOL hasWorkoutName;

@end

#endif /* _INPBPauseWorkoutIntent_Protocol_h */
