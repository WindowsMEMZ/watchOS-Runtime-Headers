//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRBlockGuard_h
#define MRBlockGuard_h
@import Foundation;

#include "MSVBlockGuard.h"

@interface MRBlockGuard : MSVBlockGuard
/* instance methods */
- (id)initWithTimeout:(double)timeout reason:(id)reason queue:(id)queue handler:(id /* block */)handler;
- (id)initWithTimeout:(double)timeout reason:(id)reason handler:(id /* block */)handler;
@end

#endif /* MRBlockGuard_h */
