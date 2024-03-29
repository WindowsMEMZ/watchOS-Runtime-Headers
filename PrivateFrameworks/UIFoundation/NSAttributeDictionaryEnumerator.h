//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 908.2.0.0.0
//
#ifndef NSAttributeDictionaryEnumerator_h
#define NSAttributeDictionaryEnumerator_h
@import Foundation;

#include "NSEnumerator.h"
#include "NSAttributeDictionary.h"

@interface NSAttributeDictionaryEnumerator : NSEnumerator {
  /* instance variables */
  NSAttributeDictionary *dictionary;
  unsigned long long nextElement;
}

/* instance methods */
- (id)initWithAttributeDictionary:(id)dictionary;
- (id)nextObject;
- (void)dealloc;
@end

#endif /* NSAttributeDictionaryEnumerator_h */
