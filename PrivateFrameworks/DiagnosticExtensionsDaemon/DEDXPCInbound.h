//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 170.2.3.0.0
//
#ifndef DEDXPCInbound_h
#define DEDXPCInbound_h
@import Foundation;

#include "DEDXPCInboundDelegate-Protocol.h"
#include "DEDXPCProtocol-Protocol.h"

@class NSNumber, NSString;
@protocol OS_os_log;

@interface DEDXPCInbound : NSObject<DEDXPCProtocol>

@property (retain) NSObject<OS_os_log> *log;
@property (weak) NSObject<DEDXPCInboundDelegate> *delegate;
@property (retain) NSNumber *senderPid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate senderPid:(id)pid;
- (void)xpc_ping;
- (void)xpc_pong;
- (void)xpc_discoverAllAvailableDevices;
- (void)xpc_stopDeviceDiscovery;
- (void)xpc_didDiscoverDevices:(id)devices;
- (void)xpc_gotDeviceUpdate:(id)update;
- (void)xpc_startPairSetupForDevice:(id)device;
- (void)xpc_promptPINForDevice:(id)device;
- (void)xpc_tryPIN:(id)pin forDevice:(id)device;
- (void)xpc_successPINForDevice:(id)device;
- (void)xpc_startBugSessionWithIdentifier:(id)identifier configuration:(id)configuration caller:(id)caller target:(id)target;
- (void)xpc_didStartBugSessionWithInfo:(id)info;
- (void)xpc_hasActiveSession:(id)session;
- (void)xpc_hasActiveSessionReply:(id)reply isActive:(BOOL)active;
- (void)xpc_didCancelSession:(id)session;
- (void)xpc_listClientXPCConnections;
- (void)xpc_listClientXPCConnectionsReply:(id)reply;
- (void)xpc_forceRemoveNotificationOfType:(long long)type identifier:(id)identifier hostIdentifier:(id)identifier;
- (void)xpc_pingSession:(id)session;
- (void)xpc_pongSession:(id)session;
- (void)xpc_listAvailableExtensionsForSession:(id)session;
- (void)xpc_deviceSupportsDiagnosticExtensions:(id)extensions session:(id)session;
- (void)xpc_startDiagnosticWithIdentifier:(id)identifier parameters:(id)parameters session:(id)session;
- (void)xpc_startDiagnosticWithIdentifier:(id)identifier parameters:(id)parameters deferRunUntil:(id)until session:(id)session;
- (void)xpc_finishedDiagnosticWithIdentifier:(id)identifier result:(id)result session:(id)session;
- (void)xpc_terminateExtension:(id)extension info:(id)info session:(id)session;
- (void)xpc_getSessionStateWithSession:(id)session;
- (void)xpc_didGetState:(long long)state info:(id)info sessionID:(id)id;
- (void)xpc_getSessionStatusWithSession:(id)session;
- (void)xpc_syncSessionStatusWithSession:(id)session;
- (void)xpc_hasCollected:(id)collected isCollecting:(id)collecting inSession:(id)session;
- (void)xpc_hasCollected:(id)collected isCollecting:(id)collecting withIdentifiers:(id)identifiers inSession:(id)session;
- (void)xpc_adoptFiles:(id)files forSession:(id)session;
- (void)xpc_didAdoptFilesWithError:(id)error forSession:(id)session;
- (void)xpc_uploadProgress:(unsigned long long)progress total:(long long)total session:(id)session;
- (void)xpc_compressionProgress:(unsigned long long)progress total:(unsigned long long)total session:(id)session;
- (void)xpc_commitSession:(id)session;
- (void)xpc_didCommitSession:(id)session;
- (void)xpc_cancelSession:(id)session;
- (void)xpc_notifySession:(id)session;
- (void)xpc_cancelNotifySession:(id)session;
- (void)xpc_addData:(id)data withFilename:(id)filename forSession:(id)session;
- (void)xpc_loadTextDataForExtensions:(id)extensions localization:(id)localization sessionID:(id)id;
- (void)xpc_didLoadTextDataForExtensions:(id)extensions localization:(id)localization sessionID:(id)id;
@end

#endif /* DEDXPCInbound_h */
