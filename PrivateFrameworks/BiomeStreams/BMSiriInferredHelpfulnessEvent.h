//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMSiriInferredHelpfulnessEvent_h
#define BMSiriInferredHelpfulnessEvent_h
@import Foundation;

#include "BMProtoBufWrapper-Protocol.h"
#include "BMStoreData-Protocol.h"
#include "BMStreamValidating-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface BMSiriInferredHelpfulnessEvent : NSObject<BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>

@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) double inferredHelpfulnessScore;
@property (readonly, nonatomic) double restatementScore;
@property (readonly, copy, nonatomic) NSString *turnID;
@property (readonly, copy, nonatomic) NSString *modelID;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAbsoluteTimestamp:(double)timestamp;
- (id)initWithAbsoluteTimestamp:(double)timestamp inferredHelpfulnessScore:(double)score restatementScore:(double)score turnID:(id)id modelID:(id)id;
- (id)serialize;
- (id)jsonDict;
- (id)json;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)encodeAsProto;
- (id)initWithProto:(id)proto;
- (id)initWithProtoData:(id)data;
- (id)proto;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToSiriInferredHelpfulnessEvent:(id)event;
- (BOOL)isCompleteWithContext:(id)context error:(id *)error;
- (BOOL)isValidWithContext:(id)context error:(id *)error;
@end

#endif /* BMSiriInferredHelpfulnessEvent_h */
