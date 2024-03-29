//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REPipedLocationReceiver_Protocol_h
#define REPipedLocationReceiver_Protocol_h
@import Foundation;

#include "RESingleton.h"
#include "REPipedLocationDonor-Protocol.h"

@class CLLocation, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@protocol REPipedLocationReceiver <NSObject>
/* instance methods */
- (void)updateLocation:(id)location;
@end

#endif /* REPipedLocationReceiver_Protocol_h */
