//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIVectorTextLayoutGlyph_h
#define _UIVectorTextLayoutGlyph_h
@import Foundation;

#include "UIBezierPath.h"
#include "_UIVectorTextLayoutGlyph-Protocol.h"

@class NSString;

@interface _UIVectorTextLayoutGlyph : NSObject<_UIVectorTextLayoutGlyph>

@property (nonatomic) unsigned short glyph;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rect;
@property (retain, nonatomic) UIBezierPath *path;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } pathTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
@end

#endif /* _UIVectorTextLayoutGlyph_h */
