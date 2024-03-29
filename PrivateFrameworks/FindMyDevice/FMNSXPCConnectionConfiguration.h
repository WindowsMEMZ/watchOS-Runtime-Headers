//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 421.2.0.0.0
//
#ifndef FMNSXPCConnectionConfiguration_h
#define FMNSXPCConnectionConfiguration_h
@import Foundation;

#include "FMNSXPCConnectionConfigurable-Protocol.h"

@class NSString, NSXPCInterface;

@interface FMNSXPCConnectionConfiguration : NSObject<FMNSXPCConnectionConfigurable>

@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSXPCInterface *remoteInterface;
@property (retain, nonatomic) NSXPCInterface *exportedInterface;
@property (nonatomic) unsigned long long options;
@property (nonatomic) BOOL machService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)identityConfiguration;
+ (id)emergencyCallInfoPublisherConfiguration;
+ (id)userNotificationConfiguration;
+ (id)btDiscoveryConfiguration;
+ (id)fmipConfiguration;
+ (id)helperConfiguration;
+ (id)eraseDeviceServiceConfiguration;

/* instance methods */
@end

#endif /* FMNSXPCConnectionConfiguration_h */
