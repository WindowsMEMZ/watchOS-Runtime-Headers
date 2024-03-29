//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSGzipOutputStream_h
#define SSGzipOutputStream_h
@import Foundation;

#include "NSOutputStream.h"

@class NSError, NSOutputStream;

@interface SSGzipOutputStream : NSOutputStream {
  /* instance variables */
  NSOutputStream *_backingStream;
  struct z_stream_s { char *next_in; unsigned int avail_in; unsigned long long total_in; char *next_out; unsigned int avail_out; unsigned long long total_out; char *msg; struct internal_state *state; undefined *zalloc; undefined *zfree; void *opaque; int data_type; unsigned long long adler; unsigned long long reserved; } _stream;
  unsigned long long _streamContentLength;
  NSError *_streamError;
  char * _streamOutBuffer;
  unsigned long long _streamOutBufferSize;
}

/* instance methods */
- (BOOL)_initializeOutputStream;
- (id)initToFileAtPath:(id)path append:(BOOL)append;
- (id)initToMemory;
- (void)dealloc;
- (void)open;
- (void)close;
- (unsigned long long)streamContentLength;
- (unsigned long long)streamStatus;
- (id)streamError;
- (long long)write:(const char *)write maxLength:(unsigned long long)length;
- (BOOL)hasSpaceAvailable;
- (id)propertyForKey:(id)key;
- (BOOL)setProperty:(id)property forKey:(id)key;
- (long long)_consumeStreamOutput:(BOOL)output;
- (void)_setStreamError:(int)error context:(id)context;
@end

#endif /* SSGzipOutputStream_h */
