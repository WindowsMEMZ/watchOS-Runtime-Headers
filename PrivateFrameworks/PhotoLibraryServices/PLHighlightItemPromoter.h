//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLHighlightItemPromoter_h
#define PLHighlightItemPromoter_h
@import Foundation;

#include "PLHighlightItemPromoterRule-Protocol.h"

@interface PLHighlightItemPromoter : NSObject

@property (readonly, nonatomic) NSObject<PLHighlightItemPromoterRule> *rule;

/* instance methods */
- (id)initWithRule:(id)rule;
- (void)processHighlightItemsInHighlightItemList:(id)list currentlyPromotedHighlightItems:(id)items withSharingConsideration:(long long)consideration resultBlock:(id /* block */)block;
@end

#endif /* PLHighlightItemPromoter_h */
