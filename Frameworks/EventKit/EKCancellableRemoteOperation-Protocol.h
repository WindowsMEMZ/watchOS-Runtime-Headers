//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1870.2.1.0.0
//
#ifndef EKCancellableRemoteOperation_Protocol_h
#define EKCancellableRemoteOperation_Protocol_h
@import Foundation;

@protocol EKCancellableRemoteOperation <NSObject>
/* instance methods */
- (void)cancel;
@optional
/* instance methods */
- (void)disconnected;
- (void)receivedBatchResultsFromServer:(id)server finished:(BOOL)finished;
@end

#endif /* EKCancellableRemoteOperation_Protocol_h */
