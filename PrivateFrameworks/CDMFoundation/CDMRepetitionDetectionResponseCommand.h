//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef CDMRepetitionDetectionResponseCommand_h
#define CDMRepetitionDetectionResponseCommand_h
@import Foundation;

#include "CDMBaseCommand.h"

@class SIRINLUINTERNALQUERYREWRITEQRResponse;

@interface CDMRepetitionDetectionResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALQUERYREWRITEQRResponse *response;

/* instance methods */
- (id)initWithResponse:(id)response;
@end

#endif /* CDMRepetitionDetectionResponseCommand_h */
