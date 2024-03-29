//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef NSKeyValueArray_h
#define NSKeyValueArray_h
@import Foundation;

#include "NSArray.h"
#include "NSKeyValueNonmutatingArrayMethodSet.h"
#include "NSKeyValueProxyCaching-Protocol.h"
#include "NSString.h"

@class NSObject;

@interface NSKeyValueArray : NSArray<NSKeyValueProxyCaching> {
  /* instance variables */
  NSObject *_container;
  NSString *_key;
  NSKeyValueNonmutatingArrayMethodSet *_methods;
}

/* class methods */
+ (id)_proxyShare;

/* instance methods */
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;
- (struct { id x0; id x1; })_proxyLocator;
- (void)_proxyNonGCFinalize;
- (void)dealloc;
- (unsigned long long)count;
- (void)getObjects:(id *)objects range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)objectAtIndex:(unsigned long long)index;
- (id)objectsAtIndexes:(id)indexes;
@end

#endif /* NSKeyValueArray_h */
