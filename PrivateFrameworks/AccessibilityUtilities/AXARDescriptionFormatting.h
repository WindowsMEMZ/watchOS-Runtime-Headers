//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXARDescriptionFormatting_h
#define AXARDescriptionFormatting_h
@import Foundation;

@interface AXARDescriptionFormatting : NSObject
/* class methods */
+ (id)descriptionForDistance:(float)distance objectFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame viewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
+ (id)_descriptionForDistance:(float)distance;
+ (double)_valueForPercentageFromRawValue:(double)value;
+ (id)_visibilityDescriptionForObjectFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame viewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
@end

#endif /* AXARDescriptionFormatting_h */
