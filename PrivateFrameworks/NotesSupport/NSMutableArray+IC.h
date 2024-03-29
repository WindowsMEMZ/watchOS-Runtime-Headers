//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2480.0.0.0.0
//
#ifndef NSMutableArray_IC_h
#define NSMutableArray_IC_h
@import Foundation;

@interface NSMutableArray (IC)
/* class methods */
+ (id)ic_arrayFromNonNilObject:(id)object;

/* instance methods */
- (void)ic_addNonNilObject:(id)object;
- (void)ic_addObjectsFromNonNilArray:(id)array;
- (void)ic_insertNonNilObject:(id)object atIndex:(long long)index;
@end

#endif /* NSMutableArray_IC_h */
