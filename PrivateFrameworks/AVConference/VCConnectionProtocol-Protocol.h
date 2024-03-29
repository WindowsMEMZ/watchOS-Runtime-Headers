//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCConnectionProtocol_Protocol_h
#define VCConnectionProtocol_Protocol_h
@import Foundation;

@protocol VCConnectionProtocol <NSObject>

@property (readonly) BOOL isLocalOn5G;
@property (readonly) BOOL isRemoteOn5G;
@property (readonly) BOOL isLocalDelegated;
@property (readonly) BOOL isRemoteDelegated;
@property (readonly) BOOL isVirtualRelayLink;
@property (readonly) BOOL isWifiToWifi;
@property (readonly) NSString *localInterfaceName;
@property int connectionMTU;
@property int maxConnectionMTU;
@property (readonly) BOOL isVPN;
@property (readonly) BOOL serverIsDegraded;
@property (readonly) NSUUID *connectionUUID;
@property (readonly) int localConnectionType;
@property (readonly) int remoteConnectionType;
@property (readonly) unsigned int type;
@property (readonly) NSString *localInterfaceTypeString;
@property (readonly) NSString *remoteInterfaceTypeString;
@property unsigned int uplinkAudioBitrateCapOneToOne;
@property unsigned int uplinkBitrateCapOneToOne;
@property unsigned int uplinkBitrateCap;
@property unsigned int downlinkBitrateCap;

/* instance methods */
- (void)setUpVTable;
- (long long)compare:(id)compare isPrimary:(BOOL)primary selectionPolicy:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)policy;
- (unsigned short)updateMaxConnectionMTU:(unsigned short)mtu;
@end

#endif /* VCConnectionProtocol_Protocol_h */
