//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 93.0.0.0.0
//
#ifndef NSLayoutConstraint_NAUIAdditions_h
#define NSLayoutConstraint_NAUIAdditions_h
@import Foundation;

@interface NSLayoutConstraint (NAUIAdditions)
/* class methods */
+ (BOOL)naui_areConstraints:(id)constraints equalToConstraints:(id)constraints;
+ (id)naui_constraintsByCenteringView:(id)view withView:(id)view alongAxes:(unsigned long long)axes offset:(struct UIOffset { double x0; double x1; })offset;
+ (id)naui_constraintsByAttachingView:(id)view toView:(id)view alongEdges:(unsigned long long)edges relatedBy:(long long)by insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
+ (id)naui_constraintsByAttachingView:(id)view toView:(id)view alongEdges:(unsigned long long)edges insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
+ (id)naui_constraintsBySizingView:(id)view toSize:(struct CGSize { double x0; double x1; })size;
+ (id)naui_viewsInConstraints:(id)constraints;
+ (id)naui_constraintsWithVisualFormat:(id)format options:(unsigned long long)options metrics:(id)metrics views:(id)views label:(id)label;

/* instance methods */
- (BOOL)naui_isEqualToConstraint:(id)constraint;
- (id)naui_debugIdentifierWithBaseLabel:(id)label;
- (void)naui_setIdentifierWithLabel:(id)label;
@end

#endif /* NSLayoutConstraint_NAUIAdditions_h */
