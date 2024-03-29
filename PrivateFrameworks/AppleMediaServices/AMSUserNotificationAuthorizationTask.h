//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSUserNotificationAuthorizationTask_h
#define AMSUserNotificationAuthorizationTask_h
@import Foundation;

#include "AMSTask.h"
#include "AMSUserNotificationAuthorizationOptions.h"

@class NSString, UNUserNotificationCenter;
@protocol AMSUserNotificationAuthorizationDelegate;

@interface AMSUserNotificationAuthorizationTask : AMSTask

@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (weak, nonatomic) NSObject<AMSUserNotificationAuthorizationDelegate> *delegate;
@property (retain, nonatomic) AMSUserNotificationAuthorizationOptions *options;

/* class methods */
+ (id)engagementRequestForFullSheet;
+ (id)_findEngagementRequestInResponse:(id)response;
+ (id)recordEngagementEventWithBundleIdentifier:(id)identifier options:(id)options;

/* instance methods */
- (id)initWithBundleIdentifier:(id)identifier options:(id)options;
- (id)requestAuthorization;
- (id)_presentDialogForUserInitiatedWithCompletion;
- (id)_startEngagementAuthorizationWithResult:(id)result;
@end

#endif /* AMSUserNotificationAuthorizationTask_h */
