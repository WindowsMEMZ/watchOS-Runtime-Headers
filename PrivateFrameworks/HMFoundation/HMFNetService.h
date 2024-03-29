//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef HMFNetService_h
#define HMFNetService_h
@import Foundation;

#include "HMFObject.h"
#include "HMFLogging-Protocol.h"
#include "HMFNetAddress.h"
#include "NSNetServiceDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSNetService, NSString;
@protocol HMFNetServiceDelegate, OS_dispatch_queue;

@interface HMFNetService : HMFObject<HMFLogging, NSNetServiceDelegate> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) NSMutableArray *resolveBlocks;
@property (nonatomic) long long resolveState;
@property (nonatomic) long long resolveRunningState;
@property (readonly, nonatomic) NSNetService *internal;
@property BOOL publishing;
@property (weak) NSObject<HMFNetServiceDelegate> *delegate;
@property (readonly, copy) NSString *type;
@property (readonly, copy) NSString *name;
@property (readonly) unsigned long long port;
@property (readonly) BOOL resolved;
@property (readonly, copy) HMFNetAddress *hostName;
@property (readonly, copy) NSArray *addresses;
@property (readonly, copy) NSString *domain;
@property (readonly, copy) NSDictionary *TXTRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;
+ (id)errorFromNetServiceErrorDict:(id)dict;
+ (id)shortDescription;
+ (id)logCategory;

/* instance methods */
- (id)init;
- (id)initWithDomain:(id)domain type:(id)type name:(id)name;
- (id)initWithNetService:(id)service;
- (void)dealloc;
- (id)shortDescription;
- (id)descriptionWithPointer:(BOOL)pointer;
- (BOOL)isEqual:(id)equal;
- (void)startMonitoring;
- (BOOL)isResolved;
- (BOOL)isPublishing;
- (void)setHostname:(id)hostname;
- (void)notifyUpdatedAddresses:(id)addresses;
- (void)removeAllTXTRecordObjects;
- (void)updateTXTRecordWithData:(id)data;
- (id)bestAddress;
- (void)resolveWithTimeout:(double)timeout completionHandler:(id /* block */)handler;
- (void)confirmWithTimeout:(double)timeout completionHandler:(id /* block */)handler;
- (void)_reallyResolveWithTimeout:(double)timeout completionHandler:(id /* block */)handler;
- (id)logIdentifier;
- (void)netServiceWillResolve:(id)resolve;
- (void)netServiceDidResolveAddress:(id)address;
- (void)netService:(id)service didNotResolve:(id)resolve;
- (void)netServiceDidStop:(id)stop;
- (void)netService:(id)service didUpdateTXTRecordData:(id)data;
@end

#endif /* HMFNetService_h */
