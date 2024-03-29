//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef KVSpanMatchResult_h
#define KVSpanMatchResult_h
@import Foundation;

#include "KVItemInfo.h"
#include "KVSpanInfo.h"
#include "NSCopying-Protocol.h"

@class NSArray;

@interface KVSpanMatchResult : NSObject<NSCopying> {
  /* instance variables */
  KVItemInfo *_itemInfo;
  KVSpanInfo *_spanInfo;
  NSArray *_fieldMatches;
  float _score;
}

/* instance methods */
- (id)initWithItemInfo:(id)info spanInfo:(id)info fieldMatches:(id)matches;
- (id)initWithItemInfo:(id)info spanInfo:(id)info fieldMatches:(id)matches score:(float)score;
- (void)setScore:(float)score;
- (id)init;
- (id)itemInfo;
- (id)spanInfo;
- (id)spanValue;
- (id)fieldMatches;
- (float)score;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToSpanMatchResult:(id)result;
- (unsigned long long)hash;
@end

#endif /* KVSpanMatchResult_h */
