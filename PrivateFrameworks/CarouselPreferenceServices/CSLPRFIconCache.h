//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLPRFIconCache_h
#define CSLPRFIconCache_h
@import Foundation;

@class NSCache;

@interface CSLPRFIconCache : NSObject {
  /* instance variables */
  NSCache *_cache;
}

/* class methods */
+ (id)sharedIconCache;

/* instance methods */
- (id)init;
- (id)iconForName:(id)name fallBackToPersistentStoreIfNecessary:(BOOL)necessary;
- (void)setIcon:(id)icon forName:(id)name;
- (id)_path;
- (id)_pathForIconName:(id)name;
- (id)_loadMMappedImageWithName:(id)name;
- (void)_writeMMappedImage:(id)image withName:(id)name;
@end

#endif /* CSLPRFIconCache_h */
