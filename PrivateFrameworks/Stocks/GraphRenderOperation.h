//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.0.0.0.0
//
#ifndef GraphRenderOperation_h
#define GraphRenderOperation_h
@import Foundation;

#include "GraphRenderOperationDelegate-Protocol.h"
#include "StockChartDisplayMode.h"
#include "StockGraphImageSet.h"

@class NSArray;

@interface GraphRenderOperation : NSObject

@property (readonly, nonatomic) BOOL cancelled;
@property (nonatomic) struct CGPoint { double x0; double x1; } * points;
@property (retain, nonatomic) NSArray *linePointCounts;
@property (retain, nonatomic) NSArray *dottedLinePositions;
@property (retain, nonatomic) NSArray *dottedLinePositionsForStyleOnly;
@property (nonatomic) struct { double x0; unsigned long long x1; } * volumeBars;
@property (nonatomic) double volumeBarWidth;
@property (nonatomic) unsigned long long maxVolume;
@property (nonatomic) unsigned int volumeCount;
@property (weak, nonatomic) NSObject<GraphRenderOperationDelegate> *delegate;
@property (nonatomic) struct CGSize { double x0; double x1; } graphSize;
@property (nonatomic) struct CGSize { double x0; double x1; } volumeGraphSize;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } graphInsets;
@property (retain, nonatomic) StockGraphImageSet *graphImageSet;
@property (nonatomic) BOOL roundLineCaps;
@property (retain, nonatomic) StockChartDisplayMode *displayMode;

/* instance methods */
- (void)cancel;
- (void)render;
- (struct CGSize { double x0; double x1; })lineGraphSize;
- (void)renderGraphLineInContext:(struct CGContext *)context withColor:(id)color offset:(struct CGPoint { double x0; double x1; })offset;
- (void)renderLineGraph;
- (void)renderVolumeGraph;
- (BOOL)isCancelled;
@end

#endif /* GraphRenderOperation_h */
