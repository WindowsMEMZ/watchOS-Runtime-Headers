//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 581.0.0.0.0
//
#ifndef _TDLayerStackFilterHelper_h
#define _TDLayerStackFilterHelper_h
@import Foundation;

#include "TDLayerStackRenditionSpec.h"

@class NSMutableArray;

@interface _TDLayerStackFilterHelper : NSObject

@property (retain, nonatomic) TDLayerStackRenditionSpec *layerStackRendition;
@property (retain, nonatomic) NSMutableArray *excludedIdioms;
@property (retain, nonatomic) NSMutableArray *excludedSubtypes;
@property (retain, nonatomic) NSMutableArray *excludedScaleFactors;
@property (retain, nonatomic) NSMutableArray *excludedHorizontalSizeClasses;
@property (retain, nonatomic) NSMutableArray *excludedVerticalSizeClasses;
@property (retain, nonatomic) NSMutableArray *excludedDirections;
@property (retain, nonatomic) NSMutableArray *excludedLayers;
@property (retain, nonatomic) NSMutableArray *excludedPresentationStates;
@property (retain, nonatomic) NSMutableArray *excludedSizes;
@property (retain, nonatomic) NSMutableArray *excludedStates;
@property (retain, nonatomic) NSMutableArray *excludedValues;

/* instance methods */
- (id)init;
- (void)establishExclusionsWithHelper:(id)helper idioms:(id)idioms sizeClasses:(id)classes;
- (BOOL)allowKey:(id)key;
- (void)dealloc;
@end

#endif /* _TDLayerStackFilterHelper_h */
