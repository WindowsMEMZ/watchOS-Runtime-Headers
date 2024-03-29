//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEIKEv2TrafficSelector_h
#define NEIKEv2TrafficSelector_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NWAddressEndpoint;

@interface NEIKEv2TrafficSelector : NSObject<NSCopying>

@property (retain) NWAddressEndpoint *startAddress;
@property (retain) NWAddressEndpoint *endAddress;
@property unsigned short startPort;
@property unsigned short endPort;
@property unsigned char ipProtocol;

/* class methods */
+ (id)copyAllIPv6;
+ (id)copyAllIPv4;

/* instance methods */
- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* NEIKEv2TrafficSelector_h */
