//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1774.2.3.0.0
//
#ifndef CPCharSequence_h
#define CPCharSequence_h
@import Foundation;

#include "CPCopying-Protocol.h"
#include "CPDisposable-Protocol.h"
#include "CPMemoryOwner.h"
#include "NSCopying-Protocol.h"

@interface CPCharSequence : NSObject<NSCopying, CPCopying, CPDisposable> {
  /* instance variables */
  unsigned int length;
  struct CPPDFChar * * charArray;
  unsigned int previousSize;
  unsigned int size;
  CPMemoryOwner *sharedMemory;
  BOOL wasMerged;
}

/* instance methods */
- (id)initWithSizeFor:(unsigned int)for;
- (id)initWithChars:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGSize { double x0; double x1; } x6; struct CPPDFStyle * x7; double x8; int x9; long long x10; } *)chars length:(unsigned int)length;
- (id)initSuper;
- (void)dispose;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)resize:(unsigned int)resize;
- (unsigned int)length;
- (struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGSize { double x0; double x1; } x6; struct CPPDFStyle * x7; double x8; int x9; long long x10; } *)charAtIndex:(unsigned int)index;
- (struct CPPDFChar * *)charArray;
- (void)addChar:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGSize { double x0; double x1; } x6; struct CPPDFStyle * x7; double x8; int x9; long long x10; } *)char;
- (void)addChars:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGSize { double x0; double x1; } x6; struct CPPDFStyle * x7; double x8; int x9; long long x10; } *)chars length:(unsigned int)length;
- (void)addChars:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGSize { double x0; double x1; } x6; struct CPPDFStyle * x7; double x8; int x9; long long x10; } *)chars length:(unsigned int)length ifTrue:(undefined *)true passing:(void *)passing;
- (void)addCharsFromSequence:(id)sequence;
- (void)removeChar;
- (void)removeAllChars;
- (void)replaceCharAtIndex:(unsigned int)index withChar:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGSize { double x0; double x1; } x6; struct CPPDFStyle * x7; double x8; int x9; long long x10; } *)char;
- (void)removeCharAtIndex:(unsigned int)index;
- (void)removeFrom:(unsigned int)from;
- (void)sortByAnchorYDecreasingXIncreasing;
- (void)sortByAnchorYDecreasingXIncreasingApprox;
- (void)sortByAnchorXIncreasingYDecreasing;
- (void)sortBy:(undefined *)by;
- (void)mergeByAnchorYDecreasingXIncreasing:(id)xincreasing;
- (void)mergeByAnchorXIncreasingYDecreasing:(id)ydecreasing;
- (void)merge:(id)merge by:(undefined *)by;
- (BOOL)wasMerged;
- (id)newSubsequenceFrom:(unsigned int)from length:(unsigned int)length;
- (void)splitToSubsequences:(id)subsequences whereTrue:(undefined *)true passing:(void *)passing;
- (BOOL)removeSubsequences:(id)subsequences whereTrue:(undefined *)true passing:(void *)passing;
- (void)copyToSubsequence:(id)subsequence from:(unsigned int)from length:(unsigned int)length;
- (void)copyToSubsequence:(id)subsequence ifTrue:(undefined *)true passing:(void *)passing;
- (BOOL)removeToSubsequence:(id)subsequence ifTrue:(undefined *)true passing:(void *)passing;
- (BOOL)map:(undefined *)map passing:(void *)passing;
- (BOOL)mapWithIndex:(undefined *)index passing:(void *)passing;
- (BOOL)mapWithIndex:(undefined *)index from:(unsigned int)from length:(unsigned int)length passing:(void *)passing;
- (BOOL)mapToPairs:(undefined *)pairs passing:(void *)passing;
- (BOOL)mapToPairsWithIndex:(undefined *)index passing:(void *)passing;
- (BOOL)map:(undefined *)map whereNeighborsWith:(id)with passing:(void *)passing;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsFrom:(unsigned int)from length:(unsigned int)length;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedBounds;
- (double)averageRotation;
@end

#endif /* CPCharSequence_h */
