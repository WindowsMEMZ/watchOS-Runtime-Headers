//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 50.0.0.0.0
//
#ifndef WFLSMResult_h
#define WFLSMResult_h
@import Foundation;

@class NSMutableArray, NSNumber;

@interface WFLSMResult : NSObject {
  /* instance variables */
  NSMutableArray *categoryJudgements;
}

@property (copy) NSNumber *threshold;

/* class methods */
+ (id)extractScoresFromLSMResults:(struct __LSMResult *)lsmresults;
+ (id)LSMResultWithLSMResultRef:(struct __LSMResult *)ref threshold:(id)threshold;

/* instance methods */
- (id)initWithLSMResultRef:(struct __LSMResult *)ref threshold:(id)threshold;
- (long long)numberOfCategories;
- (long long)bestMatchingCategory;
- (float)scoreForCategory:(long long)category;
- (void)setScore:(float)score forCategory:(long long)category;
- (id)debugDescription;
- (BOOL)isRestricted;
- (id)description;
- (void)dealloc;
@end

#endif /* WFLSMResult_h */
