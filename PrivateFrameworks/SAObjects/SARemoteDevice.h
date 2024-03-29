//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SARemoteDevice_h
#define SARemoteDevice_h
@import Foundation;

#include "AceObject.h"
#include "SAAceSerializable-Protocol.h"

@class NSNumber, NSString;

@interface SARemoteDevice : AceObject<SAAceSerializable>

@property (copy, nonatomic) NSString *assistantId;
@property (copy, nonatomic) NSString *brandName;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *personalDomainsAuthenticationMode;
@property (copy, nonatomic) NSNumber *personalDomainsEnabled;
@property (nonatomic) BOOL siriEnabled;
@property (copy, nonatomic) NSString *userAgent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)remoteDevice;
+ (id)remoteDeviceWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SARemoteDevice_h */
