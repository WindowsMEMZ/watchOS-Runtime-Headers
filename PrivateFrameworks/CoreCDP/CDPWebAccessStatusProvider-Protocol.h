//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 359.4.1.2.1
//
#ifndef CDPWebAccessStatusProvider_Protocol_h
#define CDPWebAccessStatusProvider_Protocol_h
@import Foundation;

@protocol CDPWebAccessStatusProvider <NSObject>
/* instance methods */
- (void)webAccessStatusWithCompletion:(id /* block */)completion;
- (unsigned long long)webAccessStatus:(id *)status;
@end

#endif /* CDPWebAccessStatusProvider_Protocol_h */
