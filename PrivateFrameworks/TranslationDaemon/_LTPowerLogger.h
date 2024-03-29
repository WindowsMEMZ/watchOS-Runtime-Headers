//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTPowerLogger_h
#define _LTPowerLogger_h
@import Foundation;

@class NSOrderedSet;
@protocol OS_dispatch_queue;

@interface _LTPowerLogger : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
@property (retain) NSOrderedSet *requestTypeSet;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)logTranslateRequestEvent:(id)event requestType:(id)type routeType:(long long)type;
@end

#endif /* _LTPowerLogger_h */
