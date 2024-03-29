//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFIMAPSimpleDownload_h
#define MFIMAPSimpleDownload_h
@import Foundation;

#include "MFIMAPDownload.h"

@class NSError, NSString;

@interface MFIMAPSimpleDownload : MFIMAPDownload {
  /* instance variables */
  NSString *_section;
  NSError *_error;
  unsigned long long _length;
  unsigned long long _lastBytesFetched;
  unsigned int x :1 _knownLength;
  unsigned int x :1 _complete;
  struct _NSRange { unsigned long long location; unsigned long long length; } _range;
  unsigned long long _originalDataLength;
  unsigned long long _offsetAdjustment;
}

/* instance methods */
- (id)initWithUid:(unsigned int)uid section:(id)section length:(unsigned long long)length lengthIsKnown:(BOOL)known range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range consumer:(id)consumer;
- (id)initWithUid:(unsigned int)uid section:(id)section estimatedLength:(unsigned long long)length consumer:(id)consumer;
- (id)initWithUid:(unsigned int)uid section:(id)section length:(unsigned long long)length consumer:(id)consumer;
- (id)initWithUid:(unsigned int)uid section:(id)section range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range consumer:(id)consumer;
- (id)section;
- (unsigned long long)expectedLength;
- (unsigned long long)bytesFetched;
- (void)handleFetchResult:(id)result;
- (void)processResults;
- (void)addCommandsToPipeline:(id)pipeline withCache:(id)cache;
- (BOOL)isComplete;
- (BOOL)isSuccessful;
- (id)error;
- (void)setError:(id)error;
- (unsigned long long)lengthOfDataBeforeLineConversion;
@end

#endif /* MFIMAPSimpleDownload_h */
