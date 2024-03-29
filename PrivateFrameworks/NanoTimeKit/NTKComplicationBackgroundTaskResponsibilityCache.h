//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKComplicationBackgroundTaskResponsibilityCache_h
#define NTKComplicationBackgroundTaskResponsibilityCache_h
@import Foundation;

#include "NTKTaskScheduler.h"

@class NSLock, NSMutableDictionary;

@interface NTKComplicationBackgroundTaskResponsibilityCache : NSObject {
  /* instance variables */
  NSMutableDictionary *_complicationToHandlesBackgroundTasks;
  NSLock *_complicationToHandlesBackgroundTasksLock;
  BOOL _cacheDirty;
  NTKTaskScheduler *_taskScheduler;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)setClientIdentifier:(id)identifier handlesBackgroundTasks:(BOOL)tasks;
- (BOOL)backgroundTasksHandledForClientIdentifier:(id)identifier;
- (BOOL)hasBackgroungTaskResponsibiltyInformationForClientIdentifier:(id)identifier;
- (void)removeAllEntriesExceptThoseWithClientIdentifiers:(id)identifiers;
- (void)_dirtyCache;
- (BOOL)_flushCache;
@end

#endif /* NTKComplicationBackgroundTaskResponsibilityCache_h */
