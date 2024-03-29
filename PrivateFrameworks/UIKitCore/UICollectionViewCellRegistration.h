//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UICollectionViewCellRegistration_h
#define UICollectionViewCellRegistration_h
@import Foundation;

#include "UICollectionView.h"
#include "UINib.h"

@class NSString;

@interface UICollectionViewCellRegistration : NSObject

@property (readonly, weak, nonatomic) UICollectionView *_collectionViewRequestingViewWhenCreated;
@property (readonly, nonatomic) NSString *reuseIdentifier;
@property (readonly, nonatomic) BOOL hasCellClass;
@property (readonly, nonatomic) BOOL hasCellNib;
@property (readonly, nonatomic) Class cellClass;
@property (readonly, nonatomic) UINib *cellNib;
@property (readonly, nonatomic) id /* block */ configurationHandler;

/* class methods */
+ (id)registrationWithCellClass:(Class)class configurationHandler:(id /* block */)handler;
+ (id)registrationWithCellNib:(id)nib configurationHandler:(id /* block */)handler;

/* instance methods */
- (id)initWithCellClass:(Class)class cellNib:(id)nib configurationHandler:(id /* block */)handler reuseIdentifier:(id)identifier;
@end

#endif /* UICollectionViewCellRegistration_h */
