//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPPhoneReadyProvider_h
#define HDSPPhoneReadyProvider_h
@import Foundation;

#include "HDSPEnvironment.h"
#include "HDSPEnvironmentAware-Protocol.h"
#include "HDSPSpringboardMonitor.h"
#include "HDSPSpringboardObserver-Protocol.h"
#include "HDSPSystemReadyDelegate-Protocol.h"
#include "HDSPSystemReadyProvider-Protocol.h"

@class NSString;

@interface HDSPPhoneReadyProvider : NSObject<HDSPSpringboardObserver, HDSPSystemReadyProvider, HDSPEnvironmentAware>

@property (readonly, nonatomic) HDSPSpringboardMonitor *springboardMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isSystemReady;
@property (weak, nonatomic) NSObject<HDSPSystemReadyDelegate> *delegate;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

/* instance methods */
- (id)initWithEnvironment:(id)environment;
- (void)springboardDidStart;
@end

#endif /* HDSPPhoneReadyProvider_h */
