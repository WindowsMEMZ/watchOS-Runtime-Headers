//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 75.3.6.0.1
//
#ifndef GDVisualIdentifierView_h
#define GDVisualIdentifierView_h
@import Foundation;

#include "GDSQLGraphObjectRetriever.h"
#include "GDViewAccessAssertion-Protocol.h"
#include "GDVisualIdentifierView-Protocol.h"

@class _PASSqliteDatabase;

@interface GDVisualIdentifierView : NSObject<GDVisualIdentifierView> {
  /* instance variables */
  NSObject<GDViewAccessAssertion> *_accessAssertion;
  _PASSqliteDatabase *_db;
  GDSQLGraphObjectRetriever *_personRetriever;
  GDSQLGraphObjectRetriever *_locationRetriever;
  GDSQLGraphObjectRetriever *_softwareRetriever;
}

/* instance methods */
- (id)initWithAccessAssertion:(id)assertion database:(id)database;
- (void)linkEntitiesForPerson:(id)person;
- (id)personForIdentifier:(id)identifier;
- (void)enumeratePeopleWithBlock:(id /* block */)block;
- (void)enumeratePeopleMatchingName:(id)name block:(id /* block */)block;
@end

#endif /* GDVisualIdentifierView_h */
