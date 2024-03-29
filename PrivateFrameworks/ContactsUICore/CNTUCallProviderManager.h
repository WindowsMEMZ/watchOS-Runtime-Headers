//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef CNTUCallProviderManager_h
#define CNTUCallProviderManager_h
@import Foundation;

#include "CNTUCallProviderManager-Protocol.h"

@class NSString, TUCallProviderManager;

@interface CNTUCallProviderManager : NSObject<CNTUCallProviderManager>

@property (copy, nonatomic) TUCallProviderManager *callProviderManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)providerManagerQueue;
- (id)observableForCallProvidersChangedWithSchedulerProvider:(id)provider;
- (id)thirdPartyCallProvidersForActionType:(id)type;
- (id)thirdPartyCallProviderWithBundleIdentifier:(id)identifier;
- (BOOL)isFirstPartyCallProvider:(id)provider;
- (BOOL)isActionType:(id)type supportedByProvider:(id)provider;
@end

#endif /* CNTUCallProviderManager_h */
