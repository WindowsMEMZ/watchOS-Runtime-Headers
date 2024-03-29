//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 936.60.10.0.0
//
#ifndef MAAutoAsset_h
#define MAAutoAsset_h
@import Foundation;

#include "MAAutoAssetSelector.h"
#include "NSSecureCoding-Protocol.h"
#include "SUCoreConnectClientDelegate-Protocol.h"

@class NSDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface MAAutoAsset : NSObject<SUCoreConnectClientDelegate, NSSecureCoding>

@property (retain, nonatomic) MAAutoAssetSelector *contentLockedSelector;
@property (retain, nonatomic) NSString *contentLockedReason;
@property (retain, nonatomic) NSURL *localContentURL;
@property (retain, nonatomic) NSDictionary *assetAttributes;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (nonatomic) int locksOfContent;
@property (readonly, retain, nonatomic) NSString *autoAssetClientName;
@property (readonly, retain, nonatomic) MAAutoAssetSelector *assetSelector;
@property (readonly, retain, nonatomic) NSString *updateCategoryDesiredByClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (void)interestInContent:(id)content forAssetSelector:(id)selector completion:(id /* block */)completion;
+ (void)interestInContent:(id)content forAssetSelector:(id)selector withInterestPolicy:(id)policy completion:(id /* block */)completion;
+ (id)interestInContentSync:(id)sync forAssetSelector:(id)selector;
+ (id)interestInContentSync:(id)sync forAssetSelector:(id)selector withInterestPolicy:(id)policy;
+ (void)determineIfAvailable:(id)available forAssetSelector:(id)selector completion:(id /* block */)completion;
+ (id)determineIfAvailableSync:(id)sync forAssetSelector:(id)selector discoveredAttributes:(id *)attributes error:(id *)error;
+ (void)endPreviousLocksOfReason:(id)reason forAssetSelector:(id)selector removingLockCount:(long long)count completion:(id /* block */)completion;
+ (void)endPreviousLocksOfReason:(id)reason forClientName:(id)name forAssetSelector:(id)selector removingLockCount:(long long)count completion:(id /* block */)completion;
+ (id)endPreviousLocksOfReasonSync:(id)sync forAssetSelector:(id)selector removingLockCount:(long long)count;
+ (id)endPreviousLocksOfReasonSync:(id)sync forClientName:(id)name forAssetSelector:(id)selector removingLockCount:(long long)count;
+ (void)endAllPreviousLocksOfReason:(id)reason forAssetSelector:(id)selector completion:(id /* block */)completion;
+ (void)endAllPreviousLocksOfReason:(id)reason forClientName:(id)name forAssetSelector:(id)selector completion:(id /* block */)completion;
+ (id)endAllPreviousLocksOfReasonSync:(id)sync forAssetSelector:(id)selector;
+ (id)endAllPreviousLocksOfReasonSync:(id)sync forClientName:(id)name forAssetSelector:(id)selector;
+ (void)endAllPreviousLocksOfSelector:(id)selector completion:(id /* block */)completion;
+ (void)endAllPreviousLocksOfSelector:(id)selector forClientName:(id)name completion:(id /* block */)completion;
+ (id)endAllPreviousLocksOfSelectorSync:(id)sync;
+ (id)endAllPreviousLocksOfSelectorSync:(id)sync forClientName:(id)name;
+ (void)cancelActivityForSelector:(id)selector completion:(id /* block */)completion;
+ (id)cancelActivityForSelectorSync:(id)sync;
+ (void)eliminateAllForSelector:(id)selector completion:(id /* block */)completion;
+ (id)eliminateAllForSelectorSync:(id)sync;
+ (void)eliminateAllForAssetType:(id)type completion:(id /* block */)completion;
+ (id)eliminateAllForAssetTypeSync:(id)sync;
+ (void)eliminatePromotedNeverLockedForSelector:(id)selector completion:(id /* block */)completion;
+ (id)eliminatePromotedNeverLockedForSelectorSync:(id)sync;
+ (void)stageDetermineAllAvailableForUpdate:(id)update completion:(id /* block */)completion;
+ (id)stageDetermineAllAvailableForUpdateSync:(id)sync totalExpectedBytes:(unsigned long long *)bytes error:(id *)error;
+ (void)stageDetermineAllAvailable:(id)available forTargetBuildVersion:(id)version completion:(id /* block */)completion;
+ (id)stageDetermineAllAvailableSync:(id)sync forTargetBuildVersion:(id)version totalExpectedBytes:(unsigned long long *)bytes error:(id *)error;
+ (void)stageDownloadAll:(long long)all reportingProgress:(id /* block */)progress completion:(id /* block */)completion;
+ (unsigned long long)stageDownloadAllSync:(long long)sync assetsSuccessfullyStaged:(long long *)staged error:(id *)error reportingProgress:(id /* block */)progress;
+ (void)stagePurgeAll:(id /* block */)all;
+ (id)stagePurgeAllSync;
+ (id)assetSelectorForAssetTargetOSVersion:(id)osversion forTargetBuildVersion:(id)version;
+ (void)frameworkInstanceSetLogDomain;
+ (id)defaultDispatchQueue;
+ (id)frameworkDispatchQueue;
+ (id)frameworkInstanceUUID;
+ (long long)waitOnSemaphore:(id)semaphore withDaemonTriggeredTimeout:(long long)timeout;

/* instance methods */
- (id)initForClientName:(id)name selectingAsset:(id)asset error:(id *)error;
- (id)initForClientName:(id)name selectingAsset:(id)asset completingFromQueue:(id)queue error:(id *)error;
- (id)initForClientName:(id)name selectingAsset:(id)asset usingDesiredPolicyCategory:(id)category error:(id *)error;
- (id)initForClientName:(id)name selectingAsset:(id)asset usingDesiredPolicyCategory:(id)category completingFromQueue:(id)queue error:(id *)error;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)interestInContent:(id)content completion:(id /* block */)completion;
- (void)interestInContent:(id)content withInterestPolicy:(id)policy completion:(id /* block */)completion;
- (id)interestInContentSync:(id)sync;
- (id)interestInContentSync:(id)sync withInterestPolicy:(id)policy;
- (void)checkForNewer:(id)newer withTimeout:(long long)timeout completion:(id /* block */)completion;
- (void)checkForNewer:(id)newer withUsagePolicy:(id)policy withTimeout:(long long)timeout completion:(id /* block */)completion;
- (id)checkForNewerSync:(id)sync withTimeout:(long long)timeout discoveredAttributes:(id *)attributes error:(id *)error;
- (id)checkForNewerSync:(id)sync withUsagePolicy:(id)policy withTimeout:(long long)timeout discoveredAttributes:(id *)attributes error:(id *)error;
- (void)determineIfAvailable:(id)available withTimeout:(long long)timeout completion:(id /* block */)completion;
- (id)determineIfAvailableSync:(id)sync withTimeout:(long long)timeout discoveredAttributes:(id *)attributes error:(id *)error;
- (void)currentStatus:(id /* block */)status;
- (id)currentStatusSync:(id *)sync;
- (void)lockContent:(id)content withTimeout:(long long)timeout completion:(id /* block */)completion;
- (void)lockContent:(id)content withUsagePolicy:(id)policy withTimeout:(long long)timeout completion:(id /* block */)completion;
- (void)lockContent:(id)content withTimeout:(long long)timeout reportingProgress:(id /* block */)progress completion:(id /* block */)completion;
- (void)lockContent:(id)content withUsagePolicy:(id)policy withTimeout:(long long)timeout reportingProgress:(id /* block */)progress completion:(id /* block */)completion;
- (id)lockContentSync:(id)sync withTimeout:(long long)timeout lockedAssetSelector:(id *)selector newerInProgress:(id *)progress error:(id *)error;
- (id)lockContentSync:(id)sync withUsagePolicy:(id)policy withTimeout:(long long)timeout lockedAssetSelector:(id *)selector newerInProgress:(id *)progress error:(id *)error;
- (id)lockContentSync:(id)sync withTimeout:(long long)timeout lockedAssetSelector:(id *)selector newerInProgress:(id *)progress error:(id *)error reportingProgress:(id /* block */)progress;
- (id)lockContentSync:(id)sync withUsagePolicy:(id)policy withTimeout:(long long)timeout lockedAssetSelector:(id *)selector newerInProgress:(id *)progress error:(id *)error reportingProgress:(id /* block */)progress;
- (void)continueLockUsage:(id)usage completion:(id /* block */)completion;
- (void)continueLockUsage:(id)usage withUsagePolicy:(id)policy completion:(id /* block */)completion;
- (id)continueLockUsageSync:(id)sync;
- (id)continueLockUsageSync:(id)sync withUsagePolicy:(id)policy;
- (void)endLockUsage:(id)usage completion:(id /* block */)completion;
- (id)endLockUsageSync:(id)sync;
- (id)assetAttribute:(id)attribute;
- (id)summary;
- (void)connectToServerFrameworkCompletion:(id /* block */)completion;
- (id)_newProxyObjectForLockProgressBlock:(id /* block */)block;
- (id)_newProxyObjectForStageProgressBlock:(id /* block */)block;
- (void)connectionClosed;
- (void)handleResponse:(id)response error:(id)error;
- (void)handleMessage:(id)message reply:(id /* block */)reply;
- (void)_successInterestInContent:(id)content completion:(id /* block */)completion;
- (void)_failedInterestInContent:(long long)content withResponseError:(id)error description:(id)description completion:(id /* block */)completion;
- (void)_successCheckForNewer:(id)newer completion:(id /* block */)completion;
- (void)_failedCheckForNewer:(long long)newer withResponseError:(id)error description:(id)description completion:(id /* block */)completion;
- (void)_successDetermineIfAvailable:(id)available completion:(id /* block */)completion;
- (void)_failedDetermineIfAvailable:(long long)available withResponseError:(id)error description:(id)description completion:(id /* block */)completion;
- (void)_successCurrentStatus:(id)status completion:(id /* block */)completion;
- (void)_failedCurrentStatus:(long long)status withResponseError:(id)error description:(id)description completion:(id /* block */)completion;
- (void)_lockContentStatusProgress:(id)progress lockForUseError:(id)error progressBlock:(id /* block */)block;
- (void)_successLockContent:(id)content dueToDesire:(id)desire completion:(id /* block */)completion;
- (void)_failedLockContent:(long long)content withResponseError:(id)error description:(id)description completion:(id /* block */)completion;
- (void)_successContinueLockUsage:(id)usage completion:(id /* block */)completion;
- (void)_failedContinueLockUsage:(long long)usage withResponseError:(id)error description:(id)description completion:(id /* block */)completion;
- (void)_successEndLockUsage:(id)usage completion:(id /* block */)completion;
- (void)_failedEndLockUsage:(long long)usage withResponseError:(id)error description:(id)description completion:(id /* block */)completion;
- (void)_successCancelActivity:(id /* block */)activity;
- (void)_failedCancelActivity:(long long)activity withResponseError:(id)error description:(id)description completion:(id /* block */)completion;
- (void)_successEliminate:(id /* block */)eliminate;
- (void)_failedEliminate:(long long)eliminate withResponseError:(id)error description:(id)description completion:(id /* block */)completion;
- (void)_successStageDetermineAllAvailable:(id)available completion:(id /* block */)completion;
- (void)_failedStageDetermineAllAvailable:(long long)available withResponseError:(id)error description:(id)description completion:(id /* block */)completion;
- (void)_stageDownloadAllStatusProgress:(id)progress stageProgressError:(id)error progressBlock:(id /* block */)block;
- (void)_successStageDownloadAll:(id)all completion:(id /* block */)completion;
- (void)_failedStageDownloadAll:(long long)all withResponseError:(id)error description:(id)description completion:(id /* block */)completion;
- (void)_successStagePurgeAll:(id /* block */)all;
- (void)_failedStagePurgeAll:(long long)all withResponseError:(id)error description:(id)description completion:(id /* block */)completion;
- (void)_endPreviousLocksOfReason:(id)reason removingLockCount:(long long)count completion:(id /* block */)completion;
- (id)_endPreviousLocksOfReasonSync:(id)sync removingLockCount:(long long)count;
- (void)_endAllPreviousLocksOfReason:(id)reason completion:(id /* block */)completion;
- (id)_endAllPreviousLocksOfReasonSync:(id)sync;
- (void)_cancelActivityForSelector:(id /* block */)selector;
- (id)_cancelActivityForSelectorSync;
- (void)_eliminateAllForSelector:(id /* block */)selector;
- (id)_eliminateAllForSelectorSync;
- (void)_eliminateAllForAssetType:(id /* block */)type;
- (id)_eliminateAllForAssetTypeSync;
- (void)_eliminatePromotedNeverLockedForSelector:(id /* block */)selector;
- (id)_eliminatePromotedNeverLockedForSelectorSync;
- (void)_stageDetermineAllAvailableForUpdate:(id)update completion:(id /* block */)completion;
- (id)_stageDetermineAllAvailableForUpdateSync:(id)sync totalExpectedBytes:(unsigned long long *)bytes error:(id *)error;
- (void)_stageDetermineAllAvailable:(id)available forTargetBuildVersion:(id)version completion:(id /* block */)completion;
- (id)_stageDetermineAllAvailableSync:(id)sync forTargetBuildVersion:(id)version totalExpectedBytes:(unsigned long long *)bytes error:(id *)error;
- (void)_stageDownloadAll:(long long)all reportingProgress:(id /* block */)progress completion:(id /* block */)completion;
- (unsigned long long)_stageDownloadAllSync:(long long)sync assetsSuccessfullyStaged:(long long *)staged error:(id *)error reportingProgress:(id /* block */)progress;
- (void)_stagePurgeAll:(id /* block */)all;
- (id)_stagePurgeAllSync;
@end

#endif /* MAAutoAsset_h */
