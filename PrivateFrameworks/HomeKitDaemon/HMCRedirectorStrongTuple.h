//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMCRedirectorStrongTuple_h
#define HMCRedirectorStrongTuple_h
@import Foundation;

#include "HMFObject.h"
#include "HMCRedirectorTuple.h"

@interface HMCRedirectorStrongTuple : HMFObject {
  /* instance variables */
  HMCRedirectorTuple *_tuple;
  id _target;
  SEL _selector;
}

/* instance methods */
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)attributeDescriptions;
- (id)description;
@end

#endif /* HMCRedirectorStrongTuple_h */
