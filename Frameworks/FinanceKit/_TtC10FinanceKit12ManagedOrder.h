//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 143.7.11.0.0
//
#ifndef _TtC10FinanceKit12ManagedOrder_h
#define _TtC10FinanceKit12ManagedOrder_h
@import Foundation;

#include "NSManagedObject.h"

@class NSDate, NSString;

@interface FinanceKit.ManagedOrder : NSManagedObject // (Swift)

@property (nonatomic, @dynamic, copy) NSString *orderTypeIdentifier;
@property (nonatomic, @dynamic, copy) NSString *orderIdentifier;
@property (nonatomic, @dynamic, copy) NSString *authenticationToken;
@property (nonatomic, @dynamic) long long updateSequenceNumber;
@property (nonatomic, @dynamic) long long fetchSequenceNumber;
@property (nonatomic, @dynamic, copy) NSString *lastModifiedValue;
@property (nonatomic, @dynamic) long long requestAttemptCount;
@property (nonatomic, @dynamic, copy) NSDate *lastRequestAttemptDate;
@property (nonatomic, @dynamic, retain) FinanceKit.ManagedOrderRegistration *orderRegistration;
@property (nonatomic, @dynamic, retain) FinanceKit.ManagedOrderType *orderType;
@property (nonatomic, @dynamic, retain) FinanceKit.ManagedOrderWebService *orderWebService;
@property (nonatomic, @dynamic, retain) FinanceKit.ManagedOrderContents *orderContents;
@property (nonatomic, @dynamic, copy) NSDate *orderContentsModificationDate;
@property (nonatomic, @dynamic) BOOL automaticUpdatesEnabled;
@property (nonatomic, @dynamic, copy) NSDate *automaticUpdatesEnabledModificationDate;
@property (nonatomic, @dynamic) BOOL notificationsEnabled;
@property (nonatomic, @dynamic, copy) NSDate *notificationsEnabledModificationDate;
@property (nonatomic, @dynamic) BOOL effectiveNotificationsEnabled;
@property (nonatomic, @dynamic) BOOL isMarkedAsComplete;
@property (nonatomic, @dynamic, copy) NSDate *isMarkedAsCompleteModificationDate;
@property (nonatomic, @dynamic) BOOL effectiveAutomaticUpdatesEnabled;
@property (nonatomic, @dynamic, copy) NSString *applePayTransactionIdentifier;
@property (nonatomic, @dynamic, copy) NSDate *creationDate;
@property (nonatomic, @dynamic, copy) NSDate *archiveDate;
@property (nonatomic, @dynamic, copy) NSDate *showsAsActiveUntilDate;
@property (nonatomic, @dynamic, copy) NSDate *automaticUpdatesEnabledUntilDate;
@property (nonatomic, @dynamic, retain) FinanceKit.ManagedOrderMonth *orderMonth;
@property (nonatomic, @dynamic) BOOL showsAsActive;
@property (nonatomic, @dynamic) BOOL isActive;
@property (nonatomic, @dynamic) short statusPriorityValue;
@property (nonatomic, @dynamic, copy) NSDate *orderContentsUpdatedDate;
@property (nonatomic, @dynamic, copy) NSDate *priorityEstimatedCompletionDate;

/* instance methods */
- (void)awakeFromInsert;
- (void)willSave;
- (id)initWithEntity:(id)entity insertIntoManagedObjectContext:(id)context;
@end

#endif /* _TtC10FinanceKit12ManagedOrder_h */
