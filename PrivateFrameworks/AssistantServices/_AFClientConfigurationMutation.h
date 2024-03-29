//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef _AFClientConfigurationMutation_h
#define _AFClientConfigurationMutation_h
@import Foundation;

#include "AFAccessibilityState.h"
#include "AFAudioPlaybackRequest.h"
#include "AFClientConfiguration.h"
#include "AFClientConfigurationMutating-Protocol.h"

@class NSDate, NSString;

@interface _AFClientConfigurationMutation : NSObject<AFClientConfigurationMutating> {
  /* instance variables */
  AFClientConfiguration *_base;
  AFAccessibilityState *_accessibilityState;
  long long _deviceRingerSwitchState;
  BOOL _isDeviceInCarDNDMode;
  BOOL _isDeviceInStarkMode;
  BOOL _isDeviceWatchAuthenticated;
  BOOL _areAnnouncementRequestsPermittedByPresentationWhileActive;
  float _outputVolume;
  AFAudioPlaybackRequest *_tapToSiriAudioPlaybackRequest;
  AFAudioPlaybackRequest *_twoShotAudioPlaybackRequest;
  NSDate *_deviceSetupFlowBeginDate;
  NSDate *_deviceSetupFlowEndDate;
  struct _mutationFlags { unsigned int x :1 isDirty; unsigned int x :1 hasAccessibilityState; unsigned int x :1 hasDeviceRingerSwitchState; unsigned int x :1 hasIsDeviceInCarDNDMode; unsigned int x :1 hasIsDeviceInStarkMode; unsigned int x :1 hasIsDeviceWatchAuthenticated; unsigned int x :1 hasAreAnnouncementRequestsPermittedByPresentationWhileActive; unsigned int x :1 hasOutputVolume; unsigned int x :1 hasTapToSiriAudioPlaybackRequest; unsigned int x :1 hasTwoShotAudioPlaybackRequest; unsigned int x :1 hasDeviceSetupFlowBeginDate; unsigned int x :1 hasDeviceSetupFlowEndDate; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBase:(id)base;
- (BOOL)isDirty;
- (id)getAccessibilityState;
- (void)setAccessibilityState:(id)state;
- (long long)getDeviceRingerSwitchState;
- (void)setDeviceRingerSwitchState:(long long)state;
- (BOOL)getIsDeviceInCarDNDMode;
- (void)setIsDeviceInCarDNDMode:(BOOL)dndmode;
- (BOOL)getIsDeviceInStarkMode;
- (void)setIsDeviceInStarkMode:(BOOL)mode;
- (BOOL)getIsDeviceWatchAuthenticated;
- (void)setIsDeviceWatchAuthenticated:(BOOL)authenticated;
- (BOOL)getAreAnnouncementRequestsPermittedByPresentationWhileActive;
- (void)setAreAnnouncementRequestsPermittedByPresentationWhileActive:(BOOL)active;
- (float)getOutputVolume;
- (void)setOutputVolume:(float)volume;
- (id)getTapToSiriAudioPlaybackRequest;
- (void)setTapToSiriAudioPlaybackRequest:(id)request;
- (id)getTwoShotAudioPlaybackRequest;
- (void)setTwoShotAudioPlaybackRequest:(id)request;
- (id)getDeviceSetupFlowBeginDate;
- (void)setDeviceSetupFlowBeginDate:(id)date;
- (id)getDeviceSetupFlowEndDate;
- (void)setDeviceSetupFlowEndDate:(id)date;
@end

#endif /* _AFClientConfigurationMutation_h */
