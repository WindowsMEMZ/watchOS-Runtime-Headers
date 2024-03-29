//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef NSCollectionLayoutDecorationItem_h
#define NSCollectionLayoutDecorationItem_h
@import Foundation;

#include "NSCollectionLayoutItem.h"
#include "NSCollectionLayoutAnchor.h"
#include "NSCollectionLayoutBoundarySupplementaryItem.h"
#include "NSCollectionLayoutDecorationItem.h"
#include "NSCollectionLayoutItem.h"
#include "NSCollectionLayoutSize.h"
#include "NSCollectionLayoutSupplementaryItem.h"
#include "NSCopying-Protocol.h"
#include "_UICollectionLayoutAuxillaryItem-Protocol.h"

@class NSString;

@interface NSCollectionLayoutDecorationItem : NSCollectionLayoutItem<_UICollectionLayoutAuxillaryItem, NSCopying>

@property (retain, nonatomic) NSString *elementKind;
@property (retain, nonatomic) NSCollectionLayoutAnchor *containerAnchor;
@property (retain, nonatomic) NSCollectionLayoutAnchor *itemAnchor;
@property (nonatomic) BOOL isBackgroundDecoration;
@property (retain, nonatomic) Class _registrationViewClass;
@property (nonatomic) long long zIndex;
@property (readonly, nonatomic) NSCollectionLayoutSize *size;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } _effectiveContentInsets;
@property (readonly, nonatomic) NSCollectionLayoutItem *item;
@property (readonly, nonatomic) NSCollectionLayoutSupplementaryItem *supplementaryItem;
@property (readonly, nonatomic) NSCollectionLayoutBoundarySupplementaryItem *boundarySupplementaryItem;
@property (readonly, nonatomic) NSCollectionLayoutDecorationItem *decorationItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)backgroundDecorationItemWithElementKind:(id)kind;
+ (id)decorationItemWithSize:(id)size elementKind:(id)kind containerAnchor:(id)anchor;
+ (id)itemWithLayoutSize:(id)size;
+ (id)itemWithLayoutSize:(id)size supplementaryItems:(id)items;

/* instance methods */
- (id)initWithElementKind:(id)kind size:(id)size contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })insets containerAnchor:(id)anchor itemAnchor:(id)anchor zIndex:(long long)index registrationViewClass:(Class)class isBackgroundDecoration:(BOOL)decoration;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)_externalDescription;
- (void)_setRegistrationViewClass:(Class)class;
@end

#endif /* NSCollectionLayoutDecorationItem_h */
