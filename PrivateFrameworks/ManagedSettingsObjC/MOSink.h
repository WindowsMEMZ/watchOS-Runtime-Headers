//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 140.0.0.0.0
//
#ifndef MOSink_h
#define MOSink_h
@import Foundation;

#include "MOSubscriber.h"
#include "MOCancellable-Protocol.h"
#include "MOSubscription-Protocol.h"

@class NSObject, NSString;

@interface MOSink : MOSubscriber<MOCancellable>

@property (readonly, nonatomic) id /* block */ receiveCompletionBlock;
@property (readonly, nonatomic) id /* block */ receiveInputBlock;
@property (readonly, nonatomic) NSObject<MOSubscription> *subscription;
@property (readonly, nonatomic) BOOL active;
@property (readonly, nonatomic) NSObject *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCompletion:(id /* block */)completion receiveInput:(id /* block */)input;
- (void)dealloc;
- (void)receiveSubscription:(id)subscription;
- (unsigned long long)receiveInput:(id)input;
- (void)receiveCompletion:(id)completion;
- (void)cancel;
@end

#endif /* MOSink_h */
