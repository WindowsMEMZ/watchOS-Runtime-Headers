//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64.0.0.0.0
//
#ifndef DDSMobileAssetv2ProviderDataSource_h
#define DDSMobileAssetv2ProviderDataSource_h
@import Foundation;

#include "DDSMobileAssetv2ProviderDataSource-Protocol.h"

@class NSString;

@interface DDSMobileAssetv2ProviderDataSource : NSObject<DDSMobileAssetv2ProviderDataSource>

@property (readonly) long long linguisticAssetCompatabilityVersion;
@property (readonly) long long mecabraDictionaryRapidUpdatesAssetCompatabilityVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (long long)compatabilityVersionFromFileWithName:(id)name;
- (id)maAssetQueryForDDSAssetQuery:(id)query compatabilityVersion:(long long)version platformVersion:(id)version internalInstall:(BOOL)install;
@end

#endif /* DDSMobileAssetv2ProviderDataSource_h */
