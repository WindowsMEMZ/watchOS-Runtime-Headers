//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLFrozenTrackingLayer_h
#define CSLFrozenTrackingLayer_h
@import Foundation;

#include "CALayer.h"

@class NSArray;

@interface CSLFrozenTrackingLayer : CALayer

@property (retain, nonatomic) NSArray *frozenCallStackSymbols;

/* instance methods */
- (void)setFrozen:(BOOL)frozen;
@end

#endif /* CSLFrozenTrackingLayer_h */
