//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFTakeVideoActionUserInterface_Protocol_h
#define WFTakeVideoActionUserInterface_Protocol_h
@import Foundation;

@protocol WFTakeVideoActionUserInterface <WFActionRemoteUserInterface>
/* instance methods */
- (void)showWithQuality:(id)quality device:(id)device startImmediately:(BOOL)immediately completionHandler:(id /* block */)handler;
@end

#endif /* WFTakeVideoActionUserInterface_Protocol_h */
