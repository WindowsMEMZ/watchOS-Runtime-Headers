//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef _AFAudioSessionCoordinationSystemInfoMutation_h
#define _AFAudioSessionCoordinationSystemInfoMutation_h
@import Foundation;

#include "AFAudioSessionCoordinationSystemInfo.h"
#include "AFAudioSessionCoordinationSystemInfoMutating-Protocol.h"

@class NSString, NSUUID;

@interface _AFAudioSessionCoordinationSystemInfoMutation : NSObject<AFAudioSessionCoordinationSystemInfoMutating> {
  /* instance variables */
  AFAudioSessionCoordinationSystemInfo *_base;
  BOOL _isSupportedAndEnabled;
  NSString *_homeKitRoomName;
  NSUUID *_homeKitMediaSystemIdentifier;
  NSString *_mediaRemoteGroupIdentifier;
  NSString *_mediaRemoteRouteIdentifier;
  struct _mutationFlags { unsigned int x :1 isDirty; unsigned int x :1 hasIsSupportedAndEnabled; unsigned int x :1 hasHomeKitRoomName; unsigned int x :1 hasHomeKitMediaSystemIdentifier; unsigned int x :1 hasMediaRemoteGroupIdentifier; unsigned int x :1 hasMediaRemoteRouteIdentifier; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBase:(id)base;
- (BOOL)isDirty;
- (BOOL)getIsSupportedAndEnabled;
- (void)setIsSupportedAndEnabled:(BOOL)enabled;
- (id)getHomeKitRoomName;
- (void)setHomeKitRoomName:(id)name;
- (id)getHomeKitMediaSystemIdentifier;
- (void)setHomeKitMediaSystemIdentifier:(id)identifier;
- (id)getMediaRemoteGroupIdentifier;
- (void)setMediaRemoteGroupIdentifier:(id)identifier;
- (id)getMediaRemoteRouteIdentifier;
- (void)setMediaRemoteRouteIdentifier:(id)identifier;
@end

#endif /* _AFAudioSessionCoordinationSystemInfoMutation_h */
