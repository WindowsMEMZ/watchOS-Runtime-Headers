//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REExportedValueEncoder_h
#define REExportedValueEncoder_h
@import Foundation;

@interface REExportedValueEncoder : NSObject {
  /* instance variables */
  unsigned long long _options;
}

/* instance methods */
- (id)initWithOptions:(unsigned long long)options;
- (void)writeExportedValue:(id)value toStream:(id)stream;
- (id)dataFromExportedValue:(id)value;
- (void)_writeValue:(id)value toStream:(id)stream depth:(unsigned long long)depth needsIndent:(BOOL)indent;
- (void)_writeCollection:(id)collection toStream:(id)stream startBlock:(id /* block */)block writerBlock:(id /* block */)block endBlock:(id /* block */)block wantsHeader:(BOOL)header depth:(unsigned long long)depth;
- (id)_namesArrayFromArray:(id)array;
- (void)writeDate:(id)date toStream:(id)stream;
- (void)writeString:(id)string toStream:(id)stream;
- (void)writeNumber:(id)number toStream:(id)stream;
- (void)writeNullToStream:(id)stream;
- (void)writeUnsupportedObject:(id)object toStream:(id)stream;
- (void)writeObjectStart:(id)start toStream:(id)stream;
- (void)writeObjectEnd:(id)end toStream:(id)stream;
- (void)writeObjectValuePairToStream:(id)stream keyWriter:(id /* block */)writer valueWriter:(id /* block */)writer isLast:(BOOL)last;
- (BOOL)writesDictionaryHeader;
- (void)writeDictionaryStartToStream:(id)stream;
- (void)writeDictionaryEndToStream:(id)stream;
- (void)writeDictionaryValuePairToStream:(id)stream keyWriter:(id /* block */)writer valueWriter:(id /* block */)writer isLast:(BOOL)last;
- (BOOL)writesArrayHeader;
- (void)writeArrayStartToStream:(id)stream;
- (void)writeArrayEndToStream:(id)stream;
- (void)writeArrayValuePairToStream:(id)stream valueWriter:(id /* block */)writer isLast:(BOOL)last;
@end

#endif /* REExportedValueEncoder_h */
