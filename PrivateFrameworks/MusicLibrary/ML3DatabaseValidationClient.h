//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef ML3DatabaseValidationClient_h
#define ML3DatabaseValidationClient_h
@import Foundation;

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ML3DatabaseValidationClient : NSObject {
  /* instance variables */
  NSMutableDictionary *_validatableDatabases;
  NSObject<OS_dispatch_queue> *_serialQueue;
}

/* class methods */
+ (id)sharedClient;

/* instance methods */
- (id)init;
- (BOOL)validateDatabaseAtPath:(id)path;
- (BOOL)validateDatabaseForLibrary:(id)library;
- (BOOL)validateDatabaseForConnection:(id)connection;
- (id)_validatableDatabaseForPath:(id)path;
- (BOOL)_validateDatabaseForPath:(id)path usingLibrary:(id)library;
- (BOOL)isValidatingDatabaseForPath:(id)path;
@end

#endif /* ML3DatabaseValidationClient_h */
