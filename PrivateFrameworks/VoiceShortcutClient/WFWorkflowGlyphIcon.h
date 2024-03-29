//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFWorkflowGlyphIcon_h
#define WFWorkflowGlyphIcon_h
@import Foundation;

#include "WFIcon.h"
#include "WFIconBackground.h"

@interface WFWorkflowGlyphIcon : WFIcon

@property (readonly, nonatomic) unsigned short glyph;
@property (readonly, nonatomic) WFIconBackground *background;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithGlyph:(unsigned short)glyph background:(id)background;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)hasClearBackground;
- (BOOL)hasTransparentBackground;
@end

#endif /* WFWorkflowGlyphIcon_h */
