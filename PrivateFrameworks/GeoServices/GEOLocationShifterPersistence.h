//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOLocationShifterPersistence_h
#define GEOLocationShifterPersistence_h
@import Foundation;

#include "GEOSQLiteDB.h"

@class NSString;

@interface GEOLocationShifterPersistence : NSObject {
  /* instance variables */
  NSString *_dbPath;
  GEOSQLiteDB *_db;
}

/* class methods */
+ (id)sharedPersister;

/* instance methods */
- (id)init;
- (id)initWithDBFilePath:(id)path;
- (BOOL)_setup:(id)_setup;
- (void)tearDown;
- (void)storeResponse:(id)response;
- (void)findResponseForCoordinate:(struct { double x0; double x1; })coordinate reduceRadius:(double)radius queue:(id)queue completion:(id /* block */)completion;
- (void)pruneEntriesOlderThan:(id)than maximumEntriesToKeep:(int)keep;
- (void)removeAllEntries;
- (void)removeAllEntriesSync;
- (void)getAllEntries:(id)entries queue:(id)queue handler:(id /* block */)handler;
@end

#endif /* GEOLocationShifterPersistence_h */
