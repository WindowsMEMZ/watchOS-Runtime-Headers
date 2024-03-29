//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef _PASSqliteNSSetCursor_h
#define _PASSqliteNSSetCursor_h
@import Foundation;

#include "_PASSqliteCollectionsCursor.h"

@class NSEnumerator, NSSet;

@interface _PASSqliteNSSetCursor : _PASSqliteCollectionsCursor {
  /* instance variables */
  NSSet *_set;
  id _currentValue;
  NSEnumerator *_valuesEnumerator;
}

@property (retain, @dynamic, nonatomic) NSSet *collection;

/* class methods */
+ (const char *)sqliteCreateTableStatement;
+ (const char *)sqliteMethodName;
+ (id)planningInfoForValueConstraint:(int)constraint;

/* instance methods */
- (void)applyConstraint:(int)constraint withArgument:(id)argument;
- (void)finalizeConstraints;
- (BOOL)currentIndexEof;
- (id)currentIndexedValue;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (void)stepIndexedRow;
@end

#endif /* _PASSqliteNSSetCursor_h */
