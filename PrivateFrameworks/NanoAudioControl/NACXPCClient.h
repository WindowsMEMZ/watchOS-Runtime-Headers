//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NACXPCClient_h
#define NACXPCClient_h
@import Foundation;

#include "NACXPCInterface-Protocol.h"

@class NSMutableSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface NACXPCClient : NSObject<NACXPCInterface> {
  /* instance variables */
  NSXPCConnection *_xpcConnection;
  NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
  NSMutableSet *_routeObservingCategories;
  NSMutableSet *_volumeObservingTargets;
  NSMutableSet *_listeningModesObservingTargets;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedClient;

/* instance methods */
- (id)init;
- (void)_resumeVolumeObservingIfNecessary;
- (void)_resumeListeningModesObservingIfNecessary;
- (void)_resumeRouteObservingIfNecessary;
- (void)beginObservingVolumeForTarget:(id)target;
- (void)endObservingVolumeForTarget:(id)target;
- (void)beginObservingListeningModesForTarget:(id)target;
- (void)endObservingListeningModesForTarget:(id)target;
- (void)volumeValueForTarget:(id)target result:(id /* block */)result;
- (void)volumeControlAvailabilityForTarget:(id)target result:(id /* block */)result;
- (void)mutedStateForTarget:(id)target result:(id /* block */)result;
- (void)hapticState:(id /* block */)state;
- (void)hapticIntensity:(id /* block */)intensity;
- (void)prominentHapticEnabled:(id /* block */)enabled;
- (void)systemMutedState:(id /* block */)state;
- (void)EULimitForTarget:(id)target result:(id /* block */)result;
- (void)volumeWarningForTarget:(id)target result:(id /* block */)result;
- (void)setVolumeValue:(float)value forTarget:(id)target;
- (void)setMuted:(BOOL)muted forTarget:(id)target;
- (void)setHapticIntensity:(float)intensity;
- (void)setProminentHapticEnabled:(BOOL)enabled;
- (void)setHapticState:(long long)state;
- (void)setSystemMuted:(BOOL)muted;
- (void)availableListeningModesForTarget:(id)target result:(id /* block */)result;
- (void)currentListeningModeForTarget:(id)target result:(id /* block */)result;
- (void)setCurrentListeningMode:(id)mode forTarget:(id)target;
- (void)audioRoutesForCategory:(id)category result:(id /* block */)result;
- (void)beginObservingAudioRoutesForCategory:(id)category;
- (void)endObservingAudioRoutesForCategory:(id)category;
- (void)pickAudioRouteWithIdentifier:(id)identifier category:(id)category;
- (void)playAudioAndHapticPreview;
- (void)playDefaultHapticPreview;
- (void)playProminentHapticPreview;
- (void)_createConnection;
- (id)_proxy;
@end

#endif /* NACXPCClient_h */
