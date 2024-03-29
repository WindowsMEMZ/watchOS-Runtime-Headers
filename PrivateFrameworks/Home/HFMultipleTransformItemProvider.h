//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFMultipleTransformItemProvider_h
#define HFMultipleTransformItemProvider_h
@import Foundation;

#include "HFItemProvider.h"
#include "HFItemProvider.h"

@class NSMutableDictionary, NSMutableSet;

@interface HFMultipleTransformItemProvider : HFItemProvider

@property (copy, nonatomic) id /* block */ transformationBlock;
@property (retain, nonatomic) NSMutableDictionary *transformedItems;
@property (retain, nonatomic) NSMutableSet *allItems;
@property (readonly, nonatomic) HFItemProvider *sourceProvider;

/* instance methods */
- (id)initWithSourceProvider:(id)provider;
- (id)initWithSourceProvider:(id)provider multipleTransformationBlock:(id /* block */)block;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)reloadItems;
- (id)_subclass_transformItem:(id)item;
- (id)items;
- (id)invalidationReasons;
@end

#endif /* HFMultipleTransformItemProvider_h */
