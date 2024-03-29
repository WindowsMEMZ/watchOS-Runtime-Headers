//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIPBValue_h
#define TRIPBValue_h
@import Foundation;

#include "TRIPBMessage.h"
#include "TRIPBListValue.h"
#include "TRIPBStruct.h"

@class NSString;

@interface TRIPBValue : TRIPBMessage

@property (readonly, @dynamic, nonatomic) int kindOneOfCase;
@property (@dynamic, nonatomic) int nullValue;
@property (@dynamic, nonatomic) double numberValue;
@property (copy, @dynamic, nonatomic) NSString *stringValue;
@property (@dynamic, nonatomic) BOOL boolValue;
@property (retain, @dynamic, nonatomic) TRIPBStruct *structValue;
@property (retain, @dynamic, nonatomic) TRIPBListValue *listValue;

/* class methods */
+ (id)descriptor;
@end

#endif /* TRIPBValue_h */
