//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SARemotePlaybackDevice_h
#define SARemotePlaybackDevice_h
@import Foundation;

#include "SARemoteDevice.h"
#include "SABackgroundContextObject-Protocol.h"

@class NSDictionary, NSString;

@interface SARemotePlaybackDevice : SARemoteDevice<SABackgroundContextObject>

@property (copy, nonatomic) NSString *airPlayRouteId;
@property (copy, nonatomic) NSString *entitlementKey;
@property (copy, nonatomic) NSString *hashedRouteId;
@property (copy, nonatomic) NSString *storefront;
@property (copy, nonatomic) NSString *userToken;
@property (copy, nonatomic) NSDictionary *utsRequiredRequestKeyValuePairs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)remotePlaybackDevice;
+ (id)remotePlaybackDeviceWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SARemotePlaybackDevice_h */
