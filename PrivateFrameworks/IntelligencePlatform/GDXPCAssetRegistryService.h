//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 75.3.6.0.1
//
#ifndef GDXPCAssetRegistryService_h
#define GDXPCAssetRegistryService_h
@import Foundation;

#include "GDXPCAssetRegistryServiceProtocol-Protocol.h"

@class NSXPCConnection, NSXPCInterface;

@interface GDXPCAssetRegistryService : NSObject<GDXPCAssetRegistryServiceProtocol> {
  /* instance variables */
  NSXPCConnection *_connection;
  NSXPCInterface *_serverInterface;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)locked_establishConnection;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)handler;
- (id)assetEntryResultDataForAssetId:(id)id inDomainId:(id)id remoteOptionsData:(id)data error:(id *)error;
- (id)overrideAssetEntryForAssetId:(id)id inDomainId:(id)id overrideAssetEntryParametersData:(id)data error:(id *)error;
@end

#endif /* GDXPCAssetRegistryService_h */
