//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 800.2.0.3.0
//
#ifndef _CTMutableGlyphStorage_h
#define _CTMutableGlyphStorage_h
@import Foundation;

#include "_CTGlyphStorage.h"
#include "CTGlyphStorageInterface.h"
#include "_CTGlyphStorageAdvanceLookup-Protocol.h"

@interface _CTMutableGlyphStorage : _CTGlyphStorage<_CTGlyphStorageAdvanceLookup> {
  /* instance variables */
  CTGlyphStorageInterface *_interface;
}

@property (readonly, nonatomic) BOOL implementsOrigins;
@property (readonly, nonatomic) BOOL hasCustomAdvances;
@property (readonly, nonatomic) BOOL implementsCustomAdvancesForIndexes;

/* instance methods */
- (id)initWithInterface:(id)interface;
- (id)initWithInterface:(id)interface options:(unsigned int)options;
- (id)copyWithRange:(struct { long long x0; long long x1; })range;
- (void *)refCon;
- (struct CGSize { double x0; double x1; })customAdvanceForIndex:(long long)index;
- (void)getCustomAdvances:(struct CGSize { double x0; double x1; } *)advances forIndexes:(const long long *)indexes count:(long long)count;
- (long long)attachmentCountAtIndex:(long long)index;
- (void)setAttachmentCount:(long long)count atIndex:(long long)index;
- (void)resetOrigins:(struct { long long x0; long long x1; })origins;
- (struct CGPoint { double x0; double x1; })originAtIndex:(long long)index;
- (void)setOrigin:(struct CGPoint { double x0; double x1; })origin atIndex:(long long)index;
- (void)setProps:(unsigned int)props atIndex:(long long)index;
- (void)setGlyph:(unsigned short)glyph atIndex:(long long)index;
- (void)setAdvance:(struct CGSize { double x0; double x1; })advance atIndex:(long long)index;
- (void)setStringIndex:(long long)index atIndex:(long long)index;
- (void)puntStringIndicesInRange:(struct { long long x0; long long x1; })range by:(long long)by;
- (void)insertGlyphsAtRange:(struct { long long x0; long long x1; })range;
- (void)swapGlyphsAtIndex:(long long)index withIndex:(long long)index;
- (void)moveGlyphsFromRange:(struct { long long x0; long long x1; })range toIndex:(long long)index;
- (void)sync;
- (void)initGlyphStackWithCapacity:(long long)capacity;
- (void)pushGlyphAtIndex:(long long)index;
- (void)popGlyphAtIndex:(long long)index;
- (void)disposeGlyphStack;
@end

#endif /* _CTMutableGlyphStorage_h */
