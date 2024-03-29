//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 143.7.11.0.0
//
#ifndef _TtC10FinanceKit20ManagedOrderContents_h
#define _TtC10FinanceKit20ManagedOrderContents_h
@import Foundation;

#include "NSManagedObject.h"

@class NSArray, NSDate, NSSet, NSString, NSURL;

@interface FinanceKit.ManagedOrderContents : NSManagedObject // (Swift)

@property (nonatomic, @dynamic, retain) NSSet *associatedApplicationObjects;
@property (nonatomic, @dynamic, copy) NSArray *associatedApplicationIdentifiers;
@property (nonatomic, @dynamic, retain) NSSet *images;
@property (nonatomic, @dynamic, retain) NSSet *receipts;
@property (nonatomic, @dynamic, retain) NSSet *returnLabels;
@property (nonatomic, @dynamic, retain) NSSet *lineItemObjects;
@property (nonatomic, @dynamic, retain) FinanceKit.ManagedOrderMerchant *merchant;
@property (nonatomic, @dynamic, retain) FinanceKit.ManagedOrderData *orderData;
@property (nonatomic, @dynamic, copy) NSString *orderNumber;
@property (nonatomic, @dynamic) short orderTypeValue;
@property (nonatomic, @dynamic) short changeNotificationsValue;
@property (nonatomic, @dynamic) short statusValue;
@property (nonatomic, @dynamic, retain) FinanceKit.LocalizedString *statusDescription;
@property (nonatomic, @dynamic, copy) NSDate *createdDate;
@property (nonatomic, @dynamic, copy) NSDate *updatedDate;
@property (nonatomic, @dynamic, copy) NSURL *orderManagementURL;
@property (nonatomic, @dynamic, retain) FinanceKit.ManagedOrderPayment *payment;
@property (nonatomic, @dynamic, retain) FinanceKit.ManagedOrderReturnInfo *returnInfo;
@property (nonatomic, @dynamic, retain) NSSet *returnObjects;
@property (nonatomic, @dynamic, retain) NSSet *shippingFulfillmentObjects;
@property (nonatomic, @dynamic, retain) NSSet *pickupFulfillmentObjects;
@property (nonatomic, @dynamic, copy) NSString *customerFamilyName;
@property (nonatomic, @dynamic, copy) NSString *customerGivenName;
@property (nonatomic, @dynamic, copy) NSString *customerOrganizationName;
@property (nonatomic, @dynamic, copy) NSString *customerEmailAddress;
@property (nonatomic, @dynamic, copy) NSString *customerPhoneNumber;
@property (nonatomic, @dynamic, retain) FinanceKit.ManagedOrderBarcode *barcode;
@property (nonatomic, @dynamic, retain) FinanceKit.LocalizedString *orderProviderDisplayName;
@property (nonatomic, @dynamic, copy) NSString *orderProviderTrackingLogoNameDarkColorScheme;
@property (nonatomic, @dynamic, copy) NSString *orderProviderTrackingLogoNameLightColorScheme;
@property (nonatomic, @dynamic, copy) NSURL *orderProviderURL;
@property (nonatomic, @dynamic) BOOL hasActiveFulfillment;
@property (nonatomic, @dynamic) short schemaVersion;
@property (nonatomic, @dynamic) short internalSchemaVersion;
@property (nonatomic, @dynamic) short statusPriorityValue;
@property (nonatomic, @dynamic, copy) NSDate *priorityEstimatedCompletionDate;

/* instance methods */
- (id)initWithEntity:(id)entity insertIntoManagedObjectContext:(id)context;
@end

#endif /* _TtC10FinanceKit20ManagedOrderContents_h */
