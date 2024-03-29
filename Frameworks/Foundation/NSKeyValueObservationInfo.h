//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef NSKeyValueObservationInfo_h
#define NSKeyValueObservationInfo_h
@import Foundation;

@class NSArray;

@interface NSKeyValueObservationInfo : NSObject {
  /* instance variables */
  NSArray *_observances;
  unsigned long long _cachedHash;
  BOOL _cachedIsShareable;
}

@property (readonly, nonatomic) BOOL containsOnlyInternalObservationHelpers;

/* instance methods */
- (id)_copyByAddingObservance:(id)observance;
- (id)_initWithObservances:(id *)observances count:(unsigned long long)count hashValue:(unsigned long long)value;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* NSKeyValueObservationInfo_h */
