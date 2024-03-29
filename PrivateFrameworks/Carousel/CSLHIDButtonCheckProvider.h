//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLHIDButtonCheckProvider_h
#define CSLHIDButtonCheckProvider_h
@import Foundation;

#include "CSLButtonCheckProviderProtocol-Protocol.h"
#include "CSLHIDEventListener.h"

@interface CSLHIDButtonCheckProvider : NSObject<CSLButtonCheckProviderProtocol> {
  /* instance variables */
  CSLHIDEventListener *_hidEventListener;
  struct __IOHIDEvent * _hidKeyboardEventToMatch;
  id /* block */ _buttonEventBlock;
  unsigned int _usagePage;
  unsigned int _usage;
}

/* instance methods */
- (id)initWithUsagePage:(unsigned int)page usage:(unsigned int)usage;
- (id)init;
- (void)dealloc;
- (double)buttonHoldTime;
- (void)startupUsingEventQueue:(id)queue withCompletion:(id /* block */)completion;
- (void)startListeningForEventsWithBlock:(id /* block */)block;
- (void)stopListeningForEvents;
- (BOOL)isButtonDown;
@end

#endif /* CSLHIDButtonCheckProvider_h */
