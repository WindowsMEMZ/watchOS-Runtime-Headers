//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UISceneSizeRestrictions_h
#define UISceneSizeRestrictions_h
@import Foundation;

#include "UIWindowScene.h"

@interface UISceneSizeRestrictions : NSObject {
  /* instance variables */
  BOOL _hasAutomaticMinimumSize;
  BOOL _hasAutomaticMaximumSize;
  UIWindowScene *_scene;
}

@property (nonatomic) struct CGSize { double x0; double x1; } minimumSize;
@property (nonatomic) struct CGSize { double x0; double x1; } maximumSize;
@property (nonatomic) BOOL allowsFullScreen;

/* class methods */
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;

/* instance methods */
- (id)_initWithScene:(id)scene;
@end

#endif /* UISceneSizeRestrictions_h */
