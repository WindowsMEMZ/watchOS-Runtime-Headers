//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 356.6.0.0.0
//
#ifndef SPMonitorsWrapperDelegate_Protocol_h
#define SPMonitorsWrapperDelegate_Protocol_h
@import Foundation;

@protocol SPMonitorsWrapperDelegate <NSObject>
/* instance methods */
- (BOOL)isBeaconing;
- (void)stateDidChange:(BOOL)change powerState:(unsigned long long)state;
@end

#endif /* SPMonitorsWrapperDelegate_Protocol_h */
