//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDOntologyShardDownloader_h
#define HDOntologyShardDownloader_h
@import Foundation;

#include "HDOntologyUpdateCoordinator.h"

@protocol HKObserverSet<HDOntologyShardDownloaderObserver, OS_dispatch_queue;

@interface HDOntologyShardDownloader : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  HKObserverSet<HDOntologyShardDownloaderObserver> *_ontologyShardDownloaderObservers;
}

@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator;

/* instance methods */
- (id)init;
- (id)initWithOntologyUpdateCoordinator:(id)coordinator;
- (void)downloadRequiredShardFilesWithSession:(id)session completion:(id /* block */)completion;
- (void)addOntologyShardDownloaderObserver:(id)observer queue:(id)queue;
- (void)removeOntologyShardDownloaderObserver:(id)observer;
@end

#endif /* HDOntologyShardDownloader_h */
