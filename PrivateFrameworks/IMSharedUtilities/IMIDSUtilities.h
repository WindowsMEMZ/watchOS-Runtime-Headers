//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMIDSUtilities_h
#define IMIDSUtilities_h
@import Foundation;

@interface IMIDSUtilities : NSObject
/* class methods */
+ (int)verifyFromID:(id)id comesFromAccount:(id)account;
+ (void)findCommonCapabilitiesAcrossRecipients:(id)recipients serviceName:(id)name capsToCheck:(id)check completion:(id /* block */)completion;
@end

#endif /* IMIDSUtilities_h */
