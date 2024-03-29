//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDHealthStoreErrorEndpoint_h
#define HDHealthStoreErrorEndpoint_h
@import Foundation;

#include "HDHealthStoreEndpoint.h"

@class NSError;

@interface HDHealthStoreErrorEndpoint : HDHealthStoreEndpoint {
  /* instance variables */
  NSError *_error;
}

/* instance methods */
- (void)remote_serverForConfiguration:(id)configuration completion:(id /* block */)completion;
@end

#endif /* HDHealthStoreErrorEndpoint_h */
