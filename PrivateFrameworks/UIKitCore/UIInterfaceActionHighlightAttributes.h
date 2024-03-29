//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIInterfaceActionHighlightAttributes_h
#define UIInterfaceActionHighlightAttributes_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "UIColor.h"

@class NSArray;

@interface UIInterfaceActionHighlightAttributes : NSObject<NSCopying>

@property (nonatomic) double opacity;
@property (retain, nonatomic) NSArray *filters;
@property (retain, nonatomic) UIColor *backgroundColor;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)newBackgroundHighlightView;
- (BOOL)_hasNonClearBackgroundColor;
@end

#endif /* UIInterfaceActionHighlightAttributes_h */
