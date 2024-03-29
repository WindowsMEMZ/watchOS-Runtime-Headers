//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2480.0.0.0.0
//
#ifndef ICDistributedLock_h
#define ICDistributedLock_h
@import Foundation;

@class NSDate, NSLock, NSString;

@interface ICDistributedLock : NSObject {
  /* instance variables */
  NSLock *threadLock;
  NSString *lockName;
  BOOL hasLock;
}

@property (readonly, copy) NSDate *lockDate;

/* class methods */
+ (id)lockWithPath:(id)path;

/* instance methods */
- (id)init;
- (id)initWithPath:(id)path;
- (void)invalidate;
- (void)dealloc;
- (BOOL)tryLock;
- (void)unlock;
- (void)breakLock;
- (id)description;
@end

#endif /* ICDistributedLock_h */
