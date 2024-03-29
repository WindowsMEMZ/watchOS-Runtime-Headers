//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLClientLibraryManagerProtocol_Protocol_h
#define CPLClientLibraryManagerProtocol_Protocol_h
@import Foundation;

@protocol CPLClientLibraryManagerProtocol <NSObject>
/* instance methods */
- (void)downloadDidStartForResourceTransferTask:(id)task;
- (void)downloadDidProgress:(float)progress forResourceTransferTask:(id)task;
- (void)downloadDidFinishForResourceTransferTask:(id)task finalResource:(id)resource withError:(id)error;
- (void)inMemoryDownloadDidFinishForResourceTransferTask:(id)task data:(id)data withError:(id)error;
- (void)backgroundDownloadDidFinishForResource:(id)resource;
- (void)backgroundDownloadDidFailForResource:(id)resource;
- (void)uploadDidStartForResource:(id)resource withResourceTransferTask:(id)task;
- (void)uploadOfResource:(id)resource didProgress:(float)progress forResourceTransferTask:(id)task;
- (void)uploadOfResource:(id)resource didFinishForResourceTransferTask:(id)task withError:(id)error;
- (void)libraryManagerHasChangesToPull;
- (void)libraryManagerHasStatusChanges;
- (void)libraryManagerDidUpdateStatusWithProperties:(id)properties;
- (void)libraryManagerDidUpdateSizeOfResourcesToUploadToSize:(unsigned long long)size sizeOfOriginalResourcesToUpload:(unsigned long long)upload numberOfImages:(unsigned long long)images numberOfVideos:(unsigned long long)videos numberOfOtherItems:(unsigned long long)items;
- (void)forceSyncDidFinishForTask:(id)task withErrors:(id)errors;
- (void)provideLocalResource:(id)resource recordClassString:(id)string completionHandler:(id /* block */)handler;
- (void)pushAllChangesWithCompletionHandler:(id /* block */)handler;
- (void)libraryManagerHasBeenReplaced;
@end

#endif /* CPLClientLibraryManagerProtocol_Protocol_h */
