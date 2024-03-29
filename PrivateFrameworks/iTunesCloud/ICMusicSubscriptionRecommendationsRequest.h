//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICMusicSubscriptionRecommendationsRequest_h
#define ICMusicSubscriptionRecommendationsRequest_h
@import Foundation;

#include "ICRequestOperation.h"
#include "ICStoreRequestContext.h"

@class NSArray;

@interface ICMusicSubscriptionRecommendationsRequest : ICRequestOperation {
  /* instance variables */
  ICStoreRequestContext *_requestContext;
  long long _seedItemID;
  BOOL _isLibraryID;
  long long _maxResultCount;
  NSArray *_resultsList;
}

/* instance methods */
- (id)initWithRequestContext:(id)context seedItemID:(long long)id isLibraryID:(BOOL)id maxResultCount:(long long)count;
- (void)performRequestWithResponseHandler:(id /* block */)handler;
- (void)execute;
@end

#endif /* ICMusicSubscriptionRecommendationsRequest_h */
