//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1205.1.1.2.0
//
#ifndef CUIKORTextDrawInfo_h
#define CUIKORTextDrawInfo_h
@import Foundation;

@interface CUIKORTextDrawInfo : NSObject

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic) id /* block */ renderingBlock;

/* instance methods */
- (id)initWithContentSize:(struct CGSize { double x0; double x1; })size renderingBlock:(id /* block */)block;
@end

#endif /* CUIKORTextDrawInfo_h */
