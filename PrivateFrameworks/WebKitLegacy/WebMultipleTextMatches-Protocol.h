//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebMultipleTextMatches_Protocol_h
#define WebMultipleTextMatches_Protocol_h
@import Foundation;

@protocol WebMultipleTextMatches <NSObject>
/* instance methods */
- (void)setMarkedTextMatchesAreHighlighted:(BOOL)highlighted;
- (BOOL)markedTextMatchesAreHighlighted;
- (unsigned long long)countMatchesForText:(id)text inDOMRange:(id)domrange options:(unsigned long long)options limit:(unsigned long long)limit markMatches:(BOOL)matches;
- (void)unmarkAllTextMatches;
- (id)rectsForTextMatches;
@end

#endif /* WebMultipleTextMatches_Protocol_h */
