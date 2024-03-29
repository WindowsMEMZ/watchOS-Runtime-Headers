//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKPriorityToIndexMap_h
#define MKPriorityToIndexMap_h
@import Foundation;

@class NSMutableArray, NSMutableDictionary;

@interface MKPriorityToIndexMap : NSObject {
  /* instance variables */
  NSMutableArray *_priorities;
  NSMutableDictionary *_prioritiesToIndexes;
}

/* instance methods */
- (id)init;
- (id)initWithPriorities:(id)priorities;
- (BOOL)addPriorities:(id)priorities;
- (void)insertPriorities:(id)priorities prioritiesToReAdd:(id)add;
- (void)appendRemainingPriorities:(id)priorities prioritiesToReAdd:(id)add;
- (id)nextPriorityFromPriorities:(id)priorities prioritiesToReAdd:(id)add;
- (long long)indexOfPriority:(double)priority;
- (double)priorityOfIndex:(unsigned long long)index;
- (BOOL)containsPriority:(double)priority;
- (BOOL)contains:(id)contains;
- (id)objectForKeyedSubscript:(id)subscript;
@end

#endif /* MKPriorityToIndexMap_h */
