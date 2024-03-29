//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef _CNCompactMapEnumerator_h
#define _CNCompactMapEnumerator_h
@import Foundation;

#include "NSEnumerator.h"

@class NSEnumerator;

@interface _CNCompactMapEnumerator : NSEnumerator {
  /* instance variables */
  NSEnumerator *_enumerator;
  id /* block */ _transform;
}

/* instance methods */
- (id)initWithEnumerator:(id)enumerator transform:(id /* block */)transform;
- (id)nextObject;
@end

#endif /* _CNCompactMapEnumerator_h */
