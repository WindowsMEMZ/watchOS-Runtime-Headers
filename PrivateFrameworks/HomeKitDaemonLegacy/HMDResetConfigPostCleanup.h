//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDResetConfigPostCleanup_h
#define HMDResetConfigPostCleanup_h
@import Foundation;

#include "HMFObject.h"
#include "HMFLogging-Protocol.h"

@class NSString;

@interface HMDResetConfigPostCleanup : HMFObject<HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_readExistingPostCleanupRecord;
+ (void)writePostCleanupRecordWithReason:(unsigned long long)reason steps:(unsigned long long)steps;
+ (void)performAnyPostCleanupStepsIfNecessary;
+ (void)performResetConfigPostCleanupSteps:(unsigned long long)steps dueToReason:(unsigned long long)reason;
+ (void)performIndividualCleanupTasks:(unsigned long long)tasks onRootDirectory:(id)directory;
+ (id)filesToExcludeFromCacheDirectory;
+ (id)filesToExcludeFromHomedDirectory;
+ (id)sqlFileListToRemove:(id)remove fromRootDirectory:(id)directory;
+ (void)removeFilesAtLocation:(id)location;
+ (void)removeFilesAtLocation:(id)location usingFileManager:(id)manager;
+ (void)deleteFilesInsideDirectory:(id)directory excludingFiles:(id)files shouldSkipDirectories:(BOOL)directories;
+ (void)deleteFilesInsideDirectory:(id)directory excludingFiles:(id)files shouldSkipDirectories:(BOOL)directories usingFileManager:(id)manager;
+ (void)writePostCleanupRecordToRemoveAllCoreDataFilesWithReason:(unsigned long long)reason;
+ (id)resetConfigPostCleanupFileLocation;
+ (id)logCategory;
@end

#endif /* HMDResetConfigPostCleanup_h */
