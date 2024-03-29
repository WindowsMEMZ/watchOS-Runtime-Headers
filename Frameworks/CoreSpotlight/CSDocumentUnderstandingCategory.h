//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2274.8.0.0.0
//
#ifndef CSDocumentUnderstandingCategory_h
#define CSDocumentUnderstandingCategory_h
@import Foundation;

#include "CSExternalAnalysisTag.h"
#include "CSCoderEncoder-Protocol.h"

@interface CSDocumentUnderstandingCategory : CSExternalAnalysisTag<CSCoderEncoder>
/* instance methods */
- (void)encodeWithCSCoder:(id)cscoder;
- (id)initWithLabel:(id)label synonyms:(id)synonyms confidence:(double)confidence;
@end

#endif /* CSDocumentUnderstandingCategory_h */
