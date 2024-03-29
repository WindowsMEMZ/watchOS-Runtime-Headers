//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIPageIndicatorStoreObject_h
#define _UIPageIndicatorStoreObject_h
@import Foundation;

#include "UIImage.h"

@interface _UIPageIndicatorStoreObject : NSObject

@property (retain, nonatomic) UIImage *customImage;
@property (nonatomic) struct CGSize { double x0; double x1; } indicatorSize;
@property (retain, nonatomic) UIImage *activeImage;
@property (nonatomic) struct CGSize { double x0; double x1; } activeIndicatorSize;
@property (nonatomic) long long startIndex;
@property (nonatomic) long long endIndex;
@property (readonly, nonatomic) BOOL hasImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } resolvedSize;

/* instance methods */
- (id)initWithStartIndex:(long long)index endIndex:(long long)index;
- (void)_copyImagesFromObject:(id)object;
- (void)invalidateLayoutInfo;
- (BOOL)validPageWithinBound:(long long)bound;
- (id)splitAtIndex:(long long)index withImage:(id)image active:(BOOL)active;
- (id)description;
@end

#endif /* _UIPageIndicatorStoreObject_h */
