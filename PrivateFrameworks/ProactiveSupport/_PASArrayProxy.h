//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef _PASArrayProxy_h
#define _PASArrayProxy_h
@import Foundation;

#include "_PASLazyArrayBase.h"
#include "NSFastEnumeration-Protocol.h"

@interface _PASArrayProxy : _PASLazyArrayBase<NSFastEnumeration> {
  /* instance variables */
  id /* block */ _objectAtIndexBlock;
  id /* block */ _countBlock;
}

/* instance methods */
- (id)initWithObjects:(const id *)objects count:(unsigned long long)count;
- (id)initWithCoder:(id)coder;
- (id)_pas_unproxy;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)objectAtIndex:(unsigned long long)index;
- (unsigned long long)count;
@end

#endif /* _PASArrayProxy_h */
