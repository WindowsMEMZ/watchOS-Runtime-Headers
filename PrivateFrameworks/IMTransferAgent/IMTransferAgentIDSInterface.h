//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMTransferAgentIDSInterface_h
#define IMTransferAgentIDSInterface_h
@import Foundation;

#include "IDSServiceDelegate-Protocol.h"

@class IDSService, NSMutableDictionary, NSString;

@interface IMTransferAgentIDSInterface : NSObject<IDSServiceDelegate> {
  /* instance variables */
  IDSService *_idsService;
  NSMutableDictionary *_uniqueIDToTransferCompletionBlockMap;
  NSMutableDictionary *_uniqueIDToFilePathMap;
  int _numTransfers;
  int _totalTransfers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)isLocalDevicePresent;
- (void)remoteUploadFileRequest:(id)request topic:(id)topic transferID:(id)id sourceAppID:(id)id completionBlock:(id /* block */)block;
- (void)incrementTransferCount;
- (void)decrementTransferCount;
- (void)_sendUploadRequest:(id)request topic:(id)topic transferID:(id)id sourceAppID:(id)id allowReauthorize:(BOOL)reauthorize;
- (void)_sendUploadResponse:(id)response topic:(id)topic success:(BOOL)success error:(id)error ownerID:(id)id signature:(id)signature requestURLString:(id)urlstring transferID:(id)id;
- (void)_handleUploadRequest:(id)request;
- (void)_handleUploadResponse:(id)response;
- (BOOL)_sendIDSMessage:(id)idsmessage topic:(id)topic localPath:(id)path;
- (void)service:(id)service account:(id)account incomingData:(id)data fromID:(id)id context:(id)context;
- (void)service:(id)service account:(id)account identifier:(id)identifier didSendWithSuccess:(BOOL)success error:(id)error;
- (id)localCompanionDevice;
@end

#endif /* IMTransferAgentIDSInterface_h */
