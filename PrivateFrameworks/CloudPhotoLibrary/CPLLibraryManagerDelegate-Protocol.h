//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLLibraryManagerDelegate_Protocol_h
#define CPLLibraryManagerDelegate_Protocol_h
@import Foundation;

@protocol CPLLibraryManagerDelegate <NSObject>
/* instance methods */
- (void)libraryManagerStatusDidChange:(id)change;
- (void)libraryManagerDidStartSynchronization:(id)synchronization;
- (void)libraryManagerHasChangesToPull:(id)pull;
@optional
/* instance methods */
- (void)libraryManagerDidChangeConfiguration:(id)configuration;
- (void)libraryManagerHasStatusChanges:(id)changes;
- (id)displayableNameForLibraryManager:(id)manager;
- (void)libraryManager:(id)manager provideLocalResource:(id)resource recordClass:(Class)class completionHandler:(id /* block */)handler;
- (void)libraryManager:(id)manager pushAllChangesWithCompletionHandler:(id /* block */)handler;
@end

#endif /* CPLLibraryManagerDelegate_Protocol_h */
