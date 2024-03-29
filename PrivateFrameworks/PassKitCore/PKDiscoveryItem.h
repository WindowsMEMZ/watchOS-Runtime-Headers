//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDiscoveryItem_h
#define PKDiscoveryItem_h
@import Foundation;

#include "PKDiscoveryObject.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSData, NSURL;

@interface PKDiscoveryItem : PKDiscoveryObject<NSSecureCoding, NSCopying>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSURL *layoutBundleURL;
@property (retain, nonatomic) NSArray *supportedLocalizations;
@property (nonatomic) BOOL shouldBadge;
@property (nonatomic) long long priority;
@property (nonatomic) BOOL entitledToForceLargeCard;
@property (retain, nonatomic) NSData *clientData;
@property (readonly, nonatomic) BOOL hasHitMaxViewCount;
@property (readonly, nonatomic) BOOL hasHitMaxLargeViewCount;

/* class methods */
+ (id)convertEngagementRequestToDictionary:(id)dictionary;
+ (id)activeItemFromEngagementRequest:(id)request;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (void)updateForRuleResult:(BOOL)result;
- (void)updateWithDiscoveryItem:(id)item;
- (id)eventForKey:(id)key;
- (BOOL)isTerminalStatus;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* PKDiscoveryItem_h */
