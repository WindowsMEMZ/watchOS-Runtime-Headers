//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef CDMShortcutRequestCommand_h
#define CDMShortcutRequestCommand_h
@import Foundation;

#include "CDMBaseCommand.h"

@class NSArray, SIRINLUEXTERNALTurnContext, SIRINLUINTERNALTokenChain;

@interface CDMShortcutRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALTokenChain *tokenChain;
@property (readonly, nonatomic) NSArray *matchingSpans;
@property (readonly, nonatomic) SIRINLUEXTERNALTurnContext *currentTurnContext;

/* instance methods */
- (id)initWithMatchingSpans:(id)spans tokenChain:(id)chain currentTurnContext:(id)context;
@end

#endif /* CDMShortcutRequestCommand_h */
