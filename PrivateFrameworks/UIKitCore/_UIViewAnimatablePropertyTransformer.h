//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIViewAnimatablePropertyTransformer_h
#define _UIViewAnimatablePropertyTransformer_h
@import Foundation;

#include "_UICompoundObjectMap.h"

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface _UIViewAnimatablePropertyTransformer : NSObject {
  /* instance variables */
  BOOL _unsafe;
  BOOL _presentationValueCallbackRan;
  NSObject<OS_dispatch_queue> *_lockingQueue;
}

@property (retain, nonatomic) NSMutableSet *runningProgresses;
@property (copy, nonatomic) id /* block */ modelValueChangedCallback;
@property (copy, nonatomic) id /* block */ presentationValueChangedCallback;
@property (copy, nonatomic) id /* block */ stabilizedCallback;
@property (retain, nonatomic) _UICompoundObjectMap *capturedProperties;
@property (nonatomic) BOOL clearsCapturesPropertiesOnStabilization;

/* instance methods */
- (id)initWithInputAnimatableProperties:(id)properties unsafe:(BOOL)unsafe modelValueSetter:(id /* block */)setter presentationValueSetter:(id /* block */)setter stabilizedCallback:(id /* block */)callback allowsProgressAnimatableProperties:(BOOL)properties;
- (id)initWithInputAnimatableProperties:(id)properties unsafe:(BOOL)unsafe modelValueSetter:(id /* block */)setter presentationValueSetter:(id /* block */)setter stabilizedCallback:(id /* block */)callback;
- (id)initWithInputAnimatableProperties:(id)properties unsafe:(BOOL)unsafe modelValueSetter:(id /* block */)setter presentationValueSetter:(id /* block */)setter;
- (id)initWithProgressAnimatableProperty:(id)property modelValueSetter:(id /* block */)setter presentationValueSetter:(id /* block */)setter;
- (id)initWithInputAnimatableProperties:(id)properties presentationValueChangedCallback:(id /* block */)callback;
- (void)presentationValueUpdatedForProgress:(id)progress;
- (void)presentationValueStabilizedForProgress:(id)progress;
- (void)modelValueUpdatedForProgress:(id)progress;
- (void)progressInvalidated:(id)invalidated;
- (void)performWithLock:(id /* block */)lock;
@end

#endif /* _UIViewAnimatablePropertyTransformer_h */
