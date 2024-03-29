//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef CDMBaseSpanMatchService_h
#define CDMBaseSpanMatchService_h
@import Foundation;

#include "CDMDAGBaseService.h"
#include "CDMProtoSpanMatcher-Protocol.h"

@interface CDMBaseSpanMatchService : CDMDAGBaseService

@property (retain) NSObject<CDMProtoSpanMatcher> *spanMatcher;

/* class methods */
+ (Class)spanMatcherClass;
+ (id)getAssetConfig;
+ (id)convertToSpanMatchRequests:(id)requests nlContext:(id)context;
+ (id)convertToSpanMatchRequest:(id)request nlContext:(id)context;

/* instance methods */
- (id)setupSpanMatcher:(id)matcher;
- (id)handleRequestCommandTypeNames;
- (id)handle:(id)handle;
- (id)_handle:(id)_handle;
- (id)createErrorSetupResponseCommand:(id)command;
- (id)setup:(id)setup;
- (void)spanizeAsrs:(id)asrs asrSpansMap:(id)map topAsrSpans:(id)spans topAsrSpansFiltered:(id)filtered;
- (BOOL)shouldBeUsedForAsrAlternatives;
- (void)spanizeTokenChain:(id)chain spans:(id)spans isTopAsr:(BOOL)asr topAsrSpansFiltered:(id)filtered;
- (void)limitNumberOfSpans:(id)spans;
@end

#endif /* CDMBaseSpanMatchService_h */
