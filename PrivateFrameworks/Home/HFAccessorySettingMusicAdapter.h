//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFAccessorySettingMusicAdapter_h
#define HFAccessorySettingMusicAdapter_h
@import Foundation;

#include "HFAccessorySettingAdapter.h"
#include "HFAccessorySettingAdapterDisplayArbitrating-Protocol.h"

@class NSString;

@interface HFAccessorySettingMusicAdapter : HFAccessorySettingAdapter<HFAccessorySettingAdapterDisplayArbitrating>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)areAllAccessoriesLoggedIntoSameAccount:(id)account;
+ (BOOL)areAllAccessoriesLoggedOut:(id)out;

/* instance methods */
- (id)initWithHomeKitSettingsVendor:(id)vendor mode:(unsigned long long)mode;
- (id)initWithHomeKitSettingsVendor:(id)vendor keyPaths:(id)paths mode:(unsigned long long)mode updateHandler:(id /* block */)handler;
- (id)initWithHomeKitSettingsVendor:(id)vendor keyPaths:(id)paths updateHandler:(id /* block */)handler;
- (BOOL)shouldShowSettingsEntity:(id)entity;
@end

#endif /* HFAccessorySettingMusicAdapter_h */
