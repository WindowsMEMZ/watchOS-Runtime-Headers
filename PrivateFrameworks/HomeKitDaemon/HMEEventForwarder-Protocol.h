//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMEEventForwarder_Protocol_h
#define HMEEventForwarder_Protocol_h
@import Foundation;

@protocol HMEEventForwarder 
/* instance methods */
- (void)forwardEvent:(id)event topic:(id)topic completion:(id /* block */)completion;
@end

#endif /* HMEEventForwarder_Protocol_h */
