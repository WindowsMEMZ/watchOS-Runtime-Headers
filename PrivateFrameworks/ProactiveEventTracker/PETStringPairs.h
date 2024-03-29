//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef PETStringPairs_h
#define PETStringPairs_h
@import Foundation;

@class NSArray;

@interface PETStringPairs : NSObject

@property (readonly, nonatomic) NSArray *keys;
@property (readonly, nonatomic) NSArray *values;
@property (readonly, nonatomic) unsigned long long count;

/* instance methods */
- (id)initWithKeys:(id)keys values:(id)values;
- (id)keyAtIndex:(unsigned long long)index;
- (id)valueAtIndex:(unsigned long long)index;
- (id)subsetForKeys:(id)keys;
@end

#endif /* PETStringPairs_h */
