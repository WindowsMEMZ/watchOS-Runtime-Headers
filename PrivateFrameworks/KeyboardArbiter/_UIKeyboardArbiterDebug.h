//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIKeyboardArbiterDebug_h
#define _UIKeyboardArbiterDebug_h
@import Foundation;

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface _UIKeyboardArbiterDebug : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  int _importantCount;
  NSMutableArray *_entries;
  BOOL _disable;
}

@property (nonatomic) BOOL pause;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)addEntry:(id)entry;
- (void)infoWithMessage:(id)message;
- (void)debugWithMessage:(id)message;
- (void)errorWithMessage:(id)message;
- (void)addAsynchronousData:(id /* block */)data;
- (void)getDebugInfoDictionariesWithCompletionHandler:(id /* block */)handler;
@end

#endif /* _UIKeyboardArbiterDebug_h */
