//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCMediaRemoteCommandOperation_h
#define MPCMediaRemoteCommandOperation_h
@import Foundation;

#include "MPAsyncOperation.h"
#include "MPCPlayerCommandRequest.h"
#include "MPCPlayerCommandStatus.h"

@class NSDate;

@interface MPCMediaRemoteCommandOperation : MPAsyncOperation

@property (readonly, nonatomic) MPCPlayerCommandRequest *request;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSDate *sendDate;
@property (readonly, nonatomic) MPCPlayerCommandStatus *status;

/* instance methods */
- (id)initWithCommandRequest:(id)request options:(unsigned long long)options sendDate:(id)date;
- (void)execute;
- (void)performLibraryFavoriteEntityChangeRequestFor:(id)for withFavoriteEntityChangeRequestAction:(long long)action completion:(id /* block */)completion;
@end

#endif /* MPCMediaRemoteCommandOperation_h */
