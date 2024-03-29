//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSAppStats_h
#define CSLSAppStats_h
@import Foundation;

@interface CSLSAppStats : NSObject

@property (readonly, nonatomic) unsigned long long memoryUsage;
@property (readonly, nonatomic) BOOL isRunning;
@property (readonly, nonatomic) unsigned long long dockIndex;
@property (readonly, nonatomic) BOOL isComplication;

/* instance methods */
- (id)init;
- (id)displayName;
- (id)recentEvents;
- (id)stateTransitions;
@end

#endif /* CSLSAppStats_h */
