//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUIKey_h
#define TUIKey_h
@import Foundation;

@class NSString, UIKBTree;

@interface TUIKey : NSObject

@property (retain, nonatomic) UIKBTree *backingTree;
@property (retain, nonatomic) NSString *displayString;
@property (nonatomic) long long style;
@property (retain, nonatomic) UIKBTree *keyplane;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } paddedFrame;
@property (readonly, nonatomic) NSString *representedString;
@property (nonatomic) double multiplier;
@property (nonatomic) long long layoutType;
@property (nonatomic) long long layoutShape;
@property (nonatomic) BOOL inGridLayout;

/* class methods */
+ (id)keyFromKBTree:(id)kbtree;
+ (id)keyFromKBTree:(id)kbtree layoutType:(long long)type layoutShape:(long long)shape multiplier:(double)multiplier;

/* instance methods */
- (id)stringFromShape:(long long)shape;
- (id)stringFromLayoutType:(long long)type;
- (id)description;
@end

#endif /* TUIKey_h */
