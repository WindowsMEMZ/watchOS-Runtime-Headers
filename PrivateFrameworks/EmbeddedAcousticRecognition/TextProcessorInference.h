//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.7.1.0.0
//
#ifndef TextProcessorInference_h
#define TextProcessorInference_h
@import Foundation;

#include "TextProcessor-Protocol.h"
#include "_EARLMTKaldiVocab.h"

@class NSMutableArray, NSString;

@interface TextProcessorInference : NSObject<TextProcessor> {
  /* instance variables */
  NSMutableArray *_text;
  _EARLMTKaldiVocab *_vocab;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithVocab:(id)vocab;
- (id)initWithLength:(unsigned long long)length vocab:(id)vocab BOS:(unsigned long long)bos;
- (void)resetWithBOS:(unsigned long long)bos;
- (void)addText:(id)text;
- (id)textSequence;
@end

#endif /* TextProcessorInference_h */
