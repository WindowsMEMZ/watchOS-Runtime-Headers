//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef _EXQueryController_h
#define _EXQueryController_h
@import Foundation;

#include "_EXActiveQueryObserver-Protocol.h"
#include "_EXQueryControllerDelegate-Protocol.h"
#include "_EXServiceClientObserver-Protocol.h"

@class NSArray, NSOrderedSet, NSString;
@protocol OS_dispatch_queue;

@interface _EXQueryController : NSObject<_EXServiceClientObserver, _EXActiveQueryObserver>

@property (readonly) NSArray *extensions;
@property (retain, nonatomic) NSOrderedSet *internalExtensions;
@property (nonatomic) unsigned long long unelectedCount;
@property (@dynamic, nonatomic) struct os_unfair_lock_s { unsigned int x0; } * extensionsLock;
@property (readonly) NSObject<OS_dispatch_queue> *notificationQueue;
@property (weak) NSObject<_EXQueryControllerDelegate> *delegate;
@property (readonly) NSArray *extensionIdentities;
@property (readonly, copy) NSArray *queries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)asyncQueryQueue;
+ (id)executeQuery:(id)query;
+ (id)executeQueries:(id)queries;
+ (void)executeQuery:(id)query completionHandler:(id /* block */)handler;
+ (void)executeQueries:(id)queries completionHandler:(id /* block */)handler;

/* instance methods */
- (id)initWithQueries:(id)queries delegate:(id)delegate;
- (id)initWithQueries:(id)queries;
- (void)dealloc;
- (void)resume;
- (void)suspend;
- (void)query:(id)query resultDidUpdate:(id)update;
- (void)resultDidUpdate:(id)update;
@end

#endif /* _EXQueryController_h */
