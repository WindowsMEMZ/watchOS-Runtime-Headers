//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UICollectionViewDiffableDataSourceReorderingHandlers_h
#define UICollectionViewDiffableDataSourceReorderingHandlers_h
@import Foundation;

#include "NSCopying-Protocol.h"

@interface UICollectionViewDiffableDataSourceReorderingHandlers : NSObject<NSCopying>

@property (copy, nonatomic) id /* block */ canReorderItemHandler;
@property (copy, nonatomic) id /* block */ willReorderHandler;
@property (copy, nonatomic) id /* block */ didReorderHandler;

/* instance methods */
- (id)initWithCanReorderItemHandler:(id /* block */)handler willReorderItemHandler:(id /* block */)handler didReorderItemHandler:(id /* block */)handler;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* UICollectionViewDiffableDataSourceReorderingHandlers_h */
