//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKProvisioningServiceOutstandingRequest_h
#define NPKProvisioningServiceOutstandingRequest_h
@import Foundation;

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NPKProvisioningServiceOutstandingRequest : NSObject

@property (copy, nonatomic) NSString *messageIdentifier;
@property (copy, nonatomic) id completionHandler;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ timeoutHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timeoutQueue;

/* instance methods */
- (void)setOrResetCleanupTimer;
- (void)invalidateCleanupTimer;
@end

#endif /* NPKProvisioningServiceOutstandingRequest_h */
