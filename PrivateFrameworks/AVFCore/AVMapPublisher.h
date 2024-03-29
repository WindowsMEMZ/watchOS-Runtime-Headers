//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVMapPublisher_h
#define AVMapPublisher_h
@import Foundation;

#include "AVPublisher.h"
#include "AVPublisher.h"

@interface AVMapPublisher : AVPublisher {
  /* instance variables */
  AVPublisher *_upstream;
  id /* block */ _transform;
}

/* class methods */
+ (id)mapPublisherWithUpstream:(id)upstream transform:(id /* block */)transform;

/* instance methods */
- (id)initWithUpstream:(id)upstream transform:(id /* block */)transform;
- (void)dealloc;
- (id)subscribeRequestingInitialValue:(BOOL)value block:(id /* block */)block;
- (id)description;
@end

#endif /* AVMapPublisher_h */
