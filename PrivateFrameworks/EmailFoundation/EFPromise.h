//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EFPromise_h
#define EFPromise_h
@import Foundation;

#include "EFCancelable-Protocol.h"
#include "EFFuture.h"

@class NSString;

@interface EFPromise : NSObject<EFCancelable>

@property (readonly) EFFuture *future;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)promise;

/* instance methods */
- (id)init;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)methodSignatureForSelector:(SEL)selector;
- (id)forwardingTargetForSelector:(SEL)selector;
- (void)cancel;
@end

#endif /* EFPromise_h */
