//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFAppAutoFillOneTimeCodeProviderObserver_Protocol_h
#define SFAppAutoFillOneTimeCodeProviderObserver_Protocol_h
@import Foundation;

@protocol SFAppAutoFillOneTimeCodeProviderObserver <NSObject>
/* instance methods */
- (void)oneTimeCodeProviderReceivedCode:(id)code;
@optional
/* instance methods */
- (void)oneTimeCodeProvider:(id)provider didUpdateOneTimeCode:(id)code;
@end

#endif /* SFAppAutoFillOneTimeCodeProviderObserver_Protocol_h */
