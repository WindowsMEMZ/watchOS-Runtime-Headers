//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITouchForwardingRecipient_h
#define _UITouchForwardingRecipient_h
@import Foundation;

#include "UIResponder.h"

@interface _UITouchForwardingRecipient : NSObject {
  /* instance variables */
  UIResponder *fromResponder;
  long long recordedPhase;
  long long autocompletedPhase;
}

@property (weak, nonatomic) UIResponder *responder;

/* instance methods */
- (id)description;
@end

#endif /* _UITouchForwardingRecipient_h */
