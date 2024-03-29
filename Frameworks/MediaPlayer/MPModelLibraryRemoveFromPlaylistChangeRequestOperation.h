//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPModelLibraryRemoveFromPlaylistChangeRequestOperation_h
#define MPModelLibraryRemoveFromPlaylistChangeRequestOperation_h
@import Foundation;

#include "MPAsyncOperation.h"
#include "MPModelLibraryRemoveFromPlaylistChangeRequest.h"

@interface MPModelLibraryRemoveFromPlaylistChangeRequestOperation : MPAsyncOperation

@property (copy, nonatomic) id /* block */ responseHandler;
@property (copy, nonatomic) MPModelLibraryRemoveFromPlaylistChangeRequest *request;

/* instance methods */
- (void)execute;
@end

#endif /* MPModelLibraryRemoveFromPlaylistChangeRequestOperation_h */
