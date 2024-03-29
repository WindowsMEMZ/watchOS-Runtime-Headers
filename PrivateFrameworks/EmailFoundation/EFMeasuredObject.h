//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EFMeasuredObject_h
#define EFMeasuredObject_h
@import Foundation;

@interface EFMeasuredObject : NSObject

@property (retain, nonatomic) id object;
@property (nonatomic) double measure;

/* class methods */
+ (id)object:(id)object withMeasure:(double)measure;
+ (id)max:(id)max;
+ (id)reverseSortedObjects:(id)objects limit:(unsigned long long)limit;

/* instance methods */
- (id)initWithObject:(id)object measure:(double)measure;
- (id)description;
- (long long)compare:(id)compare;
@end

#endif /* EFMeasuredObject_h */
