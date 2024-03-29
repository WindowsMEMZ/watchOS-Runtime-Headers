//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSQuickRelaySessionInfo_h
#define IDSQuickRelaySessionInfo_h
@import Foundation;

@class NSArray, NSData, NSDictionary, NSSet, NSString, NSUUID;

@interface IDSQuickRelaySessionInfo : NSObject {
  /* instance variables */
  struct sockaddr_storage { unsigned char ss_len; unsigned char ss_family; char x[6] __ss_pad1; long long __ss_align; char x[112] __ss_pad2; } _highPriorityServerAddress;
  struct sockaddr_storage { unsigned char ss_len; unsigned char ss_family; char x[6] __ss_pad1; long long __ss_align; char x[112] __ss_pad2; } _highPriorityServerAddressIPv6;
  BOOL _sessionIsNonUserParticipantInitiated;
}

@property (readonly) long long allocateType;
@property (readonly) double allocateTime;
@property (readonly) NSString *allocateRequestID;
@property (readonly) NSString *idsSessionID;
@property (readonly) NSString *relaySessionID;
@property (readonly) NSData *relaySessionToken;
@property (readonly) NSData *relaySessionKey;
@property (readonly) NSData *softwareData;
@property (readonly) unsigned char protocolVersion;
@property (readonly) long long relayServerProviderType;
@property (readonly) NSString *reportingDataBlob;
@property (readonly) unsigned long long participantID;
@property (readonly) NSArray *allParticipantIDs;
@property (readonly) BOOL isInitiator;
@property (readonly) long long linkProtocol;
@property (readonly) unsigned char linkSuggestion;
@property (readonly) unsigned char linkScore;
@property (readonly) BOOL uplinkNackDisabled;
@property (readonly) BOOL isPseudoParticipant;
@property (readonly) BOOL h2FallbackDisabled;
@property (readonly) BOOL transportLayerEncryptionDisabled;
@property (readonly) NSDictionary *qrSessionExperiments;
@property (readonly) BOOL sessionIsUserParticipantInitiated;
@property (readonly) NSString *pskTransportParameters;
@property (readonly) NSString *pskH3Settings;
@property (readonly) BOOL isInternal;
@property (readonly) const struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6] long long x3; char x4[112] } * serverAddress;
@property (readonly) const struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6] long long x3; char x4[112] } * serverAddressIPv6;
@property (readonly) NSUUID *defaultDeviceLocalCBUUID;
@property (readonly) NSUUID *defaultDeviceRemoteCBUUID;
@property (readonly) NSString *groupID;
@property (readonly) NSString *stableGroupID;
@property (readonly) NSArray *publishedStreams;
@property (readonly) NSArray *subscribedStreams;
@property (readonly) unsigned int generationCounter;
@property (readonly) unsigned char maxConcurrentStreams;
@property (readonly) NSData *avcDataBlob;
@property (readonly) unsigned char ipPreference;
@property (readonly) NSSet *initialServerDesiredMaterial;
@property (readonly) id /* block */ initialServerDesiredMaterialSigner;

/* instance methods */
- (const struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6] long long x3; char x4[112] } *)highPriorityServerAddress;
- (const struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6] long long x3; char x4[112] } *)highPriorityServerAddressIPv6;
- (long long)parseSessionInfo:(id)info;
@end

#endif /* IDSQuickRelaySessionInfo_h */
