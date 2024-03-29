//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef _ML3SortMapFaultingNameOrderDictionaryEnumerator_h
#define _ML3SortMapFaultingNameOrderDictionaryEnumerator_h
@import Foundation;

#include "NSEnumerator.h"
#include "ML3DatabaseConnection.h"

@class NSEnumerator;

@interface _ML3SortMapFaultingNameOrderDictionaryEnumerator : NSEnumerator {
  /* instance variables */
  NSEnumerator *_dirtyInsertsEnumerator;
  ML3DatabaseConnection *_connection;
  unsigned long long _offset;
}

/* instance methods */
- (id)initWithDirtyInsertsEnumerator:(id)enumerator connection:(id)connection;
- (id)nextObject;
@end

#endif /* _ML3SortMapFaultingNameOrderDictionaryEnumerator_h */
