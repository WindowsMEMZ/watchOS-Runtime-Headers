//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSXPCRegistration_Protocol_h
#define IDSXPCRegistration_Protocol_h
@import Foundation;

@protocol IDSXPCRegistration <NSObject>
/* instance methods */
- (void)requestSelectedSubscriptionsWithCompletion:(id /* block */)completion;
- (void)requestUnselectedTemporaryPhoneAliasesWithCompletion:(id /* block */)completion;
- (void)selectSubscription:(id)subscription withCompletion:(id /* block */)completion;
- (void)unselectSubscription:(id)subscription withCompletion:(id /* block */)completion;
- (void)setSelectedSubscriptions:(id)subscriptions withCompletion:(id /* block */)completion;
- (void)removeTemporaryPhoneAlias:(id)alias withCompletion:(id /* block */)completion;
- (void)enableTemporaryPhoneAlias:(id)alias withCompletion:(id /* block */)completion;
- (void)disableTemporaryPhoneAlias:(id)alias withCompletion:(id /* block */)completion;
- (void)constructRAResponseDictionaryForServices:(id)services completionHandler:(id /* block */)handler;
@end

#endif /* IDSXPCRegistration_Protocol_h */
