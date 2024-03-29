//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKTransitCommutePlan_h
#define PKTransitCommutePlan_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PKPassField.h"

@class NSArray, NSDate, NSMutableDictionary, NSString;

@interface PKTransitCommutePlan : NSObject<NSSecureCoding, NSCopying> {
  /* instance variables */
  NSMutableDictionary *_fieldsByKey;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *deviceAccountIdentifiers;
@property (copy, nonatomic) PKPassField *title;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSArray *details;
@property (nonatomic) unsigned long long properties;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *expiryDate;
@property (copy, nonatomic) NSString *startDateString;
@property (copy, nonatomic) NSString *expiryDateString;
@property (copy, nonatomic) PKPassField *usage;
@property (nonatomic) BOOL requiresAppletSourceOfTruth;
@property (readonly, copy, nonatomic) NSString *formattedDateString;
@property (readonly, nonatomic) BOOL hasExpiredPlanDate;
@property (readonly, nonatomic) BOOL isPlanAvailable;
@property (readonly, nonatomic) BOOL isPlanDisplayable;
@property (readonly, nonatomic) BOOL hasDisplayableInformation;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)_updateFieldsByKey;
- (void)_updateProperties;
- (id)passFieldForKey:(id)key;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)_expiryField;
- (id)_startField;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* PKTransitCommutePlan_h */
