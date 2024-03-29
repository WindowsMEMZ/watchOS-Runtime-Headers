//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 6.2.9.0.0
//
#ifndef ASCLocalOffer_h
#define ASCLocalOffer_h
@import Foundation;

#include "ASCAdamID.h"
#include "ASCOffer-Protocol.h"
#include "ASCOfferMetadata.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface ASCLocalOffer : NSObject<ASCOffer, NSCopying>

@property (readonly, nonatomic) ASCOfferMetadata *metadata;
@property (readonly, copy, nonatomic) id /* block */ action;
@property (readonly, copy, nonatomic) ASCAdamID *id;
@property (readonly, copy, nonatomic) NSDictionary *titles;
@property (readonly, copy, nonatomic) NSDictionary *subtitles;
@property (readonly, nonatomic) long long flags;
@property (readonly, nonatomic) NSNumber *ageRating;
@property (readonly, nonatomic) NSArray *metrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMetadata:(id)metadata action:(id /* block */)action;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)price;
- (id)formattedPrice;
- (id)offerWithMetrics:(id)metrics;
- (BOOL)isEqual:(id)equal;
@end

#endif /* ASCLocalOffer_h */
