//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCConnectionIDS_h
#define VCConnectionIDS_h
@import Foundation;

#include "VCConnection.h"
#include "VCConnectionProtocol-Protocol.h"
#include "VCDatagramChannelIDS.h"

@class IDSDataChannelLinkContext, NSData, NSString, NSUUID;

@interface VCConnectionIDS : VCConnection<VCConnectionProtocol> {
  /* instance variables */
  IDSDataChannelLinkContext *_linkContext;
  int _localCellTech;
  int _remoteCellTech;
}

@property (readonly) unsigned int datagramChannelToken;
@property (readonly) VCDatagramChannelIDS *datagramChannel;
@property (readonly) NSString *relaySessionToken;
@property (readonly) NSData *sharedDigestKey;
@property BOOL isQUICPod;
@property (copy) NSString *relayProtocolStackDescription;
@property (copy) NSString *channelDataBaseProtocolStackDescription;
@property (readonly) long long linkConnectionType;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)VCConnectionIDS_RPS:(id)rps;
+ (id)VCConnectionIDS_CDBPS:(id)cdbps;
+ (unsigned int)worstCaseNetworkOverheadInBytesWithNumOfStreamId:(int)id isPriorityIncluded:(BOOL)included;

/* instance methods */
- (void)setUpVTable;
- (id)initWithLinkContext:(id)context dataChannelToken:(unsigned int)token;
- (void)dealloc;
- (id)connectionQRSessionID;
- (void)setCellularMTU:(int)mtu;
- (unsigned short)updateMaxConnectionMTU:(unsigned short)mtu;
- (BOOL)isOnSameQRSessionWithConnection:(id)connection;
- (BOOL)isOnSameInterfacesAndQRSessionWithConnection:(id)connection;
- (int)cellTechForSoMask:(unsigned int)mask fallbackTo:(int)to;
@end

#endif /* VCConnectionIDS_h */
