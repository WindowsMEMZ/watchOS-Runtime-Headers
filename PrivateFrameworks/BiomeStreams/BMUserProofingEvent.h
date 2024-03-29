//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMUserProofingEvent_h
#define BMUserProofingEvent_h
@import Foundation;

#include "BMProtoBufWrapper-Protocol.h"
#include "BMStoreData-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface BMUserProofingEvent : NSObject<BMStoreData, BMProtoBufWrapper, NSSecureCoding>

@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) NSString *age;
@property (readonly, nonatomic) NSString *gender;
@property (readonly, nonatomic) NSString *skinTone;
@property (readonly, nonatomic) NSString *ethnicity;
@property (readonly, nonatomic) NSString *deviceRegion;
@property (readonly, nonatomic) NSString *deviceLanguage;
@property (readonly, nonatomic) NSString *proofingDecision;
@property (readonly, nonatomic) NSString *issuer;
@property (readonly, nonatomic) NSString *livenessAssessment;
@property (readonly, nonatomic) NSString *gestureAssessment;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAbsoluteTimestamp:(double)timestamp age:(id)age gender:(id)gender skinTone:(id)tone ethnicity:(id)ethnicity deviceRegion:(id)region proofingDecision:(id)decision;
- (id)initWithAbsoluteTimestamp:(double)timestamp age:(id)age gender:(id)gender skinTone:(id)tone ethnicity:(id)ethnicity deviceLanguage:(id)language proofingDecision:(id)decision issuer:(id)issuer;
- (id)initWithAbsoluteTimestamp:(double)timestamp age:(id)age gender:(id)gender skinTone:(id)tone ethnicity:(id)ethnicity deviceLanguage:(id)language proofingDecision:(id)decision issuer:(id)issuer livenessAssessment:(id)assessment gestureAssessment:(id)assessment;
- (id)serialize;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)encodeAsProto;
- (id)initWithProto:(id)proto;
- (id)initWithProtoData:(id)data;
- (id)proto;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMUserProofingEvent_h */
