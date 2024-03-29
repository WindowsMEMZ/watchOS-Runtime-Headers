//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 75.3.6.0.1
//
#ifndef GDPersonView_Protocol_h
#define GDPersonView_Protocol_h
@import Foundation;

#include "GDPersonView-Protocol.h"
#include "GDSQLGraphObjectRetriever.h"
#include "GDViewAccessAssertion-Protocol.h"

@class _PASSqliteDatabase;

@protocol GDPersonView 
/* instance methods */
- (void)enumeratePeopleWithBlock:(id /* block */)block;
@end

#endif /* GDPersonView_Protocol_h */
