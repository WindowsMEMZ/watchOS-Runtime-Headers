//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIMoveEvent_h
#define UIMoveEvent_h
@import Foundation;

#include "UIEvent.h"

@interface UIMoveEvent : UIEvent {
  /* instance variables */
  long long _moveDirection;
  unsigned long long _focusHeading;
}

@property (nonatomic) long long _moveDirection;
@property (nonatomic) unsigned long long _focusHeading;

/* instance methods */
- (long long)type;
- (void)_sendEventToResponder:(id)responder;
- (void)_setMoveDirection:(long long)direction;
- (void)_setFocusHeading:(unsigned long long)heading;
@end

#endif /* UIMoveEvent_h */
