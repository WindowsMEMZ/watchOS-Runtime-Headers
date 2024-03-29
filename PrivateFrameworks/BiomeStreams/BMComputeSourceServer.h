//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMComputeSourceServer_h
#define BMComputeSourceServer_h
@import Foundation;

#include "BMComputeSource-Protocol.h"
#include "NSXPCListenerDelegate-Protocol.h"

@class NSMapTable, NSString, NSXPCInterface, NSXPCListener;
@protocol OS_dispatch_queue;

@interface BMComputeSourceServer : NSObject<NSXPCListenerDelegate>

@property (readonly, nonatomic) NSXPCInterface *interface;
@property (readonly, nonatomic) NSMapTable *connections;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) NSObject<BMComputeSource> *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)new;

/* instance methods */
- (id)init;
- (id)initWithQueue:(id)queue machServiceName:(id)name source:(id)source;
- (id)initWithQueue:(id)queue source:(id)source listener:(id)listener;
- (void)activate;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
@end

#endif /* BMComputeSourceServer_h */
