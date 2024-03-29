//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMConfigurationSubscriberService_h
#define RMConfigurationSubscriberService_h
@import Foundation;

#include "RMConfigurationSubscriberClient.h"
#include "RMConfigurationSubscriberXPCService-Protocol.h"

@class NSArray;

@interface RMConfigurationSubscriberService : RMConfigurationSubscriberClient<RMConfigurationSubscriberXPCService>

@property (readonly, nonatomic) NSArray *configurationTypes;
@property (readonly, nonatomic) NSArray *statusKeys;
@property (readonly, nonatomic) BOOL hasServiceEntitlement;

/* class methods */
+ (id)newConfigurationSubscriberServiceWithXPCConnection:(id)xpcconnection;

/* instance methods */
- (id)initWithXPCConnection:(id)xpcconnection;
- (void)fetchThenApplyConfigurationsWithScope:(long long)scope completionHandler:(id /* block */)handler;
- (void)fetchThenUpdateConfigurationUIsWithScope:(long long)scope completionHandler:(id /* block */)handler;
- (void)publishStatusKeys:(id)keys storeIdentifier:(id)identifier scope:(long long)scope completionHandler:(id /* block */)handler;
@end

#endif /* RMConfigurationSubscriberService_h */
