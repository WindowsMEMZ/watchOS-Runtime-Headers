//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountServicePayLaterFinancingPlanQuery_h
#define PKAccountServicePayLaterFinancingPlanQuery_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDate, NSString;

@interface PKAccountServicePayLaterFinancingPlanQuery : NSObject<NSSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) NSString *queryIdentifier;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) unsigned long long queryItems;
@property (nonatomic) long long upcomingInstallmentsLimit;
@property (copy, nonatomic) NSArray *relevantFinancingPlanStates;
@property (copy, nonatomic) NSArray *countFinancingPlanStates;
@property (copy, nonatomic) NSDate *transactionStartDate;
@property (copy, nonatomic) NSDate *transactionEndDate;
@property (copy, nonatomic) NSDate *installmentDueOrPaidDateStart;
@property (copy, nonatomic) NSDate *installmentDueOrPaidDateEnd;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)descriptionForQueryItems:(unsigned long long)items;

/* instance methods */
- (id)initWithAccountIdentifier:(id)identifier queryItems:(unsigned long long)items;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)_isEqualToFinancingPlanQuery:(id)query;
@end

#endif /* PKAccountServicePayLaterFinancingPlanQuery_h */
