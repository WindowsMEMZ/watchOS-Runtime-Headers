//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CIMetalProcessor_h
#define CIMetalProcessor_h
@import Foundation;

#include "CIImageProcessorKernel.h"

@interface CIMetalProcessor : CIImageProcessorKernel
/* class methods */
+ (void)setFilterParams:(id)params arguments:(id)arguments filter:(id)filter;
+ (void)setFilterParamsAndImages:(id)images arguments:(id)arguments filter:(id)filter;
+ (BOOL)processWithInputs:(id)inputs arguments:(id)arguments output:(id)output error:(id *)error;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)input arguments:(id)arguments outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
+ (int)formatForInputAtIndex:(int)index;
+ (int)outputFormat;
+ (BOOL)synchronizeInputs;
+ (BOOL)allowPartialOutputRegion;
+ (BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)index;
+ (BOOL)allowSRGBTranferFuntionOnOutput;
@end

#endif /* CIMetalProcessor_h */
