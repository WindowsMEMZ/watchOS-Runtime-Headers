//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 503.2.0.0.0
//
#ifndef STAskForTimeRequestReceivedUserNotificationContext_h
#define STAskForTimeRequestReceivedUserNotificationContext_h
@import Foundation;

#include "STUserNotificationContext.h"

@class NSNumber, NSString;

@interface STAskForTimeRequestReceivedUserNotificationContext : STUserNotificationContext

@property (copy, nonatomic) NSString *childName;
@property (retain, nonatomic) NSNumber *childDSID;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAskForTimeRequestIdentifier:(id)identifier childName:(id)name childDSID:(id)dsid requestedResourceName:(id)name;
- (id)initWithAskForTimeRequestIdentifier:(id)identifier familyMember:(id)member requestedResourceName:(id)name;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)customizeNotificationContent:(id)content withCompletionBlock:(id /* block */)block;
- (void)_fetchAndWriteFamilyPhotoURLIfNeeded:(id /* block */)needed;
@end

#endif /* STAskForTimeRequestReceivedUserNotificationContext_h */
