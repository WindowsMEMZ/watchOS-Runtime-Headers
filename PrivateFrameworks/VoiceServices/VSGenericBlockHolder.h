//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef VSGenericBlockHolder_h
#define VSGenericBlockHolder_h
@import Foundation;

#include "VSGenericUpdate-Protocol.h"

@class NSString;

@interface VSGenericBlockHolder : NSObject<VSGenericUpdate> {
  /* instance variables */
  id /* block */ _block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBlock:(id /* block */)block;
- (void)invokeUpdateWithObject:(id)object;
@end

#endif /* VSGenericBlockHolder_h */
