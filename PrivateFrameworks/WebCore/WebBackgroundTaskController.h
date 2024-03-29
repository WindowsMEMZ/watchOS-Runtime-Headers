//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebBackgroundTaskController_h
#define WebBackgroundTaskController_h
@import Foundation;

@interface WebBackgroundTaskController : NSObject

@property (nonatomic) unsigned long long invalidBackgroundTaskIdentifier;
@property (copy, nonatomic) id /* block */ backgroundTaskStartBlock;
@property (copy, nonatomic) id /* block */ backgroundTaskEndBlock;

/* class methods */
+ (id)sharedController;

/* instance methods */
- (void)dealloc;
- (unsigned long long)startBackgroundTaskWithExpirationHandler:(id /* block */)handler;
- (void)endBackgroundTaskWithIdentifier:(unsigned long long)identifier;
@end

#endif /* WebBackgroundTaskController_h */
