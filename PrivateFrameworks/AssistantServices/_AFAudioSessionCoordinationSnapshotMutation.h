//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef _AFAudioSessionCoordinationSnapshotMutation_h
#define _AFAudioSessionCoordinationSnapshotMutation_h
@import Foundation;

#include "AFAudioSessionCoordinationDeviceInfo.h"
#include "AFAudioSessionCoordinationSnapshot.h"
#include "AFAudioSessionCoordinationSnapshotMutating-Protocol.h"

@class NSArray, NSDateInterval, NSString;

@interface _AFAudioSessionCoordinationSnapshotMutation : NSObject<AFAudioSessionCoordinationSnapshotMutating> {
  /* instance variables */
  AFAudioSessionCoordinationSnapshot *_base;
  NSDateInterval *_currentOrUpNextDateInterval;
  BOOL _isAudioSessionActive;
  NSArray *_localActiveAssertionContexts;
  NSArray *_localPendingAssertionContexts;
  NSArray *_remoteActiveAssertionContexts;
  NSArray *_remotePendingAssertionContexts;
  AFAudioSessionCoordinationDeviceInfo *_localDevice;
  NSArray *_remoteQualifiedInRangeDevices;
  NSArray *_remoteQualifiedOutOfRangeDevices;
  NSArray *_remoteDisqualifiedDevices;
  struct _mutationFlags { unsigned int x :1 isDirty; unsigned int x :1 hasCurrentOrUpNextDateInterval; unsigned int x :1 hasIsAudioSessionActive; unsigned int x :1 hasLocalActiveAssertionContexts; unsigned int x :1 hasLocalPendingAssertionContexts; unsigned int x :1 hasRemoteActiveAssertionContexts; unsigned int x :1 hasRemotePendingAssertionContexts; unsigned int x :1 hasLocalDevice; unsigned int x :1 hasRemoteQualifiedInRangeDevices; unsigned int x :1 hasRemoteQualifiedOutOfRangeDevices; unsigned int x :1 hasRemoteDisqualifiedDevices; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBase:(id)base;
- (BOOL)isDirty;
- (id)getCurrentOrUpNextDateInterval;
- (void)setCurrentOrUpNextDateInterval:(id)interval;
- (BOOL)getIsAudioSessionActive;
- (void)setIsAudioSessionActive:(BOOL)active;
- (id)getLocalActiveAssertionContexts;
- (void)setLocalActiveAssertionContexts:(id)contexts;
- (id)getLocalPendingAssertionContexts;
- (void)setLocalPendingAssertionContexts:(id)contexts;
- (id)getRemoteActiveAssertionContexts;
- (void)setRemoteActiveAssertionContexts:(id)contexts;
- (id)getRemotePendingAssertionContexts;
- (void)setRemotePendingAssertionContexts:(id)contexts;
- (id)getLocalDevice;
- (void)setLocalDevice:(id)device;
- (id)getRemoteQualifiedInRangeDevices;
- (void)setRemoteQualifiedInRangeDevices:(id)devices;
- (id)getRemoteQualifiedOutOfRangeDevices;
- (void)setRemoteQualifiedOutOfRangeDevices:(id)devices;
- (id)getRemoteDisqualifiedDevices;
- (void)setRemoteDisqualifiedDevices:(id)devices;
@end

#endif /* _AFAudioSessionCoordinationSnapshotMutation_h */
