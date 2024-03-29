//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef NSEncodingDetector_h
#define NSEncodingDetector_h
@import Foundation;

@interface NSEncodingDetector : NSObject {
  /* instance variables */
  undefined * _recognizeFunc;
  unsigned long long _givenNumBytes;
  unsigned long long _numChars;
  unsigned long long _numMultiByteChars;
  unsigned long long _numSingleBytechars;
  unsigned long long _skipBytes;
  unsigned long long _numZeroBytes;
  unsigned long long _mostFrqChars;
  unsigned long long _numBigrams;
  unsigned long long _numRep;
  unsigned long long _numDirect;
  unsigned long long _numBase64;
  unsigned long long _numSeq;
  unsigned long long _numTrigram;
  unsigned long long _numLower;
  unsigned long long _numHigher;
  double _weight;
  BOOL _hasBase64;
  BOOL _isBigEndian;
  BOOL _hasBOM;
  unsigned int _tag;
}

@property (readonly) unsigned long long nsEncoding;
@property (readonly) unsigned int cfEncoding;

/* class methods */
+ (id)detectorForCFStringEncoding:(unsigned int)encoding allowBackupDetectors:(BOOL)detectors;
+ (undefined *)recognizeFuncForCFStringEncoding:(unsigned int)encoding;

/* instance methods */
- (void)reset;
- (void)softReset;
- (double)bytesRatio;
- (unsigned long long)maxSkipBytes;
- (id)initWithNSStringEncoding:(unsigned long long)encoding CFStringEncoding:(unsigned int)encoding recognizeFunc:(undefined *)func;
- (double)confidence;
- (double)confidenceWith2Chars;
- (double)_ASCII_confidence;
- (double)_singleByte_confidence;
- (double)multiBytesRatio;
- (unsigned long long)recognizeString:(const char *)string withDataLength:(unsigned long long)length intoBuffer:(id)buffer;
@end

#endif /* NSEncodingDetector_h */
