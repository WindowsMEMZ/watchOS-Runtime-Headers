//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 581.0.0.0.0
//
#ifndef TDPhotoshopRenditionSpec_h
#define TDPhotoshopRenditionSpec_h
@import Foundation;

#include "TDRenditionSpec.h"
#include "TDImageColorHistogram.h"
#include "TDPhotoshopLayer.h"

@interface TDPhotoshopRenditionSpec : TDRenditionSpec

@property (retain, @dynamic, nonatomic) TDPhotoshopLayer *photoshopLayer;
@property (@dynamic, nonatomic) BOOL isTintable;
@property (retain, nonatomic) TDImageColorHistogram *histogram;

/* instance methods */
- (void)dealloc;
- (int)psdSliceNumberForRenditionRow:(int)row sliceRow:(int)row renditionColumn:(int)column sliceColumn:(int)column rowsPerRendition:(int)rendition columnsPerRendition:(int)rendition renditionColumnCount:(int)count;
- (id)debugDescription;
- (void)_logError:(id)error;
- (void)_logWarning:(id)warning;
- (void)_logExtra:(id)extra;
- (BOOL)_sliceRectanglesForPSDImage:(id)psdimage rowsPerRendition:(int *)rendition columnsPerRendition:(int *)rendition originalColumnWidth:(int *)width newColumnWidth:(int *)width originalRowHeight:(int *)height newRowHeight:(int *)height originalColumnX:(int *)x originalRowY:(int *)y newRenditionSize:(struct { int x0; int x1; } *)size newSliceCount:(int *)count renditionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)rect throwawaySliceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)rect;
- (struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; })_subtractThrowawaySliceFromMetricsIfNeeded:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })needed metrics:(struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; })metrics renditionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)createCSIRepresentationFromPSDImage:(id)psdimage withCompression:(BOOL)compression edgeMetricsMask:(id)mask textMetricsMask:(id)mask baselineMetricsMask:(id)mask auxiliary1MetricsMask:(id)mask auxiliary2MetricsMask:(id)mask colorSpaceID:(unsigned long long)id allowsPaletteImageCompression:(BOOL)compression allowsHevcCompression:(BOOL)compression allowsDeepmapImageCompression:(BOOL)compression allowsDeepmap2ImageCompression:(BOOL)compression;
- (id)createCSIRepresentationFromGradientPSDImage:(id)psdimage withCompression:(BOOL)compression colorSpaceID:(unsigned long long)id;
- (id)createCSIRepresentationWithCompression:(BOOL)compression colorSpaceID:(unsigned long long)id document:(id)document;
- (id)createCSIRepresentationFromPSDImage:(id)psdimage withCompression:(BOOL)compression colorSpaceID:(unsigned long long)id;
- (int)_layerIndexInPSDImage:(id)psdimage;
- (void)copyAttributesInto:(id)into;
- (id)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(id)data;
- (BOOL)updatePackingPropertiesWithDocument:(id)document;
- (void)drawPackableRenditionInContext:(struct CGContext *)context withDocument:(id)document;
@end

#endif /* TDPhotoshopRenditionSpec_h */
