//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef SSRTrialAssetProvider_h
#define SSRTrialAssetProvider_h
@import Foundation;

#include "SSRAssetProviding-Protocol.h"

@class NSString;

@interface SSRTrialAssetProvider : NSObject<SSRAssetProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)reloadForLocale:(id)locale;
- (id)installedAssetOfType:(unsigned long long)type forLanguageCode:(id)code;
- (unsigned long long)getAssetProviderType;
@end

#endif /* SSRTrialAssetProvider_h */
