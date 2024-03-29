//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSContentPackage_h
#define TPSContentPackage_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TPSAssetSizes.h"
#include "TPSCollection.h"

@class NSArray, NSDictionary, NSString;

@interface TPSContentPackage : NSObject<NSCopying, NSSecureCoding>

@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSArray *orderedCollectionIdentifiers;
@property (retain, nonatomic) NSArray *savedTipIdentifiers;
@property (retain, nonatomic) NSArray *collectionSections;
@property (retain, nonatomic) NSArray *userGuides;
@property (retain, nonatomic) NSDictionary *collectionSectionMap;
@property (retain, nonatomic) NSDictionary *collectionMap;
@property (retain, nonatomic) NSDictionary *tipMap;
@property (retain, nonatomic) TPSAssetSizes *assetSizes;
@property (retain, nonatomic) TPSCollection *featuredCollection;
@property (readonly, nonatomic) NSArray *orderedCollections;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)updateOrderedCollectionIdentifiers;
- (BOOL)hasTipContent;
- (void)encodeWithCoder:(id)coder;
- (id)debugDescription;
@end

#endif /* TPSContentPackage_h */
