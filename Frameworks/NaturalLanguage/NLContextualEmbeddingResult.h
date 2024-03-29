//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 129.0.0.0.0
//
#ifndef NLContextualEmbeddingResult_h
#define NLContextualEmbeddingResult_h
@import Foundation;

@class NSArray, NSData, NSString;

@interface NLContextualEmbeddingResult : NSObject {
  /* instance variables */
  NSArray *_tokenDictionaries;
  NSData *_data;
  unsigned long long _tokenVectorDimension;
}

@property (readonly, copy) NSString *string;
@property (readonly, copy) NSString *language;
@property (readonly) unsigned long long sequenceLength;

/* instance methods */
- (id)initWithString:(id)string tokenDictionaries:(id)dictionaries data:(id)data language:(id)language tokenVectorDimension:(unsigned long long)dimension;
- (id)sentenceVector;
- (id)sentenceVectorData;
- (id)_tokenVectorAtIndex:(unsigned long long)index;
- (id)tokenVectorAtIndex:(unsigned long long)index tokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)range;
- (id)tokenVectorData;
- (void)enumerateTokenVectorsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range usingBlock:(id /* block */)block;
@end

#endif /* NLContextualEmbeddingResult_h */
