//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTXPCControlService_h
#define DTXPCControlService_h
@import Foundation;

#include "DTProcessControlService.h"
#include "DTXPCControlServiceRequests-Protocol.h"

@class NSString;

@interface DTXPCControlService : DTProcessControlService<DTXPCControlServiceRequests>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)registerCapabilities:(id)capabilities;

/* instance methods */
- (id)initWithChannel:(id)channel;
- (id)launchSuspendedProcessWithDevicePath:(id)path bundleIdentifier:(id)identifier environment:(id)environment arguments:(id)arguments options:(id)options;
- (void)messageReceived:(id)received;
- (void)observeServicesWithIdentifier:(id)identifier requestingProcess:(int)process environment:(id)environment arguments:(id)arguments options:(id)options;
- (void)requestDebugLaunchOfDaemonWithSpecifier:(id)specifier programPath:(id)path environment:(id)environment arguments:(id)arguments options:(id)options;
- (void)stopObservationsForIdentifier:(id)identifier requestingProcess:(int)process;
@end

#endif /* DTXPCControlService_h */
