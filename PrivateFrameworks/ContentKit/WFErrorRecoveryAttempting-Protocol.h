//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFErrorRecoveryAttempting_Protocol_h
#define WFErrorRecoveryAttempting_Protocol_h
@import Foundation;

@protocol WFErrorRecoveryAttempting <NSObject>
/* instance methods */
- (void)attemptRecoveryFromError:(id)error optionIndex:(unsigned long long)index userInterface:(id)interface completionHandler:(id /* block */)handler;
@end

#endif /* WFErrorRecoveryAttempting_Protocol_h */
