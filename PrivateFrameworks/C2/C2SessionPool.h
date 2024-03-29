//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.0.0.0.0
//
#ifndef C2SessionPool_h
#define C2SessionPool_h
@import Foundation;

#include "C2RoutingTable.h"
#include "C2SessionDelegate-Protocol.h"
#include "C2SessionTLSCache.h"

@class NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface C2SessionPool : NSObject<C2SessionDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *underlyingDelegateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionCreation_queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cleanUp_queue;
@property (nonatomic) BOOL cleanUp_running;
@property (retain, nonatomic) C2RoutingTable *routingTable;
@property (retain, nonatomic) C2SessionTLSCache *sessionTLSCache;
@property (retain, nonatomic) NSMapTable *useCountByObject;
@property (retain, nonatomic) NSMutableDictionary *sessionGroupForSessionConfigurationName;
@property (nonatomic) BOOL testBehavior_disableAutomaticCleanup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)createDataTaskWithRequestIdentifer:(id)identifer request:(id)request options:(id)options delegate:(id)delegate sessionHandle:(id *)handle;
- (void)_unsafe_willCreate:(id)create;
- (void)_unsafe_didCreate:(id)create;
- (BOOL)_unsafe_isCreating:(id)creating;
- (void)_unsafe_removeSessionGroupIfEmpty:(id)empty;
- (void)_unsafe_removeSession:(id)session;
- (void)removeSession:(id)session;
- (BOOL)_cleanUp_job;
- (void)_cleanUp_schedule;
- (void)ensureCleanUpRunning;
- (BOOL)testBehavior_cleanUp;
- (void)C2Session:(id)session didBecomeInvalidWithError:(id)error;
- (void)C2Session:(id)session originalHost:(id)host updatedRoute:(id)route;
@end

#endif /* C2SessionPool_h */
