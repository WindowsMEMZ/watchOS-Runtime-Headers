//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLSyndicationResourcePrefetchManagerDelegate_Protocol_h
#define PLSyndicationResourcePrefetchManagerDelegate_Protocol_h
@import Foundation;

@protocol PLSyndicationResourcePrefetchManagerDelegate <NSObject>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL isNetworkAccessAllowed;

/* instance methods */
- (id)downloadThrottlingDateForPrefetchManager:(id)manager;
- (void)prefetchManager:(id)manager receivedNewDownloadThrottlingDate:(id)date managedObjectContext:(id)context;
- (void)performTransactionForPrefetchManager:(id)manager synchronous:(BOOL)synchronous block:(id /* block */)block;
- (id)requestLocalAvailabilityChangeForPrefetchManager:(id)manager resource:(id)resource options:(id)options completion:(id /* block */)completion;
@end

#endif /* PLSyndicationResourcePrefetchManagerDelegate_Protocol_h */
