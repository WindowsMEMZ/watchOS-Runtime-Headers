//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 811.0.0.0.0
//
#ifndef NNMKDarwinNotificationCenter_h
#define NNMKDarwinNotificationCenter_h
@import Foundation;

@class NSMutableDictionary, NSRecursiveLock;

@interface NNMKDarwinNotificationCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *observersByNotificationName;
@property (retain, nonatomic) NSRecursiveLock *lock;

/* class methods */
+ (id)defaultCenter;
+ (void)postNotification:(id)notification;

/* instance methods */
- (id)init;
- (void)addObserver:(id)observer notificationName:(id)name usingBlock:(id /* block */)block;
- (void)addObserver:(id)observer notificationName:(id)name selector:(SEL)selector;
- (void)_addObserver:(id)observer;
- (void)removeObserver:(id)observer notificationName:(id)name;
- (void)_registerForNotificationName:(id)name;
- (void)_unregisterForNotificationNameIfNeeded:(id)needed;
- (void)_handleDarwinNotification:(id)notification;
@end

#endif /* NNMKDarwinNotificationCenter_h */
