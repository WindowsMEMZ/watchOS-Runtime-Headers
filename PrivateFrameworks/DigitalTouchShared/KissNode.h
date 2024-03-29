//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 571.0.0.0.0
//
#ifndef KissNode_h
#define KissNode_h
@import Foundation;

@class SKShader, SKSpriteNode, UIColor;

@interface KissNode : NSObject

@property (nonatomic) BOOL leavesMark;
@property (retain, nonatomic) SKSpriteNode *node;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) SKShader *shader;
@property (nonatomic) double colorBlendFactor;
@property (nonatomic) long long blendMode;
@property (nonatomic) struct CGPoint { double x0; double x1; } position;
@property (nonatomic) double zRotation;

/* class methods */
+ (id)kissNodeWithColor:(id)color size:(struct CGSize { double x0; double x1; })size;

/* instance methods */
- (void)setColorBlendMode:(long long)mode;
- (void)setScale:(double)scale;
- (void)runAction:(id)action;
- (void)removeFromParent;
@end

#endif /* KissNode_h */
