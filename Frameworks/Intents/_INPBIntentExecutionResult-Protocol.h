//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBIntentExecutionResult_Protocol_h
#define _INPBIntentExecutionResult_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBIntentExecutionResult-Protocol.h"

@class NSString;

@protocol _INPBIntentExecutionResult <NSObject>

@property (copy, nonatomic) NSString *encodedIntent;
@property (readonly, nonatomic) BOOL hasEncodedIntent;
@property (copy, nonatomic) NSString *encodedIntentResponse;
@property (readonly, nonatomic) BOOL hasEncodedIntentResponse;
@property (nonatomic) int encodingFormat;
@property (nonatomic) BOOL hasEncodingFormat;

/* instance methods */
- (id)encodingFormatAsString:(int)string;
- (int)StringAsEncodingFormat:(id)format;
@end

#endif /* _INPBIntentExecutionResult_Protocol_h */
