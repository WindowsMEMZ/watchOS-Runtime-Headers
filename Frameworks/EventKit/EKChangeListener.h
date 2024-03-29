//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1870.2.1.0.0
//
#ifndef EKChangeListener_h
#define EKChangeListener_h
@import Foundation;

@class NSPointerArray;

@interface EKChangeListener : NSObject

@property (retain) NSPointerArray *delegates;

/* class methods */
+ (id)updatedObjectFor:(id)for changeNotification:(id)notification;
+ (id)changedIdentifiersForNotification:(id)notification;
+ (BOOL)isSyncStatusChangeNotification:(id)notification;

/* instance methods */
- (id)init;
- (void)registerDelegate:(id)delegate;
- (id)_orderedDelegates;
- (void)objectsChangedNotification:(id)notification;
@end

#endif /* EKChangeListener_h */
