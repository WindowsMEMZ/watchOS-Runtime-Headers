//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef NSKeyValueMutatingSetMethodSet_h
#define NSKeyValueMutatingSetMethodSet_h
@import Foundation;

#include "NSKeyValueMutatingCollectionMethodSet.h"

@interface NSKeyValueMutatingSetMethodSet : NSKeyValueMutatingCollectionMethodSet {
  /* instance variables */
  struct objc_method * addObject;
  struct objc_method * removeObject;
  struct objc_method * intersectSet;
  struct objc_method * minusSet;
  struct objc_method * unionSet;
  struct objc_method * setSet;
}

@end

#endif /* NSKeyValueMutatingSetMethodSet_h */
