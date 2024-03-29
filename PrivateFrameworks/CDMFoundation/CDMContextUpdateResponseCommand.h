//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef CDMContextUpdateResponseCommand_h
#define CDMContextUpdateResponseCommand_h
@import Foundation;

#include "CDMBaseCommand.h"

@class SIRINLUEXTERNALCorrectionOutcome, SIRINLUINTERNALCONTEXTUPDATEContextUpdateResponse, SIRINLUINTERNALCONTEXTUPDATEReformedTurnInputBundle;

@interface CDMContextUpdateResponseCommand : CDMBaseCommand

@property (retain, nonatomic) SIRINLUINTERNALCONTEXTUPDATEContextUpdateResponse *ctxUpdateResponse;
@property (retain, nonatomic) SIRINLUINTERNALCONTEXTUPDATEReformedTurnInputBundle *firstReformedInput;
@property (retain, nonatomic) SIRINLUEXTERNALCorrectionOutcome *correctionOutcome;

/* instance methods */
- (id)initWithCtxUpdateResponse:(id)response;
@end

#endif /* CDMContextUpdateResponseCommand_h */
