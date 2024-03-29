//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MSVBloomFilter_h
#define MSVBloomFilter_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface MSVBloomFilter : NSObject<NSSecureCoding> {
  /* instance variables */
  struct __CFBitVector * _vector;
  long long _vectorCapacity;
  unsigned long long _murmurSeed;
  long long _hashCount;
}

@property (readonly, nonatomic) long long capacity;
@property (readonly, nonatomic) float falsePositiveTolerance;
@property (readonly, nonatomic) float falsePositiveProbability;
@property (readonly, nonatomic) long long estimatedCount;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCapacity:(long long)capacity falsePositiveTolerance:(float)tolerance;
- (id)initWithCapacity:(long long)capacity falsePositiveTolerance:(float)tolerance murmurSeed:(unsigned long long)seed;
- (void)dealloc;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)addObject:(id)object;
- (BOOL)containsObject:(id)object;
- (id)_vectorIndexSetForObject:(id)object;
- (unsigned long long)_fnvHashObject:(id)object;
- (unsigned long long)_murmur2HashObject:(id)object;
@end

#endif /* MSVBloomFilter_h */
