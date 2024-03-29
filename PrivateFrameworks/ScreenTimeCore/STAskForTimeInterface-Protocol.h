//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 503.2.0.0.0
//
#ifndef STAskForTimeInterface_Protocol_h
#define STAskForTimeInterface_Protocol_h
@import Foundation;

@protocol STAskForTimeInterface <NSObject>
/* instance methods */
- (void)sendAskForTimeRequest:(id)request completionHandler:(id /* block */)handler;
- (void)approveExceptionForRequest:(id)request completionHandler:(id /* block */)handler;
- (void)fetchLastResponseForRequestedResourceIdentifier:(id)identifier usageType:(long long)type withCompletionHandler:(id /* block */)handler;
- (void)handleAnswer:(long long)answer requestIdentifier:(id)identifier timeApproved:(id)approved completionHandler:(id /* block */)handler;
@end

#endif /* STAskForTimeInterface_Protocol_h */
