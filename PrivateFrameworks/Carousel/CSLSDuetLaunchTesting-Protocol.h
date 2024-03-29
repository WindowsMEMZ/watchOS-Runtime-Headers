//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSDuetLaunchTesting_Protocol_h
#define CSLSDuetLaunchTesting_Protocol_h
@import Foundation;

@protocol CSLSDuetLaunchTesting <NSObject>
/* instance methods */
- (void)injectError:(id)error errorCode:(long long)code completion:(id /* block */)completion;
- (void)clearError:(id)error completion:(id /* block */)completion;
@end

#endif /* CSLSDuetLaunchTesting_Protocol_h */
