//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIFocusRegionMapEntry_h
#define _UIFocusRegionMapEntry_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "UIColor.h"
#include "_UIFocusRegionMapEntry.h"

@class NSMutableSet;

@interface _UIFocusRegionMapEntry : NSObject<NSCopying>

@property (readonly, copy, nonatomic) UIColor *visualRepresentationColor;
@property (readonly, nonatomic) long long visualRepresentationPatternType;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } originalRegionFrame;
@property (retain, nonatomic) _UIFocusRegionMapEntry *originalEntry;
@property (retain, nonatomic) _UIFocusRegionMapEntry *parentEntry;
@property (retain, nonatomic) NSMutableSet *occludingFrames;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame originalRegionFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)_mapEntriesByOccludingWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)sliceWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_wasOccludedByFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)_uniqueElementFromArray:(id)array forKey:(id)key;
- (id)description;
@end

#endif /* _UIFocusRegionMapEntry_h */
