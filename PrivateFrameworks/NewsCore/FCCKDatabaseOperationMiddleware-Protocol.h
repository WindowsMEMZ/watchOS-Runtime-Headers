//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCCKDatabaseOperationMiddleware_Protocol_h
#define FCCKDatabaseOperationMiddleware_Protocol_h
@import Foundation;

@protocol FCCKDatabaseOperationMiddleware <NSObject>
/* instance methods */
- (long long)database:(id)database willEnqueueOperation:(id)operation error:(id *)error;
@end

#endif /* FCCKDatabaseOperationMiddleware_Protocol_h */
