//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 503.2.0.0.0
//
#ifndef STAskToManageContactsNotApprovedResponseReceivedUserNotificationContext_h
#define STAskToManageContactsNotApprovedResponseReceivedUserNotificationContext_h
@import Foundation;

#include "STUserNotificationContext.h"

@class NSString;

@interface STAskToManageContactsNotApprovedResponseReceivedUserNotificationContext : STUserNotificationContext

@property (copy, nonatomic) NSString *childName;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithChildName:(id)name;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)customizeNotificationContent:(id)content withCompletionBlock:(id /* block */)block;
@end

#endif /* STAskToManageContactsNotApprovedResponseReceivedUserNotificationContext_h */
