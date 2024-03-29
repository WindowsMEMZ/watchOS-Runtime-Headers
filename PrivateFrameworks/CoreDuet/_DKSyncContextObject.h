//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _DKSyncContextObject_h
#define _DKSyncContextObject_h
@import Foundation;

#include "_DKSyncContext.h"

@interface _DKSyncContextObject : NSObject

@property (readonly, nonatomic) _DKSyncContext *context;

/* class methods */
+ (id)new;

/* instance methods */
- (id)init;
- (id)initWithContext:(id)context;
@end

#endif /* _DKSyncContextObject_h */
