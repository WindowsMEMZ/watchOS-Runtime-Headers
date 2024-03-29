//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 162.13.0.0.0
//
#ifndef SNBooleanCancellable_h
#define SNBooleanCancellable_h
@import Foundation;

#include "SNCancellable-Protocol.h"

@class NSString;

@interface SNBooleanCancellable : NSObject<SNCancellable> {
  /* instance variables */
  BOOL _isCancelled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)cancel;
@end

#endif /* SNBooleanCancellable_h */
