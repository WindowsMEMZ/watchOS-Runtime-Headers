//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef _CHUISWidgetHostViewControllerCollection_h
#define _CHUISWidgetHostViewControllerCollection_h
@import Foundation;

@class NSArray, NSHashTable;

@interface _CHUISWidgetHostViewControllerCollection : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSHashTable *_lock_viewControllers;
}

@property (readonly, copy, nonatomic) NSArray *viewControllers;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)noteCreated:(id)created;
- (void)noteDestroyed:(id)destroyed;
@end

#endif /* _CHUISWidgetHostViewControllerCollection_h */
