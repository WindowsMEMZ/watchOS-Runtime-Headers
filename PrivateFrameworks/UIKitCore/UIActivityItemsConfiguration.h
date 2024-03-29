//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIActivityItemsConfiguration_h
#define UIActivityItemsConfiguration_h
@import Foundation;

#include "UIActivityItemsConfigurationReading-Protocol.h"

@class NSArray, NSString, UIActivityViewController;

@interface UIActivityItemsConfiguration : NSObject<UIActivityItemsConfigurationReading> {
  /* instance variables */
  NSArray *_itemProviders;
  NSArray *_activityItems;
  UIActivityViewController *_vc;
  NSArray *_excludedActivityTypes;
}

@property (readonly, nonatomic) BOOL _hasItemsForActivityItemsConfiguration;
@property (readonly, copy, nonatomic) NSArray *_activityItems;
@property (copy, nonatomic) NSArray *_excludedActivityTypes;
@property (copy, nonatomic) NSArray *_excludedInteractions;
@property (retain, nonatomic) id localObject;
@property (copy, nonatomic) NSArray *supportedInteractions;
@property (copy, nonatomic) id /* block */ metadataProvider;
@property (copy, nonatomic) id /* block */ perItemMetadataProvider;
@property (copy, nonatomic) id /* block */ previewProvider;
@property (copy, nonatomic) id /* block */ applicationActivitiesProvider;
@property (readonly, copy, nonatomic) NSArray *itemProvidersForActivityItemsConfiguration;
@property (readonly, copy, nonatomic) NSArray *applicationActivitiesForActivityItemsConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)activityItemsConfigurationWithObjects:(id)objects;
+ (id)activityItemsConfigurationWithItemProviders:(id)providers;
+ (id)_itemsForSystemSharingFromActivityItemsConfiguration:(id)configuration wrapperBlock:(id /* block */)block;

/* instance methods */
- (void)_commonInit;
- (id)initWithObjects:(id)objects;
- (id)initWithItemProviders:(id)providers;
- (id)_initWithActivityItemSources:(id)sources;
- (id)_initWithActivityItems:(id)items applicationActivities:(id)activities;
- (id)itemProviders;
- (BOOL)activityItemsConfigurationSupportsInteraction:(id)interaction;
- (id)activityItemsConfigurationMetadataForKey:(id)key;
- (id)activityItemsConfigurationMetadataForItemAtIndex:(long long)index key:(id)key;
- (id)activityItemsConfigurationPreviewForItemAtIndex:(long long)index intent:(id)intent suggestedSize:(struct CGSize { double x0; double x1; })size;
- (void)_setExcludedActivityTypes:(id)types;
- (void)_setExcludedInteractions:(id)interactions;
@end

#endif /* UIActivityItemsConfiguration_h */
