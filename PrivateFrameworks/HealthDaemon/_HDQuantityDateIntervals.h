//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HDQuantityDateIntervals_h
#define _HDQuantityDateIntervals_h
@import Foundation;

@class NSMutableArray;

@interface _HDQuantityDateIntervals : NSObject {
  /* instance variables */
  double _currentStartInterval;
  double _currentEndInterval;
  long long _currentPairIndex;
  BOOL _containsUUIDs;
  NSMutableArray *_intervalPairs;
}

/* instance methods */
- (id)init;
@end

#endif /* _HDQuantityDateIntervals_h */
