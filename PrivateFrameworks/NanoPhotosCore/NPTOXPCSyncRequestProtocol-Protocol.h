//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.200.1.0.0
//
#ifndef NPTOXPCSyncRequestProtocol_Protocol_h
#define NPTOXPCSyncRequestProtocol_Protocol_h
@import Foundation;

@protocol NPTOXPCSyncRequestProtocol <NSObject>
/* instance methods */
- (void)performSyncRequestForTargets:(id)targets collectionUUIDs:(id)uuids ignoresLowPowerMode:(BOOL)mode requestID:(long long)id completion:(id /* block */)completion;
- (void)cancelSyncRequest:(long long)request;
@end

#endif /* NPTOXPCSyncRequestProtocol_Protocol_h */
