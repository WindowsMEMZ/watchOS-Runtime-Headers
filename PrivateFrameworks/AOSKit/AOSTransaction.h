//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.2.0.0.0
//
#ifndef AOSTransaction_h
#define AOSTransaction_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSConditionLock;
@protocol OS_dispatch_queue;

@interface AOSTransaction : NSObject<NSCoding> {
  /* instance variables */
  unsigned char didSucceed;
  unsigned char didFinish;
  void * result;
  struct __CFError * error;
  undefined * callbackFunction;
  id /* block */ callbackBlock;
  NSObject<OS_dispatch_queue> *callbackQueue;
  void * context;
  NSConditionLock *waitLock;
  undefined * contextRetain;
  undefined * contextRelease;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)finalize;
- (BOOL)isSuccessful;
- (id)result;
- (id)error;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* AOSTransaction_h */
