//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSOneShotTimer_h
#define WBSOneShotTimer_h
@import Foundation;

@class NSDate;
@protocol OS_dispatch_queue;

@interface WBSOneShotTimer : NSObject {
  /* instance variables */
  id /* block */ _block;
}

@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSDate *fireDate;

/* instance methods */
- (id)initWithFireDate:(id)date queue:(id)queue block:(id /* block */)block;
- (id)initWithFireDate:(id)date queue:(id)queue target:(id)target selector:(SEL)selector;
- (void)invalidate;
@end

#endif /* WBSOneShotTimer_h */
