//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCTopicalNode_h
#define FCTopicalNode_h
@import Foundation;

#include "FCTopicalNode.h"
#include "NSCopying-Protocol.h"

@class NSCountedSet, NSSet, NSString;

@interface FCTopicalNode : NSObject<NSCopying> {
  /* instance variables */
  double _score;
  BOOL _scored;
  NSSet *_identifiers;
  NSSet *_displayedElements;
  NSCountedSet *_topicCollections;
  FCTopicalNode *_parent;
  NSSet *_children;
  double _scoreMultiplier;
  double _relatedness;
  double _specificity;
  double _parentRawScore;
  double _relatednessThreshold;
  double _relatednessKWeight;
  double _topicScoreWeight;
  double _highestScoringRelativeScoreMultiplier;
  NSString *_storedNodeIdentifier;
}

@property (retain) NSString *identifier;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* FCTopicalNode_h */
