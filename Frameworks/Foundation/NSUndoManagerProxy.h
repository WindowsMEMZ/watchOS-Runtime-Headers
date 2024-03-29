//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef NSUndoManagerProxy_h
#define NSUndoManagerProxy_h
@import Foundation;

#include ".h"
#include "NSUndoManager.h"

@interface NSUndoManagerProxy :  {
  /* instance variables */
  NSUndoManager *_manager;
  Class _targetClass;
}

/* instance methods */
- (id)initWithManager:(id)manager;
- (void)setTargetClass:(Class)class;
- (id)retain;
- (BOOL)_tryRetain;
- (void)release;
- (void)superRelease;
- (id)methodSignatureForSelector:(SEL)selector;
- (void)forwardInvocation:(id)invocation;
- (BOOL)isKindOfClass:(Class)class;
@end

#endif /* NSUndoManagerProxy_h */
