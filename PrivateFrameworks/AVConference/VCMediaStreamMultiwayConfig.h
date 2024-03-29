//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCMediaStreamMultiwayConfig_h
#define VCMediaStreamMultiwayConfig_h
@import Foundation;

@class NSArray, NSString;

@interface VCMediaStreamMultiwayConfig : NSObject {
  /* instance variables */
  struct { unsigned int x :1 maxNetworkBitrate; unsigned int x :1 maxMediaBitrate; unsigned int x :1 maxPacketsPerSecond; unsigned int x :1 idsStreamID; unsigned int x :1 qualityIndex; unsigned int x :1 maxIDSStreamIdCount; unsigned int x :1 repairedStreamID; unsigned int x :1 repairedMaxNetworkBitrate; } _has;
}

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *participantId;
@property (nonatomic) unsigned long long remoteIDSParticipantID;
@property (nonatomic) unsigned int ssrc;
@property (nonatomic) unsigned int maxNetworkBitrate;
@property (readonly, nonatomic) BOOL hasMaxNetworkBitrate;
@property (nonatomic) unsigned int maxMediaBitrate;
@property (readonly, nonatomic) BOOL hasMaxMediaBitrate;
@property (nonatomic) float maxPacketsPerSecond;
@property (readonly, nonatomic) BOOL hasMaxPacketsPerSecond;
@property (nonatomic) unsigned short idsStreamID;
@property (readonly, nonatomic) BOOL hasIdsStreamID;
@property (nonatomic) unsigned int qualityIndex;
@property (readonly, nonatomic) BOOL hasQualityIndex;
@property (nonatomic) unsigned int maxIDSStreamIdCount;
@property (readonly, nonatomic) BOOL hasMaxIDSStreamIdCount;
@property (nonatomic) unsigned short repairedStreamID;
@property (readonly, nonatomic) BOOL hasRepairedStreamID;
@property (nonatomic) unsigned int repairedMaxNetworkBitrate;
@property (readonly, nonatomic) BOOL hasRepairedMaxNetworkBitrate;
@property (nonatomic) BOOL startOnDemand;
@property (readonly, nonatomic) NSArray *streamIds;
@property (nonatomic) BOOL isOneToOne;
@property (nonatomic) BOOL shouldIgnoreRTPHeaderExtensions;
@property (nonatomic) unsigned int streamGroupID;
@property (nonatomic) unsigned int negotiationProtocolMask;
@property (nonatomic) int repairedFECLevel;

/* instance methods */
- (void)dealloc;
@end

#endif /* VCMediaStreamMultiwayConfig_h */
