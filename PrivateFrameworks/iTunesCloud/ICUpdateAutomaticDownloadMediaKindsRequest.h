//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICUpdateAutomaticDownloadMediaKindsRequest_h
#define ICUpdateAutomaticDownloadMediaKindsRequest_h
@import Foundation;

#include "ICRequestOperation.h"
#include "AMSRequestPresentationDelegate-Protocol.h"
#include "ICStoreRequestContext.h"

@class NSSet, NSString;

@interface ICUpdateAutomaticDownloadMediaKindsRequest : ICRequestOperation<AMSRequestPresentationDelegate> {
  /* instance variables */
  ICStoreRequestContext *_requestContext;
  NSSet *_mediaKindsToAdd;
  NSSet *_mediaKindsToRemove;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)automaticDownloadMediaKindsForMusic;

/* instance methods */
- (id)initWithRequestContext:(id)context mediaKindsToAdd:(id)add mediaKindsToRemove:(id)remove;
- (void)execute;
- (void)handleAuthenticateRequest:(id)request completion:(id /* block */)completion;
- (void)handleDialogRequest:(id)request completion:(id /* block */)completion;
@end

#endif /* ICUpdateAutomaticDownloadMediaKindsRequest_h */
