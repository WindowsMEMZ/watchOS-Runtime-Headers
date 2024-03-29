//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.200.1.0.0
//
#ifndef NPTODarwinNotificationObserver_h
#define NPTODarwinNotificationObserver_h
@import Foundation;

@interface NPTODarwinNotificationObserver : NSObject {
  /* instance variables */
  int _notificationToken;
}

/* instance methods */
- (id)initWithNotificationName:(id)name queue:(id)queue block:(id /* block */)block;
- (void)dealloc;
@end

#endif /* NPTODarwinNotificationObserver_h */
