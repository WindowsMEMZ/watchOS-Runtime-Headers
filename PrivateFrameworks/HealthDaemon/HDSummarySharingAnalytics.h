//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSummarySharingAnalytics_h
#define HDSummarySharingAnalytics_h
@import Foundation;

@class NSDate;

@interface HDSummarySharingAnalytics : NSObject

@property (nonatomic) long long numberAuthorizationsSharingOut;
@property (nonatomic) double averageNumberAuthorizationsSharedOutPerPerson;
@property (nonatomic) long long maxAuthorizationsSharedOutPerPerson;
@property (nonatomic) long long minAuthorizationsSharedOutPerPerson;
@property (nonatomic) long long numberPeopleSharingOut;
@property (nonatomic) long long numberPeopleSharingIn;
@property (copy, nonatomic) NSDate *mostRecentIncomingTransactionDate;
@property (nonatomic) long long numberOfAlertNotificationsEnabled;
@property (nonatomic) long long numberOfTrendNotificationsEnabled;
@property (nonatomic) long long numberOfUpdateNotificationsEnabled;
@property (copy, nonatomic) NSDate *askSomeoneToShareLastSelectedDate;
@property (copy, nonatomic) NSDate *sharingAuthorizationLastViewedDate;
@property (copy, nonatomic) NSDate *sharingContactOptionLastSelectedDate;

/* instance methods */
@end

#endif /* HDSummarySharingAnalytics_h */
