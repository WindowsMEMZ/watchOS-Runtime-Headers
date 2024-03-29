//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PHAssetResourceRequest_Protocol_h
#define PHAssetResourceRequest_Protocol_h
@import Foundation;

#include "PHAssetResource.h"
#include "PHAssetResourceRequest-Protocol.h"
#include "PHAssetResourceRequestDelegate-Protocol.h"
#include "PHAssetResourceRequestOptions.h"
#include "PHProgressContainerForRetryableRequest.h"

@class NSDictionary, NSError, NSProgress, NSString, PLProgressFollower;

@protocol PHAssetResourceRequest <NSObject>

@property (readonly, nonatomic) PHAssetResource *assetResource;
@property (readonly, nonatomic) PHAssetResourceRequestOptions *options;
@property (readonly, nonatomic) int requestID;
@property (readonly, nonatomic) unsigned long long managerID;
@property (readonly, weak, nonatomic) NSObject<PHAssetResourceRequestDelegate> *delegate;
@property (readonly, nonatomic) NSDictionary *info;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) BOOL cancelled;
@property (copy, nonatomic) NSString *taskIdentifier;

/* instance methods */
- (void)startRequest;
- (void)cancel;
- (void)configureWithError:(id)error;
- (BOOL)isCancelled;
@end

#endif /* PHAssetResourceRequest_Protocol_h */
