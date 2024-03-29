//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 406.1.12.0.0
//
#ifndef HUNearbyListenerHelper_h
#define HUNearbyListenerHelper_h
@import Foundation;

#include "HUNearbyController.h"

@class NSMutableDictionary;

@interface HUNearbyListenerHelper : NSObject {
  /* instance variables */
  id _listenerAddress;
  HUNearbyController *_delegate;
  NSMutableDictionary *_keys;
}

/* instance methods */
- (id)initWithListenerAddress:(id)address andDelegate:(id)delegate;
- (void)addKey:(id)key forDomain:(id)domain;
- (void)dealloc;
@end

#endif /* HUNearbyListenerHelper_h */
