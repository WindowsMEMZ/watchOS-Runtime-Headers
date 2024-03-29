//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 908.2.0.0.0
//
#ifndef NSTextLineFragment_h
#define NSTextLineFragment_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "NSTextLayoutFragment.h"
#include "UIFont.h"

@class NSAttributedString;

@interface NSTextLineFragment : NSObject<NSSecureCoding> {
  /* instance variables */
  long long _applicationFrameworkContext;
  struct __CTLine * _lineRef;
  unsigned short * _glyphs;
  struct CGSize { double x0; double x1; } * _advances;
  long long _glyphCount;
  long long _elasticGlyphCount;
  UIFont *_font;
  struct __CTRun * _activeRun;
  long long _activeRunIndex;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _imageBounds;
  struct { unsigned int x :1 rendersTextCorrectionMarkers; unsigned int x :1 isRTLLine; } _flags;
  struct CGPoint { double x; double y; } _cachedPoint;
  long long _cachedCharacterIndex;
  double _cachedFractionWithinGlyph;
  NSAttributedString *_lineBadge;
}

@property double padding;
@property (weak) NSTextLayoutFragment *textLayoutFragment;
@property BOOL rendersTextCorrectionMarkers;
@property (copy) id /* block */ renderingAttributesProvider;
@property (copy) id /* block */ _renderingAttributeOverridesProvider;
@property (readonly) NSAttributedString *attributedString;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } characterRange;
@property (readonly, @dynamic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } typographicBounds;
@property (readonly, @dynamic) struct CGPoint { double x0; double x1; } glyphOrigin;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAttributedString:(id)string range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)dealloc;
- (id)initWithString:(id)string attributes:(id)attributes range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)description;
- (void)setLineRef:(struct __CTLine *)ref;
- (struct __CTLine *)lineRef;
- (void)setGlyphs:(const unsigned short *)glyphs advances:(const struct CGSize { double x0; double x1; } *)advances count:(long long)count elasticCount:(unsigned long long)count font:(id)font;
- (id)textLineFragmentRange;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)lineBadge;
- (void)setLineBadge:(id)badge;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })typographicUsedBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsWithType:(long long)type options:(unsigned long long)options;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageBounds;
- (struct __CTRun *)_findRunForStringIndex:(long long)index runIndex:(out long long *)index;
- (void)_getCaretPositionsForCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range positionsCache:(inout double * *)cache positionsCacheSize:(inout unsigned long long *)size block:(id /* block */)block;
- (void)_processCaretGlyphRunForTextSelectionProvider:(id)provider baseLocation:(id)location runRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range glyphOffset:(double)offset positionsCache:(inout double * *)cache positionsCacheSize:(inout unsigned long long *)size stop:(inout BOOL *)stop usingBlock:(id /* block */)block;
- (void)enumerateCaretOffsetsWithTextSelectionDataSource:(id)source baseLocation:(id)location usingBlock:(id /* block */)block;
- (void)enumerateTextSegmentBoundsInTextRange:(id)range dataSourceLocationsOnly:(BOOL)only usingBlock:(id /* block */)block;
- (id)_defaultRenderingAttributesAtCharacterIndex:(long long)index effectiveRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)range;
- (BOOL)_selectionColorShouldOverrideColor:(id)color;
- (unsigned long long)numberOfGlyphs;
- (void)_setCurrentGraphicsContext:(id)context duringBlock:(id /* block */)block;
- (void)_setColor:(id)color inGraphicsContext:(id)context;
- (void)drawAtPoint:(struct CGPoint { double x0; double x1; })point graphicsContext:(id)context;
- (void)_enumerateTextAttachmentFramesInCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range usingBlock:(id /* block */)block;
- (void)drawTextAttachmentsAtPoint:(struct CGPoint { double x0; double x1; })point graphicsContext:(id)context;
- (void)drawAtPoint:(struct CGPoint { double x0; double x1; })point inContext:(struct CGContext *)context;
- (void)drawAtPoint:(struct CGPoint { double x0; double x1; })point context:(struct CGContext *)context;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfLigatureContainingCharacterIndex:(unsigned long long)index;
- (struct CGPoint { double x0; double x1; })locationForCharacterAtIndex:(long long)index;
- (long long)characterIndexForPoint:(struct CGPoint { double x0; double x1; })point fractionOfDistanceThroughGlyph:(double *)glyph;
- (long long)characterIndexForPoint:(struct CGPoint { double x0; double x1; })point;
- (double)fractionOfDistanceThroughGlyphForPoint:(struct CGPoint { double x0; double x1; })point;
- (void)invalidateCache;
- (void)_enumerateTextSegmentsInCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range usingBlock:(id /* block */)block;
- (void)_drawTexCorrectionMarker:(long long)marker characterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range atOrigin:(struct CGPoint { double x0; double x1; })origin graphicsContext:(id)context;
- (void)drawTextCorrectionMarkersAtPoint:(struct CGPoint { double x0; double x1; })point graphicsContext:(id)context;
- (void)drawTextCorrectionMarkersAtPoint:(struct CGPoint { double x0; double x1; })point context:(struct CGContext *)context;
- (void)_drawMarkedTextUnderline:(id)underline inTextRange:(id)range atOrigin:(struct CGPoint { double x0; double x1; })origin graphicsContext:(id)context;
- (void)_drawMarkedTextBackground:(id)background inTextRange:(id)range atOrigin:(struct CGPoint { double x0; double x1; })origin graphicsContext:(id)context;
- (BOOL)_drawMarkedTextIndicatorAtPoint:(struct CGPoint { double x0; double x1; })point graphicsContext:(id)context backgroundOnly:(BOOL)only;
- (BOOL)drawMarkedTextBackgroundAtPoint:(struct CGPoint { double x0; double x1; })point graphicsContext:(id)context;
- (void)drawMarkedTextIndicatorAtPoint:(struct CGPoint { double x0; double x1; })point graphicsContext:(id)context;
- (void)drawMarkedTextIndicatorAtPoint:(struct CGPoint { double x0; double x1; })point context:(struct CGContext *)context;
- (long long)applicationFrameworkContext;
- (void)setApplicationFrameworkContext:(long long)context;
@end

#endif /* NSTextLineFragment_h */
