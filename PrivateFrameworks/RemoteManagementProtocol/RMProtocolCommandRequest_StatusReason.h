//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMProtocolCommandRequest_StatusReason_h
#define RMProtocolCommandRequest_StatusReason_h
@import Foundation;

#include "RMModelPayloadBase.h"

@class NSString, RMModelAnyPayload;

@interface RMProtocolCommandRequest_StatusReason : RMModelPayloadBase

@property (copy, nonatomic) NSString *requestCode;
@property (copy, nonatomic) NSString *requestDescription;
@property (copy, nonatomic) RMModelAnyPayload *requestDetails;

/* class methods */
+ (id)allowedRequestKeys;
+ (id)buildWithCode:(id)code description:(id)description details:(id)details;
+ (id)buildRequiredOnlyWithCode:(id)code;

/* instance methods */
- (BOOL)loadFromDictionary:(id)dictionary serializationType:(short)type error:(id *)error;
- (id)serializeWithType:(short)type;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* RMProtocolCommandRequest_StatusReason_h */
