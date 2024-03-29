//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef MSAMNotificationInfo_h
#define MSAMNotificationInfo_h
@import Foundation;

#include "MSAlertManager.h"

@class NSString;

@interface MSAMNotificationInfo : NSObject

@property (weak, nonatomic) MSAlertManager *owner;
@property (retain, nonatomic) NSString *personID;
@property (nonatomic) struct __CFRunLoopSource * runLoopSource;
@property (nonatomic) struct __CFUserNotification * userNotification;
@property (copy, nonatomic) id /* block */ completionBlock;

/* class methods */
+ (id)info;

/* instance methods */
- (void)dealloc;
@end

#endif /* MSAMNotificationInfo_h */
