//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef _NSUndoStack_h
#define _NSUndoStack_h
@import Foundation;

#include "_NSUndoObject.h"

@interface _NSUndoStack : NSObject {
  /* instance variables */
  unsigned long long _max;
  unsigned long long _count;
  unsigned long long _nestingLevel;
  _NSUndoObject *_head;
}

/* instance methods */
- (void)_removeBottom;
- (id)init;
- (void)dealloc;
- (unsigned long long)max;
- (unsigned long long)count;
- (void)setMax:(unsigned long long)max;
- (void)push:(id)push;
- (id)popUndoObject;
- (id)_beginMark;
- (void)setGroupIdentifier:(id)identifier;
- (id)groupIdentifier;
- (id)topUndoObject;
- (void)markBegin;
- (void)markEnd;
- (BOOL)isDiscardable;
- (void)setDiscardable:(BOOL)discardable;
- (BOOL)popAndInvoke;
- (unsigned long long)nestingLevel;
- (void)removeAllObjects;
- (void)removeAllObjectsWithTarget:(id)target;
- (void)removeObject:(id)object;
- (id)description;
@end

#endif /* _NSUndoStack_h */
