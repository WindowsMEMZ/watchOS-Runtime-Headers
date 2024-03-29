//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef _TtC8Carousel27MainUITransitionStatePolicy_h
#define _TtC8Carousel27MainUITransitionStatePolicy_h
@import Foundation;

#include "CSLMainUIPolicy-Protocol.h"

@interface Carousel.MainUITransitionStatePolicy : NSObject<CSLMainUIPolicy> { // (Swift)
  /* instance variables */
   _transitionState;
}

/* instance methods */
- (id)init;
- (void)willDirectTransition:(id)transition;
- (void)didSettle:(id)settle;
@end

#endif /* _TtC8Carousel27MainUITransitionStatePolicy_h */
