//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1774.2.3.0.0
//
#ifndef CPGuideFinder_h
#define CPGuideFinder_h
@import Foundation;

#include "CPCluster.h"
#include "CPDisposable-Protocol.h"
#include "CPZone.h"

@class NSMutableArray;

@interface CPGuideFinder : NSObject<CPDisposable> {
  /* instance variables */
  CPZone *contentZone;
  unsigned int countOfWordsInZone;
  double * anchorArray;
  double * rightHandSideArray;
  struct { double x0; double x1; double x2; double x3; int x4; int * x5; struct CPPDFStyle * x6; } * crossingWordArray;
  CPCluster *anchors;
  CPCluster *rightHandSides;
  double medianFontSizeOfFirstCharacter;
  double medianFontSizeOfLastCharacter;
  NSMutableArray *gutters;
  NSMutableArray *leftGuides;
  NSMutableArray *rightGuides;
}

/* class methods */
+ (BOOL)guideSeparates:(id)separates from:(id)from;
+ (BOOL)gutterSeparates:(id)separates from:(id)from;
+ (void)reclusterPreservingAlignment:(id)alignment;
+ (void)reclusterBetweenGuides:(id)guides;

/* instance methods */
- (id)initWithContentZone:(id)zone;
- (void)dispose;
- (void)finalize;
- (void)dealloc;
- (double)medianFontSizeOfFirstCharacter;
- (double)medianFontSizeOfLastCharacter;
- (void)getWordEdges;
- (BOOL)addStripTo:(id)to bottom:(double)bottom left:(double)left top:(double)top right:(double)right;
- (void)setAlignForWordWithExtent:(struct { double x0; double x1; double x2; double x3; int x4; int * x5; struct CPPDFStyle * x6; } *)extent stripArray:(id)array stripMax:(double)max;
- (void)subdivideStripInto:(id)into from:(double)from to:(double)to borderedBy:(struct { double x0; double x1; double x2; double x3; int x4; int * x5; struct CPPDFStyle * x6; } *)by ofCount:(unsigned int)count crossedBy:(struct { double x0; double x1; double x2; double x3; int x4; int * x5; struct CPPDFStyle * x6; } *)by ofCount:(unsigned int)count;
- (void)subdivideGutterFrom:(unsigned int)from to:(unsigned int)to;
- (void)subdivideLeftGuideAt:(unsigned int)at;
- (void)subdivideRightGuideAt:(unsigned int)at;
- (void)findWordEdgeClusters;
- (void)findGutters;
- (void)findGuides;
- (void)func:(id)func and:(id)and and:(unsigned int)and and:(unsigned int)and;
- (void)splitTextLinesAtBorderWords;
- (void)splitTextLinesBetweenBorderWords;
- (void)splitTextLines;
- (void)markTextLines;
- (BOOL)hasGutters;
- (id)gutters;
- (BOOL)hasLeftGuides;
- (id)leftGuides;
- (BOOL)hasRightGuides;
- (id)rightGuides;
@end

#endif /* CPGuideFinder_h */
