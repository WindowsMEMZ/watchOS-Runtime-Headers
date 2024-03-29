//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 362.0.0.0.0
//
#ifndef GSTemporaryAddtionEnumerator_h
#define GSTemporaryAddtionEnumerator_h
@import Foundation;

#include "NSEnumerator.h"
#include "GSAdditionEnumerating-Protocol.h"
#include "GSTemporaryStorage.h"

@class NSArray, NSDirectoryEnumerator, NSError, NSString;

@interface GSTemporaryAddtionEnumerator : NSEnumerator<GSAdditionEnumerating> {
  /* instance variables */
  GSTemporaryStorage *_storage;
  NSString *_nameSpace;
  unsigned long long _withOptions;
  unsigned long long _withoutOption;
  NSDirectoryEnumerator *_enumerator;
  NSArray *_array;
  unsigned long long _pos;
}

@property (readonly, nonatomic) NSError *error;

/* instance methods */
- (id)initWithStorage:(id)storage nameSpace:(id)space withOptions:(unsigned long long)options withoutOptions:(unsigned long long)options ordering:(int)ordering;
- (id)_nextURL;
- (id)nextObject;
@end

#endif /* GSTemporaryAddtionEnumerator_h */
