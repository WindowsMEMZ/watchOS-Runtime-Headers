//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 221.0.4.0.0
//
#ifndef SCRCStackQueue_h
#define SCRCStackQueue_h
@import Foundation;

#include "_SCRCStackNode.h"

@interface SCRCStackQueue : NSObject {
  /* instance variables */
  _SCRCStackNode *_firstNode;
  _SCRCStackNode *_lastNode;
  unsigned long long _count;
}

/* instance methods */
- (void)dealloc;
- (void)removeAllObjects;
- (void)_safeReleaseAllObjects;
- (void)pushArray:(id)array;
- (void)pushObject:(id)object;
- (id)popObject;
- (id)popObjectRetained;
- (id)topObject;
- (void)enqueueObject:(id)object;
- (id)dequeueObjectRetained;
- (id)dequeueObject;
- (unsigned long long)count;
- (id)description;
- (id)objectEnumerator;
- (BOOL)isEmpty;
@end

#endif /* SCRCStackQueue_h */
