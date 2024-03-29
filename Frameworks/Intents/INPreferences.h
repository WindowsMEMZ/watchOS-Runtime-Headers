//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INPreferences_h
#define INPreferences_h
@import Foundation;

#include "_INVocabularyConnection.h"

@class NSString;

@interface INPreferences : NSObject {
  /* instance variables */
  _INVocabularyConnection *_assistantdConnection;
  NSString *_cachedSiriLanguageCode;
}

@property (copy) NSString *_cachedSiriLanguageCode;

/* class methods */
+ (id)sharedPreferences;
+ (long long)siriAuthorizationStatus;
+ (void)requestSiriAuthorization:(id /* block */)authorization;
+ (id)siriLanguageCode;
+ (void)_verifyProcessCanDonateIntentWithName:(id)name completion:(id /* block */)completion;

/* instance methods */
- (void)assertThisProcessHasSiriEntitlement;
- (id)init;
- (id)_init;
- (void)_updateWithExtensionContext:(id)context;
- (BOOL)_weAreRunningAsAnExtension;
- (void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
- (long long)_siriAuthorizationStatus;
- (void)requestSiriAuthorization:(id /* block */)authorization;
- (id)_siriLanguageCode;
- (void)_verifyProcessCanDonateIntentWithName:(id)name completion:(id /* block */)completion;
- (void)_setCachedSiriLanguageCode:(id)code;
@end

#endif /* INPreferences_h */
