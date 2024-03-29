//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSPXPCConnectionInfo_h
#define HKSPXPCConnectionInfo_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"

@class NSString, NSXPCInterface;

@interface HKSPXPCConnectionInfo : NSObject<BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *machServiceName;
@property (readonly, nonatomic) NSXPCInterface *remoteObjectInterface;
@property (readonly, nonatomic) id exportedObject;
@property (readonly, nonatomic) NSXPCInterface *exportedObjectInterface;
@property (readonly, copy, nonatomic) NSString *lifecycleNotification;
@property (readonly, copy, nonatomic) NSString *requiredEntitlement;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)infoForMachServiceName:(id)name remoteObjectInterface:(id)interface exportedObject:(id)object exportedObjectInterface:(id)interface lifecycleNotification:(id)notification requiredEntitlement:(id)entitlement options:(unsigned long long)options;

/* instance methods */
- (id)initWithMachServiceName:(id)name remoteObjectInterface:(id)interface exportedObject:(id)object exportedObjectInterface:(id)interface lifecycleNotification:(id)notification requiredEntitlement:(id)entitlement options:(unsigned long long)options;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* HKSPXPCConnectionInfo_h */
