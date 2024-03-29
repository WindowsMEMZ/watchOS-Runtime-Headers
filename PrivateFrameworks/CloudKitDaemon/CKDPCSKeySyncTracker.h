//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDPCSKeySyncTracker_h
#define CKDPCSKeySyncTracker_h
@import Foundation;

@class NSDate, NSError, NSNumber, NSString;
@protocol OS_dispatch_group;

@interface CKDPCSKeySyncTracker : NSObject

@property (readonly, nonatomic) unsigned long long state;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *accountDsid;
@property (nonatomic) BOOL manatee;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *syncGroup;
@property (retain, nonatomic) NSDate *completionDate;
@property (retain, nonatomic) NSNumber *syncStatus;
@property (retain, nonatomic) NSError *syncError;
@property (nonatomic) BOOL KRSReturnedExistingIdentity;
@property (copy, nonatomic) NSString *requestorOperationID;

/* instance methods */
- (void)waitOnSyncWithQueue:(id)queue waiterOperationID:(id)id handler:(id /* block */)handler;
- (BOOL)isManatee;
@end

#endif /* CKDPCSKeySyncTracker_h */
