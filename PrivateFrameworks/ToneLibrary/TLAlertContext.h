//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 600.0.0.0.0
//
#ifndef TLAlertContext_h
#define TLAlertContext_h
@import Foundation;

@class NSDate;
@protocol OS_dispatch_source;

@interface TLAlertContext : NSObject

@property (nonatomic) long long playbackBackEnd;
@property (retain, nonatomic) NSDate *playbackStartDate;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimerSource;
@property (nonatomic) BOOL beingInterrupted;

/* instance methods */
- (BOOL)isBeingInterrupted;
@end

#endif /* TLAlertContext_h */
