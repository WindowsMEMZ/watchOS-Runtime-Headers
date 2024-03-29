//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef _PASBloomFilterDummy_h
#define _PASBloomFilterDummy_h
@import Foundation;

#include "_PASBloomFilter.h"

@interface _PASBloomFilterDummy : _PASBloomFilter {
  /* instance variables */
  BOOL _result;
}

/* class methods */
+ (id)instanceThatAlwaysReturns:(BOOL)returns;

/* instance methods */
- (id)initWithResult:(BOOL)result;
- (BOOL)getWithHashes:(id)hashes;
@end

#endif /* _PASBloomFilterDummy_h */
