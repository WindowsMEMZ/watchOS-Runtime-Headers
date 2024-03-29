//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableApgBatchRecoverMessage_h
#define FTMutableApgBatchRecoverMessage_h
@import Foundation;

#include "FTApgBatchRecoverMessage.h"
#include "FTBatchRecoverFinalResponse.h"
#include "FTPronGuessResponse.h"
#include "FTStartBatchRecoverRequest.h"

@protocol FLTBFBufferAccessor><NSCopying;

@interface FTMutableApgBatchRecoverMessage : FTApgBatchRecoverMessage

@property (nonatomic) long long session_message_type;
@property (copy, nonatomic) FTStartBatchRecoverRequest *session_messageAsFTStartBatchRecoverRequest;
@property (copy, nonatomic) FTPronGuessResponse *session_messageAsFTPronGuessResponse;
@property (copy, nonatomic) FTBatchRecoverFinalResponse *session_messageAsFTBatchRecoverFinalResponse;
@property (copy, @dynamic, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;

/* class methods */
+ (Class)session_message_mutableClassForType:(long long)type;
+ (long long)session_message_typeForMutableObject:(id)object;
+ (long long)session_message_typeForObject:(id)object;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableApgBatchRecoverMessage_h */
