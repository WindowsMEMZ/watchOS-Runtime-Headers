//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFRemoteExecutionAskEachTimeRequestResponse_h
#define WFRemoteExecutionAskEachTimeRequestResponse_h
@import Foundation;

#include "WFRemoteExecutionRequest.h"

@class NSDictionary, NSError, NSMutableArray, NSString;

@interface WFRemoteExecutionAskEachTimeRequestResponse : WFRemoteExecutionRequest

@property (retain, nonatomic) NSMutableArray *inputtedStatesData;
@property (readonly, nonatomic) NSString *originatingRequestIdentifier;
@property (readonly, nonatomic) NSDictionary *inputtedStates;
@property (readonly, nonatomic) NSError *error;

/* class methods */
+ (long long)version;

/* instance methods */
- (id)initWithData:(id)data error:(id *)error;
- (id)initWithOriginatingRequestIdentifier:(id)identifier inputtedStates:(id)states error:(id)error;
- (void)inflateInputtedStatesWithAction:(id)action;
- (BOOL)readMessageFromData:(id)data error:(id *)error;
- (id)writeMessageToWriter:(id)writer error:(id *)error;
@end

#endif /* WFRemoteExecutionAskEachTimeRequestResponse_h */
