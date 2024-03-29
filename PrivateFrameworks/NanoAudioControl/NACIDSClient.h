//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NACIDSClient_h
#define NACIDSClient_h
@import Foundation;

#include "IDSServiceDelegate-Protocol.h"
#include "NACIDSClientDelegate-Protocol.h"

@class IDSService, NSString;
@protocol OS_dispatch_queue;

@interface NACIDSClient : NSObject<IDSServiceDelegate> {
  /* instance variables */
  IDSService *_idsService;
  NSObject<OS_dispatch_queue> *_idsDispatchQueue;
  NSObject<OS_dispatch_queue> *_idsOutgoingQueue;
}

@property (weak, nonatomic) NSObject<NACIDSClientDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)beginObservingVolumeForTarget:(id)target;
- (void)endObservingVolumeForTarget:(id)target;
- (void)setVolumeValue:(float)value forTarget:(id)target;
- (void)setMuted:(BOOL)muted forTarget:(id)target;
- (void)setHapticIntensity:(float)intensity;
- (void)setProminentHapticEnabled:(BOOL)enabled;
- (void)setHapticState:(long long)state;
- (void)setSystemMuted:(BOOL)muted;
- (void)_handleVolumeValueDidChange:(id)change;
- (void)_handleVolumeControlAvailabilityDidChange:(id)change;
- (void)_handleMutedStateDidChange:(id)change;
- (void)_handleHapticIntensityDidChange:(id)change;
- (void)_handleEUVolumeLimitDidChange:(id)change;
- (void)_handleVolumeWarningDidChange:(id)change;
- (void)_handleAudioRoutesDidChange:(id)change;
- (void)_handleVolumeObservationCancelled:(id)cancelled;
- (void)_handleRouteObservationCancelled:(id)cancelled;
- (void)_handleSystemMutedStatedDidChange:(id)change;
- (void)_handleProminentHapticStateDidChange:(id)change;
- (void)_handleHapticStateDidChange:(id)change;
- (void)beginObservingListeningModesForTarget:(id)target;
- (void)endObservingListeningModesForTarget:(id)target;
- (void)setCurrentListeningMode:(id)mode forTarget:(id)target;
- (void)_handleListeningModesDidChange:(id)change;
- (void)beginObservingAudioRoutesForCategory:(id)category;
- (void)endObservingAudioRoutesForCategory:(id)category;
- (void)pickAudioRouteWithIdentifier:(id)identifier category:(id)category;
- (void)playTone:(id)tone;
- (void)_sendMessage:(id)message type:(long long)type timeout:(double)timeout queueOne:(id)one priority:(long long)priority;
- (void)service:(id)service account:(id)account identifier:(id)identifier didSendWithSuccess:(BOOL)success error:(id)error;
@end

#endif /* NACIDSClient_h */
