//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 571.0.0.0.0
//
#ifndef ETColorStore_h
#define ETColorStore_h
@import Foundation;

@class NPSManager, NSArray, NSMutableArray;

@interface ETColorStore : NSObject {
  /* instance variables */
  BOOL _selectedIndexLoaded;
  NPSManager *_npsManager;
}

@property (nonatomic) unsigned long long selectedColorIndex;
@property (readonly, nonatomic) NSArray *colors;

/* class methods */
+ (id)defaultStore;

/* instance methods */
- (void)dealloc;
- (id)init;
- (void)addDefaultsObserver;
- (void)defaultsChanged:(id)changed;
- (id)_colors;
- (void)saveColor:(id)color forIndex:(unsigned long long)index;
@end

#endif /* ETColorStore_h */
