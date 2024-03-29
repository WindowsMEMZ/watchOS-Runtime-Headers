//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef CALNEKSuggestionsServiceLogger_h
#define CALNEKSuggestionsServiceLogger_h
@import Foundation;

#include "CALNSuggestionsServiceLogger-Protocol.h"

@class NSString;

@interface CALNEKSuggestionsServiceLogger : NSObject<CALNSuggestionsServiceLogger>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)logEventShowedTimeToLeaveNotificationWithUniqueKey:(id)key;
@end

#endif /* CALNEKSuggestionsServiceLogger_h */
