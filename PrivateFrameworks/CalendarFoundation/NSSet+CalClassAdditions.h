//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1547.1.1.3.0
//
#ifndef NSSet_CalClassAdditions_h
#define NSSet_CalClassAdditions_h
@import Foundation;

@interface NSSet (CalClassAdditions)
/* class methods */
+ (id)intersectionOfSet:(id)set withSet:(id)set;

/* instance methods */
- (id)allObjectsWithClass:(Class)class;
- (id)CalMutableRecursiveCopy;
@end

#endif /* NSSet_CalClassAdditions_h */
