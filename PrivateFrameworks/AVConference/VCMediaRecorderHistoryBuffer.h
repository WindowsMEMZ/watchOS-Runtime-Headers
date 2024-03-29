//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCMediaRecorderHistoryBuffer_h
#define VCMediaRecorderHistoryBuffer_h
@import Foundation;

@interface VCMediaRecorderHistoryBuffer : NSObject {
  /* instance variables */
  id _delegate;
  unsigned int _bufferLength;
  struct __CFArray * _timestampQueue;
  struct __CFDictionary * _sampleMap;
  unsigned int _lastTimestamp;
  struct __CFAllocator * _timestampAllocator;
}

/* instance methods */
- (id)initWithDelegate:(id)delegate bufferLength:(int)length dispatchQueue:(id)queue;
- (void)dealloc;
- (struct opaqueCMSampleBuffer *)getClosestSampleForTimestamp:(unsigned int)timestamp;
- (void)flushBuffer;
- (int)getCount;
- (id)delegate;
@end

#endif /* VCMediaRecorderHistoryBuffer_h */
