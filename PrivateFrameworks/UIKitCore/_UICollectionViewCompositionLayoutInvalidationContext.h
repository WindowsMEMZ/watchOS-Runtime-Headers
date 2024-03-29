//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICollectionViewCompositionLayoutInvalidationContext_h
#define _UICollectionViewCompositionLayoutInvalidationContext_h
@import Foundation;

#include "UICollectionViewLayoutInvalidationContext.h"

@class NSMapTable;

@interface _UICollectionViewCompositionLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext

@property (retain, nonatomic) NSMapTable *invalidationContextTable;

/* instance methods */
- (void)_setInvalidationContextTable:(id)table;
- (id)_invalidationContextTable;
@end

#endif /* _UICollectionViewCompositionLayoutInvalidationContext_h */
