//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 121.0.0.0.0
//
#ifndef SignpostSupportObjectSerializer_h
#define SignpostSupportObjectSerializer_h
@import Foundation;

#include "SignpostSerializationFilterConfiguration.h"

@class NSMutableArray, SignpostSupportObjectExtractor;

@interface SignpostSupportObjectSerializer : NSObject

@property (retain, nonatomic) NSMutableArray *outstandingSignpostObjects;
@property (retain, nonatomic) NSMutableArray *outstandingLogMessage;
@property (retain, nonatomic) SignpostSupportObjectExtractor *extractor;
@property (nonatomic) unsigned long long maxBatchSize;
@property (nonatomic) unsigned long long maxBytesSize;
@property (copy, nonatomic) id /* block */ serializedSignpostEventBlock;
@property (copy, nonatomic) id /* block */ serializedLogMessageBlock;
@property (nonatomic) BOOL redactPrivacySensitiveData;
@property (retain, nonatomic) SignpostSerializationFilterConfiguration *filterConfiguration;

/* instance methods */
- (id)_dataArrayForSignpostSupportObjectArray:(id)array errorOut:(id *)out;
- (id)init;
- (BOOL)_hasProcessingBlocks;
- (id)_sanityCheckParameters;
- (BOOL)serializeLogArchiveWithPath:(id)path startDate:(id)date endDate:(id)date errorOut:(id *)out;
- (BOOL)serializeNotificationsWithIntervalTimeoutInSeconds:(unsigned long long)seconds errorOut:(id *)out;
@end

#endif /* SignpostSupportObjectSerializer_h */
