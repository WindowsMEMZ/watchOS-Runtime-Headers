//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 346.2.9.0.0
//
#ifndef SCROBrailleDisplayHistory_h
#define SCROBrailleDisplayHistory_h
@import Foundation;

@interface SCROBrailleDisplayHistory : NSObject {
  /* instance variables */
  struct __CFArray * _announcements;
  struct __CFArray * _unreadSnapshot;
  long long _currentIndex;
  long long _unreadCount;
}

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)addString:(id)string;
- (void)snapshotUnread;
- (void)markSnapshotAsRead;
- (BOOL)hasUnread;
- (id)currentString;
- (BOOL)moveToNext;
- (BOOL)moveToPrevious;
- (BOOL)_moveIndexBy:(long long)by;
- (BOOL)isOnMostRecent;
- (void)moveToMostRecent;
@end

#endif /* SCROBrailleDisplayHistory_h */
