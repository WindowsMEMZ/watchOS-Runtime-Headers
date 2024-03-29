//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardCandidateList_Protocol_h
#define UIKeyboardCandidateList_Protocol_h
@import Foundation;

@protocol UIKeyboardCandidateList <NSObject>
/* instance methods */
- (BOOL)isExtendedList;
- (BOOL)isFloatingList;
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect maxX:(double)x layout:(BOOL)layout;
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;
- (void)showCandidateAtIndex:(unsigned long long)index;
- (BOOL)showCandidate:(id)candidate;
- (void)showCandidateInForwardDirection:(BOOL)direction granularity:(int)granularity;
- (id)currentCandidate;
- (unsigned long long)currentIndex;
- (void)candidateAcceptedAtIndex:(unsigned long long)index;
- (BOOL)hasCandidates;
- (id)keyboardBehaviors;
- (id)statisticsIdentifier;
- (unsigned long long)selectedSortIndex;
@optional
/* instance methods */
- (void)setCandidates:(id)candidates type:(int)type inlineText:(id)text inlineRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect maxX:(double)x layout:(BOOL)layout;
- (void)setInlineText:(id)text;
- (void)showCaret:(BOOL)caret gradually:(BOOL)gradually;
- (BOOL)handleNumberKey:(unsigned long long)key;
- (BOOL)handleTabKeyWithShift:(BOOL)shift;
- (BOOL)hasCandidateInForwardDirection:(BOOL)direction granularity:(int)granularity;
- (void)candidatesDidChange;
- (void)jumpToCompositions;
- (void)revealHiddenCandidates;
- (id)candidates;
- (id)inlineText;
- (long long)viewOffsetForCandidateAtIndex:(unsigned long long)index;
- (long long)rowForCandidateAtIndex:(unsigned long long)index;
- (id)secureCandidateRenderTraits;
@end

#endif /* UIKeyboardCandidateList_Protocol_h */
