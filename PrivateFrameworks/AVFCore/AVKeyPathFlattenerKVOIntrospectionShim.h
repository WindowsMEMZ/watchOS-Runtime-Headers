//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVKeyPathFlattenerKVOIntrospectionShim_h
#define AVKeyPathFlattenerKVOIntrospectionShim_h
@import Foundation;

#include "AVCallbackCancellation-Protocol.h"
#include "AVKVOIntrospection-Protocol.h"

@class NSObject, NSString;
@protocol AVKVOIntrospection><AVCallbackCancellation;

@interface AVKeyPathFlattenerKVOIntrospectionShim : NSObject<AVKVOIntrospection, AVCallbackCancellation> {
  /* instance variables */
  NSObject<AVKVOIntrospection><AVCallbackCancellation> *_realNotifier;
}

@property (readonly, nonatomic) NSObject *observedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithObservedObject:(id)object realNotifier:(id)notifier;
- (void)dealloc;
- (void)cancelCallbacks;
@end

#endif /* AVKeyPathFlattenerKVOIntrospectionShim_h */
