//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef _PFResultObjectKeyEnumerator_h
#define _PFResultObjectKeyEnumerator_h
@import Foundation;

#include "NSEnumerator.h"

@interface _PFResultObjectKeyEnumerator : NSEnumerator {
  /* instance variables */
  id _target;
  const id * _keys;
  unsigned long long * _referenceItems;
  struct _NSRange { unsigned long long location; unsigned long long length; } _range;
  unsigned long long _index;
}

/* instance methods */
- (id)initWithArray:(const id *)array forTarget:(id)target withReferenceValues:(unsigned long long *)values andRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)dealloc;
- (id)nextObject;
@end

#endif /* _PFResultObjectKeyEnumerator_h */
