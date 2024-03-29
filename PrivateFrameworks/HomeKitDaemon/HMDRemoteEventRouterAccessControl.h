//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDRemoteEventRouterAccessControl_h
#define HMDRemoteEventRouterAccessControl_h
@import Foundation;

@interface HMDRemoteEventRouterAccessControl : NSObject

@property (readonly) unsigned long long allowedUserTypes;
@property (readonly) unsigned long long allowedDeviceTypes;

/* class methods */
+ (id)allowAllUsersAndDevicesAccessControl;
+ (id)allowSharedAdminsAndAllDevicesAccessControl;
+ (unsigned long long)remoteUserAccessControlFromNumber:(id)number;
+ (unsigned long long)remoteDeviceAccessControlFromNumber:(id)number;

/* instance methods */
- (id)initWithAllowedUserTypes:(unsigned long long)types deviceCategories:(unsigned long long)categories;
@end

#endif /* HMDRemoteEventRouterAccessControl_h */
