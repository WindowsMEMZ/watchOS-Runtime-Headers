//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentApplicationUsageSummary_h
#define PKPaymentApplicationUsageSummary_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDate, NSString;

@interface PKPaymentApplicationUsageSummary : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSString *passUniqueIdentifier;
@property (retain, nonatomic) NSString *paymentApplicationIdentifier;
@property (retain, nonatomic) NSDate *lastUsed;
@property (retain, nonatomic) NSDate *lastUsedTransaction;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)_databaseInit;
- (id)initWithPassUniqueIdentifier:(id)identifier paymentApplicationIdentifier:(id)identifier lastUsed:(id)used;
- (id)initWithPassUniqueIdentifier:(id)identifier paymentApplicationIdentifier:(id)identifier lastUsedTransaction:(id)transaction;
- (id)initWithPassUniqueIdentifier:(id)identifier paymentApplicationIdentifier:(id)identifier lastUsed:(id)used lastUsedTransaction:(id)transaction;
- (void)updateWithSummary:(id)summary;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* PKPaymentApplicationUsageSummary_h */
