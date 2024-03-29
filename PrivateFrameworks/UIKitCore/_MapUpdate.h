//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _MapUpdate_h
#define _MapUpdate_h
@import Foundation;

@class NSIndexPath;

@interface _MapUpdate : NSObject

@property (nonatomic) BOOL isSectionUpdate;
@property (nonatomic) BOOL isInsert;
@property (nonatomic) BOOL isDelete;
@property (nonatomic) BOOL isMove;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) NSIndexPath *moveFromIndexPath;
@property (retain, nonatomic) NSIndexPath *moveToIndexPath;
@property (nonatomic) long long index;
@property (nonatomic) long long section;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } insertRange;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } deleteRange;
@property (nonatomic) long long moveFromSection;
@property (nonatomic) long long moveToSection;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } moveFromRange;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } moveToRange;

/* class methods */
+ (id)itemInsertSection:(long long)section insertRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
+ (id)itemInsertItemAtIndexPath:(id)path index:(long long)index;
+ (id)itemDeleteSection:(long long)section deleteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
+ (id)itemDeleteItemAtIndexPath:(id)path index:(long long)index;
+ (id)itemMoveSection:(long long)section toSection:(long long)section fromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
+ (id)itemMoveFromIndexIndexPath:(id)path toIndexPath:(id)path fromIndex:(long long)index toIndex:(long long)index;

/* instance methods */
- (id)description;
- (id)reverseUpdateItem;
@end

#endif /* _MapUpdate_h */
