//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef CDMUaaPNLProtoResponseCommand_h
#define CDMUaaPNLProtoResponseCommand_h
@import Foundation;

#include "CDMBaseCommand.h"

@class SIRINLUEXTERNALCDMNluResponse, SIRINLUINTERNALUAAP_PARSERUaaPParserResponse;

@interface CDMUaaPNLProtoResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALUAAP_PARSERUaaPParserResponse *parserResponse;
@property (readonly, nonatomic) SIRINLUEXTERNALCDMNluResponse *nluResponse;

/* instance methods */
- (id)initWithParserResponse:(id)response nluResponse:(id)response;
@end

#endif /* CDMUaaPNLProtoResponseCommand_h */
