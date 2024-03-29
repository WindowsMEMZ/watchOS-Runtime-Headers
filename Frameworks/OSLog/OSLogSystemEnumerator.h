//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1481.40.16.0.0
//
#ifndef OSLogSystemEnumerator_h
#define OSLogSystemEnumerator_h
@import Foundation;

#include "OSLogEnumerator.h"
#include "OSLogEntry.h"

@class OSLogEventStream;
@protocol OS_dispatch_semaphore;

@interface OSLogSystemEnumerator : OSLogEnumerator {
  /* instance variables */
  OSLogEventStream *_stream;
  OSLogEntry *_next;
  BOOL _done;
  NSObject<OS_dispatch_semaphore> *_pushDone;
  NSObject<OS_dispatch_semaphore> *_handlerDone;
}

/* instance methods */
- (id)initWithEventStream:(id)stream options:(unsigned long long)options position:(id)position;
- (void)dealloc;
- (id)nextObject;
- (void)_handleEventProxy:(id)proxy;
- (void)_handleInvalidation;
@end

#endif /* OSLogSystemEnumerator_h */
