//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 267.0.0.0.0
//
#ifndef _SYInputStreamer_h
#define _SYInputStreamer_h
@import Foundation;

#include "NSStreamDelegate-Protocol.h"
#include "SYCompressedFileInputStream.h"
#include "_SYStreamPropertyProxying-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _SYInputStreamer : NSObject<NSStreamDelegate, _SYStreamPropertyProxying> {
  /* instance variables */
  SYCompressedFileInputStream *_stream;
  NSMutableArray *_items;
  id /* block */ _onComplete;
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_source> *_source;
  NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCompressedFileURL:(id)url callbackQueue:(id)queue;
- (void)readDataOfLength:(unsigned long long)length completion:(id /* block */)completion;
- (void)_tryToReadData;
- (void)_completeAllItemsWithError:(id)error;
- (void)whenComplete:(id /* block */)complete;
- (void)close;
- (void)setStreamProperty:(id)property forKey:(id)key;
- (id)streamPropertyForKey:(id)key;
- (void)stream:(id)stream handleEvent:(unsigned long long)event;
@end

#endif /* _SYInputStreamer_h */
