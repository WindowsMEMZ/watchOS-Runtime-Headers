//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMSInitialCloudLibraryImportObserver_h
#define NMSInitialCloudLibraryImportObserver_h
@import Foundation;

@class ICCloudClient, NSMutableArray;
@protocol OS_dispatch_queue;

@interface NMSInitialCloudLibraryImportObserver : NSObject {
  /* instance variables */
  NSMutableArray *_initialImportBlocks;
  BOOL _isObserving;
  ICCloudClient *_cloudClient;
  NSObject<OS_dispatch_queue> *_internalQueue;
}

/* instance methods */
- (id)init;
- (void)performBlockWhenLibraryIsReady:(id /* block */)ready;
- (void)_handleInitialCloudLibraryImportCompleted;
- (void)_performInitialImportBlocks;
@end

#endif /* NMSInitialCloudLibraryImportObserver_h */
