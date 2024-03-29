//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HDProcessQueryCollection_h
#define _HDProcessQueryCollection_h
@import Foundation;

#include "HDQueryServerClientState.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _HDProcessQueryCollection : NSObject {
  /* instance variables */
  NSMutableDictionary *_queryServersByUUID;
  NSObject<OS_dispatch_source> *_timer;
  NSObject<OS_dispatch_queue> *_queue;
  NSString *_processBundleIdentifier;
  HDQueryServerClientState *_clientState;
}

/* instance methods */
@end

#endif /* _HDProcessQueryCollection_h */
