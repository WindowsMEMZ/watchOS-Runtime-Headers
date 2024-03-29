//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLThermalXPCServer_h
#define CSLThermalXPCServer_h
@import Foundation;

#include "BSBaseXPCServer.h"
#include "CSLThermalTrapObserver-Protocol.h"

@class NSString;

@interface CSLThermalXPCServer : BSBaseXPCServer<CSLThermalTrapObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)queue_handleMessage:(id)message client:(id)client;
- (void)thermalController:(id)controller setTrapping:(BOOL)trapping;
@end

#endif /* CSLThermalXPCServer_h */
