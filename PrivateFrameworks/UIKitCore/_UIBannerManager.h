//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIBannerManager_h
#define _UIBannerManager_h
@import Foundation;

#include "UIScene.h"
#include "UIWindowScene.h"
#include "_UIBannerContainerView.h"
#include "_UIBannerWindow.h"
#include "_UISceneComponentProviding-Protocol.h"

@class NSString;

@interface _UIBannerManager : NSObject<_UISceneComponentProviding>

@property (retain, nonatomic) UIWindowScene *windowScene;
@property (retain, nonatomic) _UIBannerWindow *window;
@property (retain, nonatomic) _UIBannerContainerView *containerView;
@property (weak, nonatomic) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithScene:(id)scene;
- (void)_setScene:(id)scene;
- (void)_createWindowIfNeeded;
- (id)bannerWithContent:(id)content;
@end

#endif /* _UIBannerManager_h */
