//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef ML3SortMapFaultingEntryArray_h
#define ML3SortMapFaultingEntryArray_h
@import Foundation;

#include "NSMutableArray.h"
#include "ML3DatabaseConnection.h"

@class NSMutableDictionary;

@interface ML3SortMapFaultingEntryArray : NSMutableArray {
  /* instance variables */
  ML3DatabaseConnection *_connection;
  NSMutableDictionary *_dirtyInserts;
}

/* instance methods */
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)index;
- (void)addObject:(id)object;
- (void)insertObject:(id)object atIndex:(unsigned long long)index;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)index;
- (void)replaceObjectAtIndex:(unsigned long long)index withObject:(id)object;
@end

#endif /* ML3SortMapFaultingEntryArray_h */
