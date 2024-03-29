//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIAnyPersistedTask_h
#define TRIAnyPersistedTask_h
@import Foundation;

#include "TRIPBMessage.h"

@class NSData;

@interface TRIAnyPersistedTask : TRIPBMessage

@property (@dynamic, nonatomic) int type;
@property (@dynamic, nonatomic) BOOL hasType;
@property (copy, @dynamic, nonatomic) NSData *serialized;
@property (@dynamic, nonatomic) BOOL hasSerialized;

/* class methods */
+ (id)descriptor;
@end

#endif /* TRIAnyPersistedTask_h */
