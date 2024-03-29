//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef _CNLazyArrayEnumeratorSource_h
#define _CNLazyArrayEnumeratorSource_h
@import Foundation;

#include "_CNLazyArrayOperation-Protocol.h"

@class NSEnumerator;

@interface _CNLazyArrayEnumeratorSource : NSObject<_CNLazyArrayOperation> {
  /* instance variables */
  NSEnumerator *_enumerator;
}

/* instance methods */
- (id)initWithEnumerator:(id)enumerator;
- (id)nextObject;
@end

#endif /* _CNLazyArrayEnumeratorSource_h */
