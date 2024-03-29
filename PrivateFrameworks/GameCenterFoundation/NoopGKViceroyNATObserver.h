//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef NoopGKViceroyNATObserver_h
#define NoopGKViceroyNATObserver_h
@import Foundation;

#include "GKViceroyNATObserver-Protocol.h"

@interface NoopGKViceroyNATObserver : NSObject<GKViceroyNATObserver>

@property (readonly, nonatomic) unsigned long long currentNATType;

/* instance methods */
- (void)applySettingsAndAwaitReady:(id)ready;
- (void)getNATTypeWithForceRelay:(BOOL)relay withHandler:(id /* block */)handler;
@end

#endif /* NoopGKViceroyNATObserver_h */
