//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NACIDSServer_h
#define NACIDSServer_h
@import Foundation;

#include "IDSServiceDelegate-Protocol.h"
#include "MPAVRoutingControllerDelegate-Protocol.h"
#include "MPVolumeControllerDelegate-Protocol.h"
#include "NACEventThrottler.h"
#include "NACRunAssertion.h"
#include "NACVolumeControllerDelegate-Protocol.h"

@class IDSService, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface NACIDSServer : NSObject<NACVolumeControllerDelegate, IDSServiceDelegate, MPVolumeControllerDelegate, MPAVRoutingControllerDelegate> {
  /* instance variables */
  NACRunAssertion *_systemVolumeRunAssertion;
  NACRunAssertion *_proxyVolumeRunAssertion;
  NSMutableDictionary *_systemVolumeObservers;
  NSMutableDictionary *_proxyVolumeObservers;
  NSMutableDictionary *_routesObservers;
  NSMutableDictionary *_messageRecords;
  NSArray *_volumeAudioCategories;
  IDSService *_idsService;
  NSObject<OS_dispatch_queue> *_serialQueue;
  BOOL _shouldPickRouteAfterFetching;
  BOOL _shouldObserveSystemMutedState;
  BOOL _isSystemMuted;
  int _systemMuteToken;
  BOOL _shouldObserveHapticState;
  BOOL _prominentHapticEnabled;
  float _hapticIntensity;
  long long _hapticState;
  NACEventThrottler *_hapticThrottler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithVolumeAudioCategories:(id)categories;
- (void)dealloc;
- (void)beginObservingHapticState;
- (void)beginObservingSystemMutedState;
- (void)_handleBeginObservingVolume:(id)volume;
- (void)_handleEndObservingVolume:(id)volume;
- (void)_handleSetVolume:(id)volume;
- (void)_handleSetMuted:(id)muted;
- (void)_handleSetSystemMuted:(id)muted;
- (void)_handleSetProminentHapticEnabled:(id)enabled;
- (void)_handleSetHapticIntensity:(id)intensity;
- (void)_handleSetCurrentListeningMode:(id)mode;
- (void)_handleBeginObservingListeningModes:(id)modes;
- (void)_handleEndObservingListeningModes:(id)modes;
- (void)_handlePlayTone:(id)tone;
- (id)_nacVolumeControllerForTarget:(id)target createIfNeeded:(BOOL)needed;
- (void)_handleSetHapticState:(id)state;
- (void)_handleBeginObservingAudioRoutes:(id)routes;
- (void)_handleEndObservingAudioRoutes:(id)routes;
- (void)_handlePickAudioRoute:(id)route;
- (void)_handleBeginObservingSystemVolume;
- (void)_beginObservingSystemVolume;
- (void)_beginObservingHapticState;
- (void)_beginObservingSystemMutedState;
- (void)_updateSystemMutedState;
- (void)updateProminentHapticState;
- (void)_updateProminentHapticState;
- (void)_updateHapticState;
- (void)_handleBeginObservingProxyVolumeForTarget:(id)target;
- (void)_beginObservingProxyVolumeForTarget:(id)target withEndpointRoute:(id)route;
- (void)_sendCurrentObservingSystemVolumeValues;
- (void)_updateHapticIntensityValue;
- (void)_cancelSystemVolumeObservation;
- (void)_cancelProxyVolumeObservationForTarget:(id)target;
- (void)_cancelRouteObservationForCategory:(id)category;
- (void)volumeController:(id)controller volumeValueDidChange:(float)change;
- (void)volumeController:(id)controller volumeControlAvailableDidChange:(BOOL)change;
- (void)volumeController:(id)controller mutedStateDidChange:(BOOL)change;
- (void)volumeController:(id)controller EUVolumeLimitDidChange:(float)change;
- (void)volumeController:(id)controller volumeWarningStateDidChange:(long long)change;
- (id)_targetForVolumeController:(id)controller;
- (id)_targetForNACVolumeController:(id)controller;
- (void)routingControllerAvailableRoutesDidChange:(id)change;
- (void)_hapticIntensityDidChangeNotification:(id)notification;
- (void)volumeControllerDidUpdateAvailableListeningModes:(id)modes;
- (void)volumeControllerDidUpdateCurrentListeningMode:(id)mode;
- (void)volumeController:(id)controller didFailToSetCurrentListeningModeWithError:(id)error;
- (void)_sendVolumeValue:(float)value forTarget:(id)target;
- (void)_sendVolumeControlAvailability:(BOOL)availability forTarget:(id)target;
- (void)_sendEUVolumeLimit:(float)limit forTarget:(id)target;
- (void)_sendVolumeWarningEnabled:(BOOL)enabled volumeWarningState:(long long)state forTarget:(id)target;
- (void)_sendMutedState:(BOOL)state forTarget:(id)target;
- (void)_sendAvailableListeningModes:(id)modes currentListeningMode:(id)mode error:(id)error forTarget:(id)target;
- (void)_sendSystemMutedState:(BOOL)state;
- (void)_sendHapticState:(long long)state;
- (void)_sendMessage:(id)message type:(long long)type timeout:(double)timeout queueOne:(id)one retry:(BOOL)retry;
- (void)service:(id)service account:(id)account identifier:(id)identifier didSendWithSuccess:(BOOL)success error:(id)error;
- (void)_setRequestedVolumeAtLeastOnce;
- (BOOL)_hasRequestedVolumeAtLeastOnce;
- (BOOL)_shouldForceVolumeWarning;
@end

#endif /* NACIDSServer_h */
