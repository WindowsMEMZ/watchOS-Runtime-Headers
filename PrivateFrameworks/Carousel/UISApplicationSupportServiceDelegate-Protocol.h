//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef UISApplicationSupportServiceDelegate_Protocol_h
#define UISApplicationSupportServiceDelegate_Protocol_h
@import Foundation;

@protocol UISApplicationSupportServiceDelegate <NSObject>
@optional
/* instance methods */
- (BOOL)service:(id)service overrideClientInitialization:(id)initialization;
- (id)service:(id)service initializeClient:(id)client;
- (void)service:(id)service initializeClient:(id)client withCompletion:(id /* block */)completion;
- (id)service:(id)service initializeClient:(id)client withParameters:(id)parameters;
- (void)requestPasscodeUnlockUIForClient:(id)client withCompletion:(id /* block */)completion;
- (void)destroyScenesWithPersistentIdentifiers:(id)identifiers animationType:(unsigned long long)type destroySessions:(BOOL)sessions forClient:(id)client completion:(id /* block */)completion;
- (id)applicationInitializationContextForClient:(id)client;
@end

#endif /* UISApplicationSupportServiceDelegate_Protocol_h */
