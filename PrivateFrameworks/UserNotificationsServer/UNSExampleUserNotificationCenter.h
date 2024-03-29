//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 491.7.0.0.0
//
#ifndef UNSExampleUserNotificationCenter_h
#define UNSExampleUserNotificationCenter_h
@import Foundation;

@class PTTestRecipe, UNUserNotificationCenter;

@interface UNSExampleUserNotificationCenter : NSObject {
  /* instance variables */
  UNUserNotificationCenter *_userNotificationCenter;
  PTTestRecipe *_basicTestRecipe;
}

/* instance methods */
- (id)init;
- (id)latestNotificationRequestIdentifier;
- (id)sectionIdentifier;
- (void)publish;
- (void)publishWithNumberOfUniqueThreads:(unsigned long long)threads;
- (void)publish:(unsigned long long)publish completion:(id /* block */)completion;
- (void)publish:(unsigned long long)publish numberOfUniqueThreads:(unsigned long long)threads completion:(id /* block */)completion;
- (void)update;
- (void)removeAllNotifications;
- (void)_postNotificationWithID:(id)id threadIdentifier:(id)identifier;
- (id)_existingNotificationRequestForIdentifier:(id)identifier;
- (id)_userNotificationCenter;
- (id)_newNotificationRequest:(id)request threadIdentifier:(id)identifier;
- (id)_basicPostUpdateRecipe;
@end

#endif /* UNSExampleUserNotificationCenter_h */
