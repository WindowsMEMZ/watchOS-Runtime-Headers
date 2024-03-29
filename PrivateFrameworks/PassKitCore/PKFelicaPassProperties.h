//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKFelicaPassProperties_h
#define PKFelicaPassProperties_h
@import Foundation;

#include "PKTransitPassProperties.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDateComponents, NSNumber, NSString;

@interface PKFelicaPassProperties : PKTransitPassProperties<NSCopying, NSSecureCoding>

@property (nonatomic) BOOL shinkansenTicketActive;
@property (nonatomic) BOOL greenCarTicketUsed;
@property (nonatomic) BOOL inShinkansenStation;
@property (nonatomic) BOOL balanceAllowedForCommute;
@property (nonatomic) BOOL lowBalanceGateNotificationEnabled;
@property (copy, nonatomic) NSDateComponents *shinkansenValidityStartDate;
@property (copy, nonatomic) NSNumber *shinkansenValidityTerm;
@property (copy, nonatomic) NSString *shinkansenOriginStation;
@property (copy, nonatomic) NSString *shinkansenDestinationStation;
@property (copy, nonatomic) NSDateComponents *shinkansenDepartureTime;
@property (copy, nonatomic) NSDateComponents *shinkansenArrivalTime;
@property (copy, nonatomic) NSString *shinkansenTrainName;
@property (copy, nonatomic) NSNumber *shinkansenCarNumber;
@property (copy, nonatomic) NSNumber *shinkansenSeatRow;
@property (copy, nonatomic) NSNumber *shinkansenSeatNumber;
@property (copy, nonatomic) NSString *shinkansenSecondaryOriginStation;
@property (copy, nonatomic) NSString *shinkansenSecondaryDestinationStation;
@property (copy, nonatomic) NSDateComponents *shinkansenSecondaryDepartureTime;
@property (copy, nonatomic) NSDateComponents *shinkansenSecondaryArrivalTime;
@property (copy, nonatomic) NSString *shinkansenSecondaryTrainName;
@property (copy, nonatomic) NSNumber *shinkansenSecondaryCarNumber;
@property (copy, nonatomic) NSNumber *shinkansenSecondarySeatRow;
@property (copy, nonatomic) NSNumber *shinkansenSecondarySeatNumber;
@property (copy, nonatomic) NSString *greenCarOriginStation;
@property (copy, nonatomic) NSString *greenCarDestinationStation;
@property (copy, nonatomic) NSDateComponents *greenCarValidityStartDate;
@property (nonatomic) BOOL hasGreenCarTicket;
@property (nonatomic) BOOL hasShinkansenTicket;

/* class methods */
+ (id)passPropertiesForPass:(id)pass;
+ (BOOL)supportsSecureCoding;
+ (Class)equalityClass;

/* instance methods */
- (id)initWithFelicaAppletState:(id)state paymentApplication:(id)application;
- (id)initWithTransitAppletState:(id)state paymentApplication:(id)application fieldCollection:(id)collection;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)displayableShinkansenSeat;
- (id)displayableShinkansenSecondarySeat;
- (BOOL)isInShinkansenStation;
- (BOOL)isInStation;
- (id)_stringForRow:(id)row seat:(id)seat;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (BOOL)isShinkansenTicketActive;
- (BOOL)isGreenCarTicketUsed;
- (BOOL)isBalanceAllowedForCommute;
- (BOOL)isLowBalanceGateNotificationEnabled;
@end

#endif /* PKFelicaPassProperties_h */
