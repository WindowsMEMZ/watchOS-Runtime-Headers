//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64561.91.2.0.0
//
#ifndef VMUDominatorRoots_h
#define VMUDominatorRoots_h
@import Foundation;

#include "NSEnumerator.h"
#include "VMUDominatorGraph.h"

@interface VMUDominatorRoots : NSEnumerator {
  /* instance variables */
  VMUDominatorGraph *_dg;
  unsigned int _i;
}

/* instance methods */
- (id)initWithDominatorGraph:(id)graph;
- (id)nextObject;
@end

#endif /* VMUDominatorRoots_h */
