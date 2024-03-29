//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUINotificationWindow_h
#define WNUINotificationWindow_h
@import Foundation;

#include "UIWindow.h"
#include "PUICNotificationSceneDelegate-Protocol.h"

@class NSArray, NSString, UISceneSession;

@interface WNUINotificationWindow : UIWindow<PUICNotificationSceneDelegate>

@property (retain, nonatomic) UISceneSession *session;
@property (copy, nonatomic) NSArray *notifications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithWindowScene:(id)scene session:(id)session;
- (void)notifyHostOfCustomInfo:(id)info viewControllerSupportsBannerLook:(BOOL)look;
- (void)notifyHostOfSceneIntrinsicContentSize;
@end

#endif /* WNUINotificationWindow_h */
