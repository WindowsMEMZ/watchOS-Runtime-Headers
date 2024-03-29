//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.2.8.0.0
//
#ifndef ASDRepairServiceProtocol_Protocol_h
#define ASDRepairServiceProtocol_Protocol_h
@import Foundation;

@protocol ASDRepairServiceProtocol 
/* instance methods */
- (void)refreshKeybagWithReplyHandler:(id /* block */)handler;
- (void)repairAppWithOptions:(id)options replyHandler:(id /* block */)handler;
@end

#endif /* ASDRepairServiceProtocol_Protocol_h */
