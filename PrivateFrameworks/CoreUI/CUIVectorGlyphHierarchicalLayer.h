//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 866.4.0.0.0
//
#ifndef CUIVectorGlyphHierarchicalLayer_h
#define CUIVectorGlyphHierarchicalLayer_h
@import Foundation;

#include "CUIVectorGlyphLayer.h"

@interface CUIVectorGlyphHierarchicalLayer : CUIVectorGlyphLayer

@property (readonly, nonatomic) unsigned long long hierarchyLevel;

/* instance methods */
- (void)_readCSSAttributes:(struct CGSVGAttributeMap *)cssattributes;
- (id)debugDescription;
- (void)drawInContext:(struct CGContext *)context scaleFactor:(double)factor targetSize:(struct CGSize { double x0; double x1; })size variableMinValue:(double)value variableMaxValue:(double)value hierarchicalColorResolver:(id /* block */)resolver;
- (struct CGImage *)createImageUsingScaleFactor:(double)factor targetSize:(struct CGSize { double x0; double x1; })size variableMinValue:(double)value variableMaxValue:(double)value hierarchicalColorResolver:(id /* block */)resolver;
- (void)drawInContext:(struct CGContext *)context scaleFactor:(double)factor targetSize:(struct CGSize { double x0; double x1; })size variableMinValue:(double)value variableMaxValue:(double)value paletteColorResolver:(id /* block */)resolver;
- (struct CGImage *)createImageUsingScaleFactor:(double)factor targetSize:(struct CGSize { double x0; double x1; })size variableMinValue:(double)value variableMaxValue:(double)value paletteColorResolver:(id /* block */)resolver;
@end

#endif /* CUIVectorGlyphHierarchicalLayer_h */
