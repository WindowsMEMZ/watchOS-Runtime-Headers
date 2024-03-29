//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef HMFNetworkService_h
#define HMFNetworkService_h
@import Foundation;

#include "HMFObject.h"
#include "HMFNetworkServiceInfo.h"

@class NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_nw_connection;

@interface HMFNetworkService : HMFObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableArray *ipAddresses;
@property (retain, nonatomic) NSObject<OS_nw_connection> *nwConnection;
@property (readonly, nonatomic) HMFNetworkServiceInfo *serviceInfo;
@property (readonly, nonatomic) NSString *host;
@property (readonly, nonatomic) NSString *hostName;
@property (readonly, nonatomic) unsigned short port;
@property (readonly, nonatomic) NSArray *addresses;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithTXTRecords:(id)txtrecords browseResult:(id)result queue:(id)queue;
- (id)initWithServiceInfo:(id)info port:(unsigned short)port queue:(id)queue;
- (BOOL)isEqual:(id)equal;
- (void)invalidate;
- (void)dealloc;
- (id)resolveAddressWithAddressType:(unsigned long long)type timeout:(double)timeout receivedDataHandler:(id /* block */)handler;
- (void)updateWithService:(id)service;
- (id)_connectionWithPromise:(id)promise parameters:(id)parameters receivedDataHandler:(id /* block */)handler;
- (BOOL)_updateDeviceWithPath:(id)path;
- (id)description;
- (id)shortDescription;
- (id)logIdentifier;
@end

#endif /* HMFNetworkService_h */
