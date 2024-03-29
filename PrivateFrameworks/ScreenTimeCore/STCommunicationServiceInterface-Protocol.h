//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 503.2.0.0.0
//
#ifndef STCommunicationServiceInterface_Protocol_h
#define STCommunicationServiceInterface_Protocol_h
@import Foundation;

@protocol STCommunicationServiceInterface 
/* instance methods */
- (void)currentCommunicationConfigurationWithCompletionHandler:(id /* block */)handler;
- (void)authenticatePasscodeForUserWithEndpoint:(id)endpoint completionHandler:(id /* block */)handler;
@end

#endif /* STCommunicationServiceInterface_Protocol_h */
