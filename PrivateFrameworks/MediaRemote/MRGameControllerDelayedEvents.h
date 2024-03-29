//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRGameControllerDelayedEvents_h
#define MRGameControllerDelayedEvents_h
@import Foundation;

@class NSMutableDictionary;

@interface MRGameControllerDelayedEvents : NSObject {
  /* instance variables */
  NSMutableDictionary *_events;
}

/* instance methods */
- (id)eventForController:(unsigned long long)controller element:(int)element;
- (void)invokeEventsForController:(unsigned long long)controller beacuseElement:(int)element;
@end

#endif /* MRGameControllerDelayedEvents_h */
