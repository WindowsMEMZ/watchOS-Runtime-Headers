//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef NSValue_BSCoding_h
#define NSValue_BSCoding_h
@import Foundation;

@interface NSValue (BSCoding) <BSXPCSecureCoding>
/* class methods */
+ (id)bs_valueWithCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cgrect;
+ (id)bs_valueWithCGSize:(struct CGSize { double x0; double x1; })cgsize;
+ (id)bs_valueWithCGPoint:(struct CGPoint { double x0; double x1; })cgpoint;
+ (id)bs_valueWithCGAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
+ (BOOL)supportsBSXPCSecureCoding;

/* instance methods */
- (BOOL)bs_getValue:(out void *)value ofSize:(unsigned long long)size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bs_CGRectValue;
- (struct CGSize { double x0; double x1; })bs_CGSizeValue;
- (struct CGPoint { double x0; double x1; })bs_CGPointValue;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })bs_CGAffineTransformValue;
- (BOOL)supportsBSXPCSecureCoding;
- (void)encodeWithBSXPCCoder:(id)bsxpccoder;
- (id)initWithBSXPCCoder:(id)bsxpccoder;
@end

#endif /* NSValue_BSCoding_h */
