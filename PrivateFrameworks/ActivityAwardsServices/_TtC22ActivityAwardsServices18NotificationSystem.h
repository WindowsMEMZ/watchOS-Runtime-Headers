//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 573.2.0.0.0
//
#ifndef _TtC22ActivityAwardsServices18NotificationSystem_h
#define _TtC22ActivityAwardsServices18NotificationSystem_h
@import Foundation;

@interface ActivityAwardsServices.NotificationSystem : NSObject { // (Swift)
  /* instance variables */
   achievementStore;
   bridgeSettings;
   earnedKeyValueStore;
   fitnessAppsStateObserver;
   healthStore;
   notificationPostingProvider;
   notificationSuppresionProvider;
   pendingAchievementsToNotify;
   platform;
   unearnedKeyValueStore;
   lock;
}

/* instance methods */
- (void)dealloc;
- (void)notificationSuppressionChanged;
- (id)init;
@end

#endif /* _TtC22ActivityAwardsServices18NotificationSystem_h */
