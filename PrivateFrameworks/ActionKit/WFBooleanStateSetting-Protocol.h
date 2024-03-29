//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFBooleanStateSetting_Protocol_h
#define WFBooleanStateSetting_Protocol_h
@import Foundation;

@protocol WFBooleanStateSetting <NSObject>
/* instance methods */
- (void)getStateWithCompletionHandler:(id /* block */)handler;
- (void)setState:(BOOL)state completionHandler:(id /* block */)handler;
@end

#endif /* WFBooleanStateSetting_Protocol_h */
