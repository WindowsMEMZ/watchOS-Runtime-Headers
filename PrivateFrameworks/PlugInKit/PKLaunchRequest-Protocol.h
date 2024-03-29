//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 473.0.1.0.0
//
#ifndef PKLaunchRequest_Protocol_h
#define PKLaunchRequest_Protocol_h
@import Foundation;

#include "PKLaunchRequest-Protocol.h"

@class NSString, NSUUID;
@protocol PKPersona;

@protocol PKLaunchRequest <NSObject>

@property (readonly, copy) NSUUID *uuid;
@property (readonly) NSObject<PKPersona> *launchPersona;

@end

#endif /* PKLaunchRequest_Protocol_h */
