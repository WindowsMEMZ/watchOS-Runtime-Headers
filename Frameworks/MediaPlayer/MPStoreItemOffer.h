//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPStoreItemOffer_h
#define MPStoreItemOffer_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface MPStoreItemOffer : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSArray *assets;
@property (readonly, copy, nonatomic) NSString *buyParameters;
@property (readonly, copy, nonatomic) NSString *formattedPrice;
@property (readonly, copy, nonatomic) NSString *offerType;
@property (readonly, copy, nonatomic) NSNumber *price;
@property (readonly, copy, nonatomic) NSDictionary *lookupDictionary;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithLookupDictionary:(id)dictionary;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)actionTextForType:(id)type;
@end

#endif /* MPStoreItemOffer_h */
