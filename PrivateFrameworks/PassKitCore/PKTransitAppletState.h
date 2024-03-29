//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKTransitAppletState_h
#define PKTransitAppletState_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PKFelicaTransitAppletState.h"

@class NSArray, NSDate, NSDecimalNumber, NSNumber, NSString;

@interface PKTransitAppletState : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) PKFelicaTransitAppletState *felicaState;
@property (nonatomic) BOOL blacklisted;
@property (copy, nonatomic) NSNumber *historySequenceNumber;
@property (copy, nonatomic) NSNumber *serverRefreshIdentifier;
@property (copy, nonatomic) NSDecimalNumber *balance;
@property (copy, nonatomic) NSNumber *loyaltyBalance;
@property (copy, nonatomic) NSString *currency;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSArray *balances;
@property (copy, nonatomic) NSArray *commutePlans;
@property (copy, nonatomic) NSArray *enrouteTransitTypes;
@property (nonatomic) BOOL needsStationProcessing;
@property (nonatomic) BOOL appletStateDirty;
@property (readonly, @dynamic, nonatomic) BOOL inStation;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isInStation;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)processUpdateWithAppletHistory:(id)history concreteTransactions:(id *)transactions ephemeralTransaction:(id *)transaction;
- (id)processUpdateWithAppletHistory:(id)history concreteTransactions:(id *)transactions ephemeralTransaction:(id *)transaction mutatedBalances:(id *)balances;
- (id)processUpdateWithAppletHistory:(id)history concreteTransactions:(id *)transactions ephemeralTransaction:(id *)transaction mutatedBalances:(id *)balances balanceLabelDictionary:(id)dictionary;
- (id)processUpdateWithAppletHistory:(id)history concreteTransactions:(id *)transactions ephemeralTransaction:(id *)transaction mutatedBalances:(id *)balances balanceLabelDictionary:(id)dictionary unitDictionary:(id)dictionary;
- (id)processUpdateWithAppletHistory:(id)history concreteTransactions:(id *)transactions ephemeralTransaction:(id *)transaction mutatedBalances:(id *)balances balanceLabelDictionary:(id)dictionary unitDictionary:(id)dictionary planLabelDictionary:(id)dictionary;
- (id)updatedEnrouteTransitTypesFromExistingTypes:(id)types newTypes:(id)types;
- (void)_resolveTransactionsFromState:(id)state toState:(id)state withHistoryRecords:(id)records concreteTransactions:(id *)transactions ephemeralTransaction:(id *)transaction balanceLabels:(id)labels unitDictionary:(id)dictionary planLabels:(id)labels;
- (id)transitPassPropertiesWithPaymentApplication:(id)application;
- (id)transitPassPropertiesWithPaymentApplication:(id)application pass:(id)pass;
- (id)transitPassPropertiesWithPaymentApplication:(id)application fieldCollection:(id)collection;
- (void)addEnrouteTransitType:(id)type;
- (BOOL)isBlacklisted;
@end

#endif /* PKTransitAppletState_h */
