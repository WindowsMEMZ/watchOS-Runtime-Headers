//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTDLanguageAssetCache_h
#define _LTDLanguageAssetCache_h
@import Foundation;

@class NSMutableDictionary, NSSet;

@interface _LTDLanguageAssetCache : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableDictionary *cache;
@property (readonly, nonatomic) NSSet *requiredAssetIdentifiers;
@property (nonatomic) unsigned long long readyFilterSet;

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (id)_readAllAssets;
- (id)_availableIdentifiers;
- (void)markReadyForFilter:(unsigned long long)filter;
- (BOOL)isReadyForFilter:(unsigned long long)filter;
- (id)preheatWithLanguages:(id)languages;
- (void)applyAssetUpdates:(id)updates;
- (void)setRequiredAssets:(id)assets;
- (BOOL)isCancelledDownloadComponent:(id)component;
- (id)assetForIdentifier:(id)identifier;
- (id)assetsFilteredUsing:(unsigned long long)using;
- (void)reset;
@end

#endif /* _LTDLanguageAssetCache_h */
