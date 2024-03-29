//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3762.60.29.0.0
//
#ifndef NWRemotePacketProxy_h
#define NWRemotePacketProxy_h
@import Foundation;

@class NSMutableArray;
@protocol NWRemotePacketProxyDelegate;

@interface NWRemotePacketProxy : NSObject

@property (weak) NSObject<NWRemotePacketProxyDelegate> *delegate;
@property (retain) NSMutableArray *writeRequests;
@property struct nw_protocol { unsigned char x0[16] struct nw_protocol_identifier * x1; struct nw_protocol_callbacks * x2; struct nw_protocol * x3; void * x4; struct nw_protocol * x5; void * x6; } * packetProtocol;
@property struct nw_protocol { unsigned char x0[16] struct nw_protocol_identifier * x1; struct nw_protocol_callbacks * x2; struct nw_protocol * x3; void * x4; struct nw_protocol * x5; void * x6; } * defaultOutputHandler;
@property struct nw_hash_table * packetHashTable;
@property (readonly, nonatomic) struct nw_protocol { unsigned char x0[16] struct nw_protocol_identifier * x1; struct nw_protocol_callbacks * x2; struct nw_protocol * x3; void * x4; struct nw_protocol * x5; void * x6; } * protocol;
@property (nonatomic) unsigned int receiveWindowPacketCount;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)dealloc;
- (struct nw_protocol { unsigned char x0[16] struct nw_protocol_identifier * x1; struct nw_protocol_callbacks * x2; struct nw_protocol * x3; void * x4; struct nw_protocol * x5; void * x6; } *)outputHandlerForPacket:(id)packet inbound:(BOOL)inbound;
- (void)setDefaultOutputProtocolHandler:(struct nw_protocol { unsigned char x0[16] struct nw_protocol_identifier * x1; struct nw_protocol_callbacks * x2; struct nw_protocol * x3; void * x4; struct nw_protocol * x5; void * x6; } *)handler;
- (void)setOutputProtocolHandler:(struct nw_protocol { unsigned char x0[16] struct nw_protocol_identifier * x1; struct nw_protocol_callbacks * x2; struct nw_protocol * x3; void * x4; struct nw_protocol * x5; void * x6; } *)handler local:(id)local remote:(id)remote ipProtocol:(unsigned char)protocol;
- (BOOL)receiveRemotePacket:(id)packet;
@end

#endif /* NWRemotePacketProxy_h */
