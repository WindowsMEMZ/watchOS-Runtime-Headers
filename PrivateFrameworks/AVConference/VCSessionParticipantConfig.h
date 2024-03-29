//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCSessionParticipantConfig_h
#define VCSessionParticipantConfig_h
@import Foundation;

#include "VCNetworkFeedbackController.h"
#include "VCSecurityKeyManager.h"
#include "VCSessionMediaNegotiator.h"

@class NSData, NSDictionary, NSString, VCAudioCaptionsCoordinator;
@protocol OS_nw_activity;

@interface VCSessionParticipantConfig : NSObject

@property (retain, nonatomic) NSData *participantData;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long idsParticipantID;
@property (nonatomic) BOOL audioEnabled;
@property (nonatomic) BOOL videoEnabled;
@property (nonatomic) BOOL screenEnabled;
@property (nonatomic) BOOL screenControlEnabled;
@property (nonatomic) BOOL frequencyMeteringEnabled;
@property (nonatomic) BOOL audioMuted;
@property (nonatomic) BOOL outOfProcessCodecsEnabled;
@property (nonatomic) float volume;
@property (nonatomic) float audioPosition;
@property (nonatomic) BOOL audioPaused;
@property (nonatomic) BOOL videoPaused;
@property (nonatomic) unsigned char videoQuality;
@property (nonatomic) unsigned int visibilityIndex;
@property (nonatomic) unsigned int prominenceIndex;
@property (retain, nonatomic) NSData *positionalInfo;
@property (nonatomic) void * spatialMetadata;
@property (nonatomic) struct __CFDictionary * spatialMetadataEntryMap;
@property (nonatomic) int processId;
@property (retain, nonatomic) VCSessionMediaNegotiator *mediaNegotiator;
@property (retain, nonatomic) VCSecurityKeyManager *securityKeyManager;
@property (retain, nonatomic) NSString *sessionUUID;
@property (retain, nonatomic) NSString *idsDestination;
@property (nonatomic) unsigned int transportSessionID;
@property (nonatomic) BOOL isGKVoiceChat;
@property (nonatomic) BOOL isLowLatencyAudio;
@property (nonatomic) long long sessionMode;
@property (nonatomic) BOOL isOneToOneModeEnabled;
@property (nonatomic) NSObject<OS_nw_activity> *nwActivity;
@property (retain, nonatomic) VCNetworkFeedbackController *networkFeedbackController;
@property (retain, nonatomic) NSDictionary *mediaStates;
@property (retain, nonatomic) VCAudioCaptionsCoordinator *captionsCoordinator;
@property (nonatomic) BOOL isServerRTxEnabled;
@property (nonatomic) BOOL isUplinkRetransmissionEnabled;

/* instance methods */
- (void)dealloc;
- (id)description;
- (void)cleanupNwActivity;
@end

#endif /* VCSessionParticipantConfig_h */
