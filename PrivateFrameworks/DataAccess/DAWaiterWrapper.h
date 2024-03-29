//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2653.2.1.0.0
//
#ifndef DAWaiterWrapper_h
#define DAWaiterWrapper_h
@import Foundation;

@protocol DADataclassLockWatcher;

@interface DAWaiterWrapper : NSObject

@property (retain, nonatomic) NSObject<DADataclassLockWatcher> *waiter;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) long long dataclasses;
@property (readonly, nonatomic) int waiterNum;

/* instance methods */
- (id)init;
- (id)description;
@end

#endif /* DAWaiterWrapper_h */
