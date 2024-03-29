//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTOSTransaction_h
#define MTOSTransaction_h
@import Foundation;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface MTOSTransaction : NSObject

@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

/* class methods */
+ (id)transactionWithDescription:(id)description;
+ (id)transactionWithDescription:(id)description timeout:(double)timeout;
+ (id)transactionWithDescription:(id)description timeout:(double)timeout timeoutBlock:(id /* block */)block;

/* instance methods */
- (id)initWithDescription:(id)description timeout:(double)timeout timeoutBlock:(id /* block */)block;
- (void)end;
- (void)_cancel;
- (void)dealloc;
@end

#endif /* MTOSTransaction_h */
