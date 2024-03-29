//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1774.2.3.0.0
//
#ifndef CPListMaker_h
#define CPListMaker_h
@import Foundation;

#include "CPDisposable-Protocol.h"
#include "CPLayoutArea.h"
#include "CPList.h"

@class NSArray;

@interface CPListMaker : NSObject<CPDisposable> {
  /* instance variables */
  CPLayoutArea *area;
  NSArray *spacers;
  unsigned int textLineCount;
  id * textLines;
  CPList *list;
}

/* class methods */
+ (void)makeListsInLayoutArea:(id)area;
+ (void)makeListsInChunk:(id)chunk;
+ (void)makeListsInPage:(id)page;

/* instance methods */
- (id)initWithLayoutArea:(id)area;
- (void)dispose;
- (void)finalize;
- (void)dealloc;
- (void)fetchTextLine:(id)line;
- (void)fetchTextLinesInColumn:(id)column;
- (void)makeListItemFrom:(struct CPListInfo { unsigned int x0; unsigned int x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct __CFString * x3; int x4; unsigned int x5; unsigned int x6; int x7; BOOL x8; BOOL x9; BOOL x10; void * x11; } *)from stopAt:(unsigned int)at;
- (BOOL)makeListFrom:(struct CPListInfo { unsigned int x0; unsigned int x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct __CFString * x3; int x4; unsigned int x5; unsigned int x6; int x7; BOOL x8; BOOL x9; BOOL x10; void * x11; } *)from;
- (void)makeListsInColumn:(id)column;
- (void)makeLists;
@end

#endif /* CPListMaker_h */
