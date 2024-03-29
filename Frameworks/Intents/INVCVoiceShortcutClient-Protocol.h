//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INVCVoiceShortcutClient_Protocol_h
#define INVCVoiceShortcutClient_Protocol_h
@import Foundation;

@protocol INVCVoiceShortcutClient <NSObject>
/* instance methods */
- (void)getVoiceShortcutsWithCompletion:(id /* block */)completion;
- (void)getVoiceShortcutWithIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)setShortcutSuggestions:(id)suggestions forAppWithBundleIdentifier:(id)identifier;
- (void)setInteger:(long long)integer forKey:(id)key inDomain:(id)domain completionHandler:(id /* block */)handler;
- (void)sendAceCommandDictionary:(id)dictionary completion:(id /* block */)completion;
- (id)linkActionWithAppBundleIdentifier:(id)identifier appIntentIdentifier:(id)identifier serializedParameterStates:(id)states error:(id *)error;
- (id)migratedAppIntentWithINIntent:(id)inintent error:(id *)error;
- (id)serializedParametersForLinkAction:(id)action actionMetadata:(id)metadata error:(id *)error;
@end

#endif /* INVCVoiceShortcutClient_Protocol_h */
