//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPVolumeHUDController_h
#define MPVolumeHUDController_h
@import Foundation;

@class NSHashTable, NSMutableSet;

@interface MPVolumeHUDController : NSObject {
  /* instance variables */
  NSHashTable *_scenes;
  NSMutableSet *_displays;
  NSMutableSet *_categories;
  BOOL _needsUpdate;
}

@property (readonly, nonatomic) id mainContext;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)addVolumeDisplay:(id)display;
- (void)removeVolumeDisplay:(id)display;
- (void)setNeedsUpdate;
- (void)_addCategory:(id)category;
- (void)_updateVisibility;
- (void)_updateVisibilityForVolumeDisplays:(id)displays inWindowScene:(id)scene;
@end

#endif /* MPVolumeHUDController_h */
