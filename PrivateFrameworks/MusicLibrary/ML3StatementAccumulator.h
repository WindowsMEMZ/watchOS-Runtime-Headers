//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef ML3StatementAccumulator_h
#define ML3StatementAccumulator_h
@import Foundation;

#include "ML3DatabaseConnection.h"
#include "MLMediaLibraryService.h"

@class NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface ML3StatementAccumulator : NSObject {
  /* instance variables */
  MLMediaLibraryService *_xpcService;
  NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (nonatomic) unsigned long long statementThreshold;
@property (readonly, nonatomic) NSMutableArray *statementQueue;
@property (readonly, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) ML3DatabaseConnection *connection;
@property (retain, nonatomic) NSUUID *existingTransactionIdentifier;
@property (nonatomic) unsigned long long priorityLevel;

/* instance methods */
- (id)initWithConnection:(id)connection;
- (id)init;
- (void)dealloc;
- (BOOL)enqueueStatement:(id)statement;
- (BOOL)flushAndWait:(BOOL)wait;
- (BOOL)_onQueueFlushAndWait:(BOOL)wait;
@end

#endif /* ML3StatementAccumulator_h */
