//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef IPAAggregateLargestImageSizePolicy_h
#define IPAAggregateLargestImageSizePolicy_h
@import Foundation;

#include "IPAImageSizePolicy.h"

@class NSArray;

@interface IPAAggregateLargestImageSizePolicy : IPAImageSizePolicy {
  /* instance variables */
  NSArray *_policies;
}

/* instance methods */
- (id)initWithPolicies:(id)policies;
- (BOOL)isBestFitPolicy;
- (struct CGSize { double x0; double x1; })transformSize:(struct CGSize { double x0; double x1; })size;
- (double)transformScaleForSize:(struct CGSize { double x0; double x1; })size;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* IPAAggregateLargestImageSizePolicy_h */
