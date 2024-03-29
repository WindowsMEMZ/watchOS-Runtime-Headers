//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef MLMediaLibraryAccountChangeObserver_Protocol_h
#define MLMediaLibraryAccountChangeObserver_Protocol_h
@import Foundation;

@protocol MLMediaLibraryAccountChangeObserver <NSObject>
/* instance methods */
- (void)performDatabasePathChange:(id)change completion:(id /* block */)completion;
- (void)emergencyDisconnectWithCompletion:(id /* block */)completion;
- (void)terminateForFailureToPerformDatabasePathChange;
@end

#endif /* MLMediaLibraryAccountChangeObserver_Protocol_h */
