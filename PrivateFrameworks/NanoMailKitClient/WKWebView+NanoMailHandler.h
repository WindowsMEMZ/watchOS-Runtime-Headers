//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 811.0.0.0.0
//
#ifndef WKWebView_NanoMailHandler_h
#define WKWebView_NanoMailHandler_h
@import Foundation;

@interface WKWebView (NanoMailHandler)
/* instance methods */
- (void)handleWebContentProcessDidTerminate:(id /* block */)terminate;
- (void)setMaximumWebProcessRecoveryAttempts:(unsigned long long)attempts;
- (unsigned long long)maximumWebProcessRecoveryAttempts;
- (void)setWebProcessTerminationCount:(unsigned long long)count;
- (unsigned long long)webProcessTerminationCount;
@end

#endif /* WKWebView_NanoMailHandler_h */
