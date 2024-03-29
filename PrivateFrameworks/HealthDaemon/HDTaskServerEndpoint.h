//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDTaskServerEndpoint_h
#define HDTaskServerEndpoint_h
@import Foundation;

#include "HDProfile.h"
#include "HDTaskServer-Protocol.h"
#include "HDTaskServerDelegate-Protocol.h"
#include "HDTaskServerEndpointDelegate-Protocol.h"
#include "HDXPCListenerDelegate-Protocol.h"

@class HDXPCListener, HKHealthStoreConfiguration, HKTaskConfiguration, NSString, NSUUID, NSXPCListenerEndpoint;

@interface HDTaskServerEndpoint : NSObject<HDXPCListenerDelegate> {
  /* instance variables */
  HDXPCListener *_listener;
}

@property (readonly, nonatomic) Class taskServerClass;
@property (readonly, copy, nonatomic) NSUUID *taskUUID;
@property (readonly, copy, nonatomic) NSUUID *instanceUUID;
@property (readonly, copy, nonatomic) HKTaskConfiguration *taskConfiguration;
@property (readonly, copy, nonatomic) HKHealthStoreConfiguration *healthStoreConfiguration;
@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, weak, nonatomic) NSObject<HDTaskServer> *taskServer;
@property (weak, nonatomic) NSObject<HDTaskServerEndpointDelegate> *delegate;
@property (weak, nonatomic) NSObject<HDTaskServerDelegate> *taskServerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTaskServerClass:(Class)class taskConfiguration:(id)configuration healthStoreConfiguration:(id)configuration taskUUID:(id)uuid instanceUUID:(id)uuid profile:(id)profile connectionQueue:(id)queue;
- (void)dealloc;
- (void)resume;
- (void)invalidate;
- (id)exportObjectForListener:(id)listener client:(id)client error:(id *)error;
- (void)connectionConfiguredForListener:(id)listener client:(id)client exportedObject:(id)object;
- (void)connectionInvalidatedForListener:(id)listener client:(id)client exportedObject:(id)object;
@end

#endif /* HDTaskServerEndpoint_h */
