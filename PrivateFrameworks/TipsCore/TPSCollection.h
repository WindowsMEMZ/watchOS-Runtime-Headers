//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSCollection_h
#define TPSCollection_h
@import Foundation;

#include "TPSDocument.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TPSAssets.h"
#include "TPSContent.h"
#include "TPSGradient.h"

@class NSArray, NSString;

@interface TPSCollection : TPSDocument<NSCopying, NSSecureCoding>

@property (@dynamic, nonatomic) long long count;
@property (copy, nonatomic) NSString *shortTitle;
@property (copy, @dynamic, nonatomic) NSString *title;
@property (copy, @dynamic, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *countText;
@property (copy, nonatomic) TPSContent *featuredContent;
@property (copy, nonatomic) TPSContent *tileContent;
@property (copy, nonatomic) TPSAssets *tocAssets;
@property (copy, nonatomic) TPSAssets *collectionAssets;
@property (copy, nonatomic) TPSGradient *gradient;
@property (readonly, @dynamic, nonatomic) BOOL checklist;
@property (nonatomic) BOOL topFeatured;
@property (nonatomic) BOOL containsIntroTip;
@property (copy, nonatomic) NSArray *tipIdentifiers;
@property (readonly, @dynamic, nonatomic) long long priority;
@property (readonly, copy, @dynamic, nonatomic) NSString *featuredTitle;
@property (readonly, copy, nonatomic) NSString *featuredText;
@property (readonly, copy, @dynamic, nonatomic) TPSAssets *featuredAssets;
@property (readonly, copy, @dynamic, nonatomic) TPSAssets *tileAssets;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)collectionLabelForDictionary:(id)dictionary;
+ (id)collectionOrderIdentifierForDictionary:(id)dictionary;
+ (id)tipIdentifiersForDictionary:(id)dictionary;
+ (id)na_identity;

/* instance methods */
- (id)initWithDictionary:(id)dictionary metadata:(id)metadata;
- (id)initWithIdentifier:(id)identifier title:(id)title text:(id)text metadata:(id)metadata tocAssets:(id)assets collectionAssets:(id)assets tipIdentifiers:(id)identifiers;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)URLWithReferrer:(id)referrer;
- (void)updateWithContentDictionary:(id)dictionary metadata:(id)metadata clientConditionIdentifier:(id)identifier fileIdMap:(id)map clientConditions:(id)conditions;
- (BOOL)isChecklist;
- (BOOL)isHardwareWelcome;
- (BOOL)isSoftwareWelcome;
- (id)debugDescription;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (BOOL)isTopFeatured;
@end

#endif /* TPSCollection_h */
