//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef NSKeyValueFastMutableCollection1Getter_h
#define NSKeyValueFastMutableCollection1Getter_h
@import Foundation;

#include "NSKeyValueProxyGetter.h"
#include "NSKeyValueMutatingCollectionMethodSet.h"
#include "NSKeyValueNonmutatingCollectionMethodSet.h"

@interface NSKeyValueFastMutableCollection1Getter : NSKeyValueProxyGetter {
  /* instance variables */
  NSKeyValueNonmutatingCollectionMethodSet *_nonmutatingMethods;
  NSKeyValueMutatingCollectionMethodSet *_mutatingMethods;
}

/* instance methods */
- (id)initWithContainerClassID:(id)id key:(id)key nonmutatingMethods:(id)methods mutatingMethods:(id)methods proxyClass:(Class)class;
- (void)dealloc;
- (id)nonmutatingMethods;
- (id)mutatingMethods;
@end

#endif /* NSKeyValueFastMutableCollection1Getter_h */
