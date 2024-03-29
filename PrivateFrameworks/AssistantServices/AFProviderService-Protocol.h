//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFProviderService_Protocol_h
#define AFProviderService_Protocol_h
@import Foundation;

@protocol AFProviderService <NSObject>
/* instance methods */
- (void)doCommandForServicePath:(id)path className:(id)name infoDictionary:(id)dictionary executionInfo:(id)info reply:(id /* block */)reply;
- (void)beginSyncForServicePath:(id)path className:(id)name requestUUID:(id)uuid info:(id)info reply:(id /* block */)reply;
- (void)fetchCurrentSyncSnapshotForServicePath:(id)path className:(id)name key:(id)key completion:(id /* block */)completion;
- (void)clearDomainObjectsForServicePath:(id)path className:(id)name;
- (void)preheatBundleForServicePath:(id)path;
- (void)runMaintenanceWorkForServicePath:(id)path className:(id)name completion:(id /* block */)completion;
- (void)reloadServiceBundleAtPath:(id)path;
@end

#endif /* AFProviderService_Protocol_h */
