//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKServiceShareableCredentialsMessageComposeViewControllerProtocol_Protocol_h
#define PKServiceShareableCredentialsMessageComposeViewControllerProtocol_Protocol_h
@import Foundation;

@protocol PKServiceShareableCredentialsMessageComposeViewControllerProtocol <NSObject>
/* instance methods */
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize { double x0; double x1; })size scale:(double)scale;
- (void)setRecipientAddresses:(id)addresses;
- (void)setConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (void)setPartialShareInvite:(id)invite completion:(id /* block */)completion;
@end

#endif /* PKServiceShareableCredentialsMessageComposeViewControllerProtocol_Protocol_h */
