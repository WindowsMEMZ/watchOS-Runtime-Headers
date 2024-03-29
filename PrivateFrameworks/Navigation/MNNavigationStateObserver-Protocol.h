//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNNavigationStateObserver_Protocol_h
#define MNNavigationStateObserver_Protocol_h
@import Foundation;

@protocol MNNavigationStateObserver <NSObject>
@optional
/* instance methods */
- (void)stateManager:(id)manager willChangeFromState:(unsigned long long)state toState:(unsigned long long)state;
- (void)stateManager:(id)manager didChangeFromState:(unsigned long long)state toState:(unsigned long long)state;
@end

#endif /* MNNavigationStateObserver_Protocol_h */
