//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 8.0.0.0.0
//
#ifndef IPAppState_h
#define IPAppState_h
@import Foundation;

#include "IPInstallableState.h"
#include "IPAppStateSource.h"

@class LSApplicationIdentity;

@interface IPAppState : IPInstallableState

@property (readonly, @dynamic) IPAppStateSource *source;
@property (readonly) LSApplicationIdentity *launchServicesIdentity;

/* instance methods */
- (id)initWithAppStateSource:(id)source applicationIdentity:(id)identity isInstalling:(BOOL)installing;
@end

#endif /* IPAppState_h */
