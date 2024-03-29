//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSOpportunisticOptions_h
#define IDSOpportunisticOptions_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDate, NSDictionary;

@interface IDSOpportunisticOptions : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) NSArray *blocklistedDestinations;
@property (retain, nonatomic) NSDate *expiryDate;
@property (nonatomic) BOOL destinationsMustBeInContacts;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithBlocklistedDestinations:(id)destinations expiryDate:(id)date destinationsMustBeInContacts:(BOOL)contacts;
- (id)initWithDictionary:(id)dictionary;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IDSOpportunisticOptions_h */
