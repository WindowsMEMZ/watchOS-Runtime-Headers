//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef _PASSqliteNSOrderedSetCursor_h
#define _PASSqliteNSOrderedSetCursor_h
@import Foundation;

#include "_PASSqliteRowIdIndexSetCursor.h"

@class NSOrderedSet;

@interface _PASSqliteNSOrderedSetCursor : _PASSqliteRowIdIndexSetCursor

@property (retain, @dynamic, nonatomic) NSOrderedSet *collection;

/* class methods */
+ (const char *)sqliteCreateTableStatement;
+ (const char *)sqliteMethodName;
+ (id)planningInfoForValueConstraint:(int)constraint;

/* instance methods */
- (id)currentIndexedValue;
- (void)applyConstraint:(int)constraint withArgument:(id)argument;
@end

#endif /* _PASSqliteNSOrderedSetCursor_h */
