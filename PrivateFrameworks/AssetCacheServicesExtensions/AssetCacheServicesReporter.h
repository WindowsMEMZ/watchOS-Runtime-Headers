//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 131.0.0.0.0
//
#ifndef AssetCacheServicesReporter_h
#define AssetCacheServicesReporter_h
@import Foundation;

@class NSMutableDictionary, NSMutableSet;
@protocol AssetCacheServicesReporterDelegate, OS_dispatch_queue, OS_os_log;

@interface AssetCacheServicesReporter : NSObject

@property (weak) NSObject<AssetCacheServicesReporterDelegate> *weakDelegate;
@property (weak) NSObject<OS_dispatch_queue> *weakDelegateQueue;
@property (retain) NSObject<OS_os_log> *logHandle;
@property (retain) NSMutableDictionary *results;
@property (retain) NSMutableSet *allServerHostPorts;

/* instance methods */
- (id)initWithDelegate:(id)delegate delegateQueue:(id)queue;
- (void)start;
- (id)prettyRanges:(id)ranges;
- (BOOL)doRanges:(id)ranges containAddress:(id)address;
- (id)sortedHostPorts:(id)ports;
- (void)reportPublicIPAddress;
- (void)reportMightHaveWithKeyPath:(id)path;
- (void)reportCachedServersWithKeyPath:(id)path;
- (void)reportFreshServersWithKeyPath:(id)path;
- (void)reportServersWithKeyPath:(id)path generateOptions:(id /* block */)options;
- (id)locateServersWithOptions:(id)options;
- (void)reportCachedPublicIPAddressRangesAndFavoredServerRangesWithKeyPath:(id)path;
- (void)reportFreshPublicIPAddressRangesAndFavoredServerRangesWithKeyPath:(id)path;
- (void)reportPublicIPAddressRangesWithKeyPath:(id)path andFavoredServerRangesWithKeyPath:(id)path generateOptions:(id /* block */)options;
- (void)reportReachability;
- (id)keyPath:(id)path byAppendingKey:(id)key;
- (void)willStartGatheringResultsForKeyPath:(id)path;
- (void)didGatherResults:(id)results forKeyPath:(id)path;
- (void)didFinishWithResults:(id)results;
- (id)serverSortInfoForHostPort:(id)port rank:(id)rank;
- (id)sortedHostPorts:(id)ports usingSortInfo:(id)info;
@end

#endif /* AssetCacheServicesReporter_h */
