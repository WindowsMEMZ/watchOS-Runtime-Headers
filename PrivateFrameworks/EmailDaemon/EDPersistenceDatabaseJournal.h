//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDPersistenceDatabaseJournal_h
#define EDPersistenceDatabaseJournal_h
@import Foundation;

#include "EDPersistenceDatabaseJournalManager.h"

@class NSString;

@interface EDPersistenceDatabaseJournal : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _referenceCountLock;
}

@property (readonly, nonatomic) EDPersistenceDatabaseJournalManager *journalManager;
@property (readonly) unsigned long long referenceCount;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) unsigned long long number;

/* instance methods */
- (id)initWithJournalManager:(id)manager number:(unsigned long long)number;
- (id)description;
- (void)checkOut;
- (void)checkIn;
@end

#endif /* EDPersistenceDatabaseJournal_h */
