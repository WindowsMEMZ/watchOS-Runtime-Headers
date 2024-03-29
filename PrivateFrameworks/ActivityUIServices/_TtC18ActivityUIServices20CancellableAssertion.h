//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.16.0.0.0
//
#ifndef _TtC18ActivityUIServices20CancellableAssertion_h
#define _TtC18ActivityUIServices20CancellableAssertion_h
@import Foundation;

#include "BSInvalidatable-Protocol.h"

@interface ActivityUIServices.CancellableAssertion : NSObject<BSInvalidatable> { // (Swift)
  /* instance variables */
   token;
}

/* instance methods */
- (void)invalidate;
- (id)init;
@end

#endif /* _TtC18ActivityUIServices20CancellableAssertion_h */
