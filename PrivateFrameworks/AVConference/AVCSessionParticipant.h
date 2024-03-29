//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef AVCSessionParticipant_h
#define AVCSessionParticipant_h
@import Foundation;

#include "AVCSessionParticipantControlProtocol-Protocol.h"
#include "AVCSessionParticipantDelegate-Protocol.h"
#include "VCPositionalInfo.h"
#include "VCXPCClientShared.h"

@class NSData, NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface AVCSessionParticipant : NSObject<AVCSessionParticipantControlProtocol> {
  /* instance variables */
  unsigned long long _idsParticipantID;
  NSData *_participantData;
  VCXPCClientShared *_connection;
  NSDictionary *_streamGroupIDToStreamTokenMap;
  NSMutableDictionary *_participantConfig;
  NSMutableDictionary *_mediaStates;
  NSDictionary *_mediaTypeToSpatialSourceIDMap;
  struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } _mediaStateMutex;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateNotificationQueue;
@property (nonatomic) BOOL remoteScreenEnabled;
@property (nonatomic) long long videoToken;
@property (nonatomic) long long screenToken;
@property (retain, nonatomic) VCXPCClientShared *sharedXPCConnection;
@property (readonly, nonatomic) NSDictionary *config;
@property (nonatomic) BOOL configurationInProgress;
@property (nonatomic) BOOL hasPendingChanges;
@property (nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (nonatomic) NSObject<AVCSessionParticipantDelegate> *delegate;
@property (nonatomic) struct tagAVCPositionalInfo { unsigned int x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; double x4; } videoPositionalInfo;
@property (readonly, nonatomic) unsigned long long spatialAudioSourceID;
@property (nonatomic) unsigned char videoQuality;
@property (nonatomic) unsigned int visibilityIndex;
@property (nonatomic) unsigned int prominenceIndex;
@property (readonly, nonatomic) unsigned long long participantID;
@property (nonatomic) BOOL screenControlEnabled;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSData *negotiationData;
@property (nonatomic) BOOL audioMuted;
@property (nonatomic) BOOL audioEnabled;
@property (nonatomic) BOOL videoEnabled;
@property (nonatomic) BOOL screenEnabled;
@property (nonatomic) BOOL audioPaused;
@property (nonatomic) BOOL videoPaused;
@property (nonatomic) BOOL oneToOneEnabled;
@property (nonatomic) float volume;
@property (readonly, nonatomic) NSData *frequencyLevels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)isMediaStateAPISupportedForMediaType:(unsigned int)type;
+ (id)loopbackNegotiationDataWithData:(id)data;
+ (unsigned int)defaultStateForMediaType:(unsigned int)type isLocal:(BOOL)local;
+ (id)archiveMediaStates:(id)states;
+ (id)unarchiveMediaStatesWithData:(id)data;

/* instance methods */
- (id)initWithParticipantID:(unsigned long long)id data:(id)data delegate:(id)delegate queue:(id)queue;
- (void)dealloc;
- (void)setMediaState:(unsigned int)state forMediaType:(unsigned int)type;
- (unsigned int)mediaStateForMediaType:(unsigned int)type;
- (BOOL)isAudioEnabled;
- (BOOL)isVideoEnabled;
- (BOOL)isScreenEnabled;
- (BOOL)isAudioPaused;
- (BOOL)isVideoPaused;
- (void)dispatchedSetMediaState:(unsigned int)state forMediaType:(unsigned int)type;
- (void)dispatchedLegacySetMediaState:(unsigned int)state forMediaType:(unsigned int)type;
- (void)completeSetMediaState:(unsigned int)state forMediaType:(unsigned int)type didSucceed:(BOOL)succeed error:(id)error;
- (BOOL)generateMediaStateEntryForMediaType:(unsigned int)type;
- (void)printMediaStates;
- (void)storeMediaState:(unsigned int)state forMediaType:(unsigned int)type;
- (void)handleLegacyTransitionsForMediaType:(unsigned int)type mediaState:(unsigned int)state previousState:(unsigned int)state didSucceed:(BOOL)succeed error:(id)error;
- (void)stateTransitionForMediaType:(unsigned int)type mediaState:(unsigned int)state previousState:(unsigned int)state didSucceed:(BOOL)succeed error:(id)error;
- (void)setMediaType:(unsigned int)type enabled:(BOOL)enabled mediaString:(const char *)string xpcMessageKey:(char *)key xpcOperationKey:(id)key completionBlock:(id /* block */)block;
- (void)setMediaType:(unsigned int)type paused:(BOOL)paused mediaString:(const char *)string xpcMessageKey:(char *)key xpcOperationKey:(id)key completionBlock:(id /* block */)block;
- (BOOL)isEnabledMediaType:(unsigned int)type;
- (BOOL)isPausedMediaType:(unsigned int)type;
- (void)dispatchedCompleteAudioEnabled:(BOOL)enabled didSucceed:(BOOL)succeed error:(id)error;
- (void)completeAudioEnabled:(BOOL)enabled didSucceed:(BOOL)succeed error:(id)error;
- (void)dispatchedCompleteAudioPaused:(BOOL)paused didSucceed:(BOOL)succeed error:(id)error;
- (void)completeAudioPaused:(BOOL)paused didSucceed:(BOOL)succeed error:(id)error;
- (void)dispatchedCompleteVideoEnabled:(BOOL)enabled didSucceed:(BOOL)succeed error:(id)error;
- (void)completeVideoEnabled:(BOOL)enabled didSucceed:(BOOL)succeed error:(id)error;
- (void)dispatchedCompleteVideoPaused:(BOOL)paused didSucceed:(BOOL)succeed error:(id)error;
- (void)completeVideoPaused:(BOOL)paused didSucceed:(BOOL)succeed error:(id)error;
- (void)dispatchedCompleteScreenEnabled:(BOOL)enabled didSucceed:(BOOL)succeed error:(id)error;
- (void)completeScreenEnabled:(BOOL)enabled didSucceed:(BOOL)succeed error:(id)error;
- (BOOL)isConnectedToSession;
- (unsigned int)dispatchedMediaStateForMediaType:(unsigned int)type;
- (void)setStreamTokens:(id)tokens;
- (void)setMediaTypeToSpatialSourceIDMap:(id)idmap;
- (long long)streamTokenForStreamGroupID:(unsigned int)id;
- (unsigned long long)spatialAudioSourceIDForMediaType:(unsigned int)type;
- (id)newNSErrorWithErrorDictionary:(id)dictionary;
- (void)registerBlocksForNotifications;
- (void)deregisterFromNotifications;
- (void)setupNotificationQueue:(id)queue;
- (BOOL)setupMediaStates;
- (void)setupConfig;
- (void)updateLegacyStates;
- (void)appendConfigurationToXPCConfiguration:(id)xpcconfiguration;
- (BOOL)isAudioMuted;
- (BOOL)isOneToOneEnabled;
- (BOOL)isScreenControlEnabled;
@end

#endif /* AVCSessionParticipant_h */
