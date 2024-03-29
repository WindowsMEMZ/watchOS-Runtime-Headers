//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITextSelectionRectCustomHandleInfo_h
#define UITextSelectionRectCustomHandleInfo_h
@import Foundation;

@interface UITextSelectionRectCustomHandleInfo : NSObject

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } bottomLeft;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } topLeft;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } bottomRight;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } topRight;

/* instance methods */
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* UITextSelectionRectCustomHandleInfo_h */
