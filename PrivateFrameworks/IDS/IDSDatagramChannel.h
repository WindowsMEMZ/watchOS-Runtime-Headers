//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSDatagramChannel_h
#define IDSDatagramChannel_h
@import Foundation;

#include "IDSDataChannelLinkContext.h"
#include "_IDSDatagramChannel.h"

@class NSArray;
@protocol OS_dispatch_source;

@interface IDSDatagramChannel : NSObject {
  /* instance variables */
  _IDSDatagramChannel *_internal;
  NSObject<OS_dispatch_source> *_statsTimer;
}

@property (readonly) NSArray *connectedLinks;
@property (readonly) IDSDataChannelLinkContext *defaultLink;

/* instance methods */
- (void)_startStatsTimer;
- (void)_stopStatsTimer;
- (id)_directConnectionsForLinkID:(char)id;
- (void)_setDirectConnections:(id)connections forLinkID:(char)id;
- (id)_directOrDaemonConnectionForLinkID:(char)id;
- (void)_removeDirectConnection:(id)connection;
- (id)_underlyingLinkContextForLinkID:(char)id;
- (void)_dumpLinkContextConnectionsInfo;
- (void)invalidateDirectConnections;
- (unsigned long long)_translateParticipantID:(unsigned long long)id forLinkID:(char)id;
- (void)_didReceivePacketOfSize:(unsigned long long)size linkType:(char)type linkContext:(id)context connectionInfo:(id)info;
- (void)_processIncomingDatagram:(const char *)datagram datagramSize:(unsigned int)size linkID:(char)id linkContext:(id)context;
- (void)_processIncomingDatagram:(const char *)datagram datagramSize:(unsigned int)size linkID:(char)id DSCP:(unsigned char)dscp linkContext:(id)context connectionInfo:(id)info;
- (id)createIfNecessaryDirectConnectionForLinkID:(char)id linkContext:(id)context;
- (id)_createIfNecessaryDirectConnectionForLinkID:(char)id linkContext:(id)context connection:(id)connection;
- (void)addDirectConnectionForLinkID:(char)id linkContext:(id)context;
- (void)removeDirectConnectionsForLinkID:(char)id;
- (BOOL)isDaemonConnection:(id)connection;
- (id)connectionForLinkID:(char)id;
- (void)_readFromDirectConnection:(id)connection linkID:(char)id linkContext:(id)context connectionInfo:(id)info;
- (struct { char * x0; unsigned long long x1; long long x2; long long x3; unsigned int x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; unsigned int x16; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6] long long x3; char x4[112] } x17; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6] long long x3; char x4[112] } x18; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6] long long x3; char x4[112] } x19; unsigned short x20; unsigned char x21; int x22; S]CBBBI} x23[8{?=*Si[12S]QCSCBBS{?=SSSSS}BBi[4] char x24; char x25; int x26; double x27; unsigned char x28[16] unsigned long long x29; unsigned long long x30; id x31; int x32; unsigned int x33; unsigned short x34; unsigned char x35[0] } *)_makeDirectPacketBufferFromDatagram:(const void *)datagram datagramSize:(unsigned int)size currentDatagramCount:(unsigned char)count totalDatagramCount:(unsigned char)count datagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; })info datagramOptions:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12] unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; unsigned char x13[16] BOOL x14; BOOL x15; } *)options linkContext:(id)context;
- (void)_sendStatsRequestViaDaemon;
- (void)_sendSequenceNumberMetadataToDaemon:(unsigned long long)daemon;
- (void)_writeToDirectConnection:(id)connection datagram:(const void *)datagram datagramSize:(unsigned int)size currentDatagramCount:(unsigned char)count totalDatagramCount:(unsigned char)count datagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; })info datagramOptions:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12] unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; unsigned char x13[16] BOOL x14; BOOL x15; } *)options completionHandler:(id /* block */)handler;
- (void)setLinkIDToParticipantMap:(id)map;
- (id)getNwProtocolMetaDataForTrafficClass:(unsigned short)class;
- (id)getContext;
- (id)getQueue;
- (id)getIDSDataChannelsQueue;
- (id)getDispatchDataForPacketBuffer:(struct { char * x0; unsigned long long x1; long long x2; long long x3; unsigned int x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; unsigned int x16; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6] long long x3; char x4[112] } x17; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6] long long x3; char x4[112] } x18; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6] long long x3; char x4[112] } x19; unsigned short x20; unsigned char x21; int x22; S]CBBBI} x23[8{?=*Si[12S]QCSCBBS{?=SSSSS}BBi[4] char x24; char x25; int x26; double x27; unsigned char x28[16] unsigned long long x29; unsigned long long x30; id x31; int x32; unsigned int x33; unsigned short x34; unsigned char x35[0] } *)buffer;
- (id)_linkContextsCopy;
- (void)_removeLinkContextWithID:(unsigned char)id;
- (void)_setLinkContext:(id)context forLinkID:(unsigned char)id;
- (id)_linkContextWithID:(unsigned char)id;
- (id)initWithSocketDescriptor:(int)descriptor;
- (id)initWithDestination:(id)destination options:(id)options;
- (id)cachedMetadata;
- (void)dealloc;
- (id)description;
- (unsigned long long)_logChecksum:(const void *)checksum length:(unsigned long long)length;
- (void)_logPendingSendingStats:(unsigned long long)stats;
- (void)_logSendingStats:(unsigned long long)stats;
- (void)_logReceivingStats:(unsigned long long)stats;
- (void)_logFinalStats;
- (int)underlyingFileDescriptor;
- (void)sendEventConnectedWithDummyLinkInfo;
- (void)removeIDSDataChannelLinkContext:(char)context linkUUID:(id)uuid reason:(unsigned char)reason;
- (void)addNewIDSDataChannelLinkWithAttributes:(char *)attributes linkAttributesLength:(unsigned short)length;
- (void)selectDefaultLink:(char)link;
- (void)sendMediaEncryptionInfoWithMKM:(id)mkm MKS:(id)mks MKI:(id)mki participantID:(unsigned long long)id isLocallyGenerated:(BOOL)generated encryptionSequenceNumber:(unsigned long long)number;
- (void)sendMediaMembershipChangedInfo:(unsigned char)info;
- (void)processMetadataForDatagram:(const char *)datagram size:(unsigned long long)size datagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; } *)info options:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12] unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; unsigned char x13[16] BOOL x14; BOOL x15; } *)options;
- (void)_addConnections:(id)connections toLinkContext:(id)context;
- (id)_connectionInfoForDictionary:(id)dictionary;
- (id)_extractparticipantIDToHashedIDMappingFromData:(id)data;
- (BOOL)processDatagram:(const char *)datagram datagramSize:(unsigned long long)size readHandler:(id /* block */)handler readHandlerWithOptions:(id /* block */)options;
- (void)handleIncomingDatagram:(const char *)datagram datagramSize:(unsigned int)size datagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; })info datagramOptions:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12] unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; unsigned char x13[16] BOOL x14; BOOL x15; } *)options;
- (void)readFromNWConnection:(id)nwconnection maximumDatagrams:(unsigned int)datagrams readHandler:(id /* block */)handler readHandlerWithOptions:(id /* block */)options;
- (void)readFromSocketDescriptorWithReadHandler:(id /* block */)handler readHandlerWithOptions:(id /* block */)options;
- (void)readDatagramWithCompletionHandler:(id /* block */)handler;
- (void)readDatagramsWithCompletionHandler:(id /* block */)handler;
- (void)close;
- (void)invalidate;
- (void)setHasMetadata:(BOOL)metadata;
- (void)startInternal;
- (void)start;
- (void)_writeToOSChannelDatagrams:(const void * *)datagrams datagramSizes:(unsigned int *)sizes datagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; } *)info datagramOptions:(struct  * *)options datagramCount:(int)count completionHandler:(id /* block */)handler;
- (struct { char * x0; unsigned long long x1; long long x2; long long x3; unsigned int x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; unsigned int x16; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6] long long x3; char x4[112] } x17; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6] long long x3; char x4[112] } x18; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6] long long x3; char x4[112] } x19; unsigned short x20; unsigned char x21; int x22; S]CBBBI} x23[8{?=*Si[12S]QCSCBBS{?=SSSSS}BBi[4] char x24; char x25; int x26; double x27; unsigned char x28[16] unsigned long long x29; unsigned long long x30; id x31; int x32; unsigned int x33; unsigned short x34; unsigned char x35[0] } *)_makePacketBufferFromDatagram:(const void *)datagram datagramSize:(unsigned int)size currentDatagramCount:(unsigned char)count totalDatagramCount:(unsigned char)count datagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; })info datagramOptions:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12] unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; unsigned char x13[16] BOOL x14; BOOL x15; } *)options;
- (void)_writeToNWConnection:(id)nwconnection datagram:(const void *)datagram datagramSize:(unsigned int)size currentDatagramCount:(unsigned char)count totalDatagramCount:(unsigned char)count datagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; })info datagramOptions:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12] unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; unsigned char x13[16] BOOL x14; BOOL x15; } *)options completionHandler:(id /* block */)handler;
- (void)_writeToNWConnectionArrayOfDatagrams:(const void * *)datagrams datagramSizes:(unsigned int *)sizes datagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; } *)info datagramOptions:(struct  * *)options datagramCount:(int)count completionHandler:(id /* block */)handler;
- (void)_writeToSocket:(int)socket datagrams:(const void * *)datagrams datagramSizes:(unsigned int *)sizes datagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; } *)info datagramOptions:(struct  * *)options datagramCount:(int)count completionHandler:(id /* block */)handler;
- (void)writeDatagrams:(const void * *)datagrams datagramsSize:(unsigned int *)size datagramsInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; } *)info datagramsCount:(int)count options:(struct  * *)options completionHandler:(id /* block */)handler;
- (void)writeArrayOfDatagrams:(const void * *)datagrams datagramSizes:(unsigned int *)sizes datagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; } *)info datagramOptions:(struct  * *)options datagramCount:(int)count completionHandler:(id /* block */)handler;
- (void)_writeDatagram:(const void *)datagram datagramSize:(unsigned int)size datagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; })info options:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12] unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; unsigned char x13[16] BOOL x14; BOOL x15; } *)options completionHandler:(id /* block */)handler;
- (void)writeDatagram:(const void *)datagram datagramSize:(unsigned int)size flags:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; })flags completionHandler:(id /* block */)handler;
- (void)writeDatagram:(const void *)datagram datagramSize:(unsigned int)size datagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; })info options:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12] unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; unsigned char x13[16] BOOL x14; BOOL x15; } *)options completionHandler:(id /* block */)handler;
- (void)setEventHandler:(id /* block */)handler;
- (void)setReadHandler:(id /* block */)handler;
- (void)setReadHandlerWithOptions:(id /* block */)options;
- (void)setWriteCompletionHandler:(id /* block */)handler;
- (void)readyToRead;
- (void)scheduleRead;
- (void)sendMetadata;
- (void)_buildPacketBufferMetaData:(struct { char * x0; unsigned long long x1; long long x2; long long x3; unsigned int x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; unsigned int x16; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6] long long x3; char x4[112] } x17; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6] long long x3; char x4[112] } x18; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6] long long x3; char x4[112] } x19; unsigned short x20; unsigned char x21; int x22; S]CBBBI} x23[8{?=*Si[12S]QCSCBBS{?=SSSSS}BBi[4] char x24; char x25; int x26; double x27; unsigned char x28[16] unsigned long long x29; unsigned long long x30; id x31; int x32; unsigned int x33; unsigned short x34; unsigned char x35[0] } *)data;
- (void)setChannelPreferences:(id)preferences;
- (struct { char * x0; unsigned long long x1; long long x2; long long x3; unsigned int x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; unsigned int x16; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6] long long x3; char x4[112] } x17; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6] long long x3; char x4[112] } x18; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6] long long x3; char x4[112] } x19; unsigned short x20; unsigned char x21; int x22; S]CBBBI} x23[8{?=*Si[12S]QCSCBBS{?=SSSSS}BBi[4] char x24; char x25; int x26; double x27; unsigned char x28[16] unsigned long long x29; unsigned long long x30; id x31; int x32; unsigned int x33; unsigned short x34; unsigned char x35[0] } *)_setWiFiAssist:(BOOL)assist;
- (void)setWiFiAssist:(BOOL)assist;
- (void)startActiveProbingWithOptions:(id)options;
- (void)stopActiveProbingWithOptions:(id)options;
- (void)flushLinkProbingStatusWithOptions:(id)options;
- (void)queryStatusWithOptions:(id)options;
- (void)setUPlusOneMode:(BOOL)mode isInitiator:(BOOL)initiator;
- (void)startMKMRecoveryForParticipantIDs:(id)ids;
- (void)requestSessionInfoWithOptions:(id)options;
- (void)requestStatsWithOptions:(id)options;
- (void)_reportDictionary:(id)dictionary forKey:(unsigned char)key;
- (void)reportMKIArrival:(id)mkiarrival isLocallyGenerated:(BOOL)generated;
- (void)_reportMKIArrival:(id)mkiarrival time:(id)time isLocallyGenerated:(BOOL)generated;
- (void)reportFirstIncomingPacketTimeForMKI:(id)mki;
- (void)_reportFirstIncomingPacketTimeForMKI:(id)mki time:(id)time;
- (void)reportFirstOutgoingPacketTimeForMKI:(id)mki;
- (void)_reportFirstOutgoingPacketTimeForMKI:(id)mki time:(id)time;
- (void)reportEvent:(id)event forLinkID:(unsigned char)id;
- (void)generateMetadataWithDatagramInfo:(struct { char x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned char x4; })info options:(struct { unsigned int x0; unsigned long long x1; unsigned short x2; unsigned char x3; char x4; unsigned short x5[12] unsigned char x6; unsigned short x7; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x8; double x9; unsigned long long x10; BOOL x11; unsigned long long x12; unsigned char x13[16] BOOL x14; BOOL x15; } *)options currentDatagramCount:(unsigned char)count totalDatagramCount:(unsigned char)count byteBuffer:(struct { char * x0; char * x1; char * x2; char * x3; BOOL x4; } *)buffer;
- (void)osChannelInfoLog;
- (void)setPreferredDataPathType:(long long)type;
@end

#endif /* IDSDatagramChannel_h */
