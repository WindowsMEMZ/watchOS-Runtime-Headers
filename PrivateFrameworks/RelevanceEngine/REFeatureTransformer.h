//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REFeatureTransformer_h
#define REFeatureTransformer_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "REFeatureTransformerInvalidationDelegate-Protocol.h"
#include "REPriorityQueue.h"
#include "REUpNextTimer.h"

@class NSString;

@interface REFeatureTransformer : NSObject<NSCopying> {
  /* instance variables */
  REPriorityQueue *_scheduledUpdates;
  REUpNextTimer *_updateTimer;
  NSObject<REFeatureTransformerInvalidationDelegate> *_invalidationDelegate;
}

@property (copy, nonatomic) NSString *name;

/* class methods */
+ (BOOL)supportsPersistence;
+ (BOOL)supportsInvalidation;
+ (id)functionName;
+ (id)featureTransformerClasses;
+ (id)bucketTransformerWithCount:(unsigned long long)count minValue:(id)value maxValue:(id)value;
+ (id)bucketTransformerWithBitWidth:(unsigned long long)width;
+ (id)logTransformerWithBase:(id)base;
+ (id)binaryTransformerWithThreshold:(id)threshold;
+ (id)roundTransformer;
+ (id)hashTransform;
+ (id)maskTransformWithWidth:(unsigned long long)width;
+ (id)changedTransform;
+ (id)changedTransformWithImpulseDuration:(double)duration;
+ (id)maskAndShiftTransformWithStartIndex:(unsigned long long)index endIndex:(unsigned long long)index;
+ (id)recentTransformerWithCount:(unsigned long long)count;
+ (id)customCategoricalTransformerWithName:(id)name block:(id /* block */)block;
+ (id)customCategoricalTransformerWithName:(id)name featureCount:(unsigned long long)count transformation:(id /* block */)transformation;
+ (id)customTransformerWithName:(id)name outputType:(unsigned long long)type block:(id /* block */)block;
+ (id)customTransformerWithName:(id)name outputType:(unsigned long long)type featureCount:(unsigned long long)count transformation:(id /* block */)transformation;

/* instance methods */
- (BOOL)writeToURL:(id)url error:(id *)error;
- (BOOL)readFromURL:(id)url error:(id *)error;
- (id)init;
- (void)configureWithInvocation:(id)invocation;
- (id)_invalidationQueue;
- (void)setInvalidationDelegate:(id)delegate;
- (id)invalidationDelegate;
- (void)invalidateWithContext:(id)context;
- (void)_invalidationQueue_scheduleInvalidation:(id)invalidation;
- (void)_performAndScheduleTimer;
- (void)_invalidate;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* REFeatureTransformer_h */
