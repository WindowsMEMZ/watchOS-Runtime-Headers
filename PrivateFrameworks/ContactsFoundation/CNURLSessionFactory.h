//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNURLSessionFactory_h
#define CNURLSessionFactory_h
@import Foundation;

@interface CNURLSessionFactory : NSObject
/* class methods */
+ (id)defaultFactory;

/* instance methods */
- (id)defaultSessionConfiguration;
- (id)sessionWithConfiguration:(id)configuration delegate:(id)delegate delegateQueue:(id)queue;
@end

#endif /* CNURLSessionFactory_h */
