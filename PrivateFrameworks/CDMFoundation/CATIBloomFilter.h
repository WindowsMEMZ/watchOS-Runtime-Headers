//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef CATIBloomFilter_h
#define CATIBloomFilter_h
@import Foundation;

#include "CATIBitVector.h"

@interface CATIBloomFilter : NSObject {
  /* instance variables */
  CATIBitVector *bitVector;
  unsigned long long _numberOfBits;
  unsigned long long _numberHashes;
}

@property (readonly) unsigned int seed;
@property (readonly) unsigned long long expectedNumberOfItems;
@property (readonly) double falsePositiveRate;

/* instance methods */
- (id)initWithExceptedNumberOfItems:(unsigned long long)items falsePositiveRate:(double)rate seed:(unsigned int)seed;
- (void)add:(id)add;
- (BOOL)contains:(id)contains;
@end

#endif /* CATIBloomFilter_h */
