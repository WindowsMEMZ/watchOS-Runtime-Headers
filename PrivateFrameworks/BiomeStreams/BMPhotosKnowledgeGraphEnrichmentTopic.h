//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMPhotosKnowledgeGraphEnrichmentTopic_h
#define BMPhotosKnowledgeGraphEnrichmentTopic_h
@import Foundation;

#include "BMProtoBufWrapper-Protocol.h"
#include "BMStoreData-Protocol.h"
#include "BMStreamValidating-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface BMPhotosKnowledgeGraphEnrichmentTopic : NSObject<BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentifier:(id)identifier score:(double)score;
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
- (BOOL)isCompleteWithContext:(id)context error:(id *)error;
- (BOOL)isValidWithContext:(id)context error:(id *)error;
@end

#endif /* BMPhotosKnowledgeGraphEnrichmentTopic_h */
