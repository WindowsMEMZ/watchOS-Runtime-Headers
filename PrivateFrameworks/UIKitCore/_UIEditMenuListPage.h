//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIEditMenuListPage_h
#define _UIEditMenuListPage_h
@import Foundation;

@interface _UIEditMenuListPage : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, nonatomic) double width;

/* instance methods */
- (id)initWithStartIndex:(long long)index;
- (void)appendItemWithWidth:(double)width;
- (void)prependItemWithWidth:(double)width;
- (void)removeLastItemWithWidth:(double)width;
- (void)enforceMinimumWidth:(double)width;
- (id)description;
@end

#endif /* _UIEditMenuListPage_h */
