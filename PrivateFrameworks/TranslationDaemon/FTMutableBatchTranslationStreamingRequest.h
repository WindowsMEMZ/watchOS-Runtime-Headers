//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableBatchTranslationStreamingRequest_h
#define FTMutableBatchTranslationStreamingRequest_h
@import Foundation;

#include "FTBatchTranslationStreamingRequest.h"
#include "FTBatchTranslationFeedbackRequest.h"
#include "FTBatchTranslationLoggingRequest.h"
#include "FTBatchTranslationRequest.h"
#include "FTTranslationSupportedLanguagesRequest.h"

@protocol FLTBFBufferAccessor><NSCopying;

@interface FTMutableBatchTranslationStreamingRequest : FTBatchTranslationStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTBatchTranslationRequest *contentAsFTBatchTranslationRequest;
@property (copy, nonatomic) FTBatchTranslationFeedbackRequest *contentAsFTBatchTranslationFeedbackRequest;
@property (copy, nonatomic) FTBatchTranslationLoggingRequest *contentAsFTBatchTranslationLoggingRequest;
@property (copy, nonatomic) FTTranslationSupportedLanguagesRequest *contentAsFTTranslationSupportedLanguagesRequest;
@property (copy, @dynamic, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;

/* class methods */
+ (Class)content_mutableClassForType:(long long)type;
+ (long long)content_typeForMutableObject:(id)object;
+ (long long)content_typeForObject:(id)object;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableBatchTranslationStreamingRequest_h */
