//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 346.2.9.0.0
//
#ifndef BRLTUnicodePrintPreprocessor_h
#define BRLTUnicodePrintPreprocessor_h
@import Foundation;

#include "BRLTPrintPreprocessor-Protocol.h"

@class NSString;

@interface BRLTUnicodePrintPreprocessor : NSObject<BRLTPrintPreprocessor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)preprocessPrintString:(id)string withLocationMap:(id *)map isEightDot:(BOOL)dot textFormattingRanges:(id)ranges;
@end

#endif /* BRLTUnicodePrintPreprocessor_h */
