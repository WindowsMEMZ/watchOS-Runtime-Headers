//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 908.2.0.0.0
//
#ifndef NSLineFragmentRenderingContext_h
#define NSLineFragmentRenderingContext_h
@import Foundation;

#include "NSTextApplicationFrameworkContextClient-Protocol.h"
#include "__NSImmutableTextStorage.h"

@class CUICatalog, CUIStyleEffectConfiguration, NSString;

@interface NSLineFragmentRenderingContext : NSObject<NSTextApplicationFrameworkContextClient> {
  /* instance variables */
  void * _runs;
  long long _numRuns;
  unsigned short * _glyphs;
  struct CGSize { double x0; double x1; } * _advancements;
  double _leftSideDelta;
  double _lineWidth;
  double _leftControlWidth;
  double _rightControlWidth;
  double _elasticWidth;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _imageBounds;
  struct { unsigned int x :1 _isRTL; unsigned int x :1 _vAdvance; unsigned int x :1 _flipped; unsigned int x :1 _usesSimpleTextEffects; unsigned int x :3 _applicationFrameworkContext; unsigned int x :25 _reserved; } _flags;
  long long _resolvedDirection;
  long long _resolvedAlignment;
  CUICatalog *_catalog;
  CUIStyleEffectConfiguration *_styleEffects;
  __NSImmutableTextStorage *_textStorage;
  long long _appContext;
}

@property long long resolvedTextAlignment;
@property long long resolvedBaseWritingDirection;
@property (retain, nonatomic) CUICatalog *cuiCatalog;
@property (retain, nonatomic) CUIStyleEffectConfiguration *cuiStyleEffects;
@property (nonatomic) BOOL usesSimpleTextEffects;
@property long long applicationFrameworkContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)allocWithZone:(struct _NSZone *)zone;
+ (void)initialize;

/* instance methods */
- (void)release;
- (id)initWithTextStorage:(id)storage runs:(struct __CFArray *)runs glyphOrigin:(double)origin lineFragmentWidth:(double)width elasticWidth:(double)width usesScreenFonts:(BOOL)fonts isRTL:(BOOL)rtl applicationFrameworkContext:(long long)context;
- (void)dealloc;
- (void)finalize;
- (void)_setUsesSimpleTextEffects:(BOOL)effects;
- (BOOL)_usesSimpleTextEffects;
- (void)drawAtPoint:(struct CGPoint { double x0; double x1; })point inContext:(struct CGContext *)context;
- (struct CGSize { double x0; double x1; })sizeWithBehavior:(long long)behavior usesFontLeading:(BOOL)leading baselineDelta:(double *)delta;
- (void)getMaximumAscender:(double *)ascender minimumDescender:(double *)descender;
- (double)lineFragmentWidth;
- (double)elasticWidth;
- (BOOL)isRTL;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageBounds;
@end

#endif /* NSLineFragmentRenderingContext_h */
