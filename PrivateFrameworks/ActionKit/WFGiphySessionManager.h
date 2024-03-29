//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFGiphySessionManager_h
#define WFGiphySessionManager_h
@import Foundation;

#include "NSURLSessionDataDelegate-Protocol.h"

@class NSString, NSURL, NSURLSession;

@interface WFGiphySessionManager : NSObject<NSURLSessionDataDelegate>

@property (readonly, nonatomic) NSURLSession *session;
@property (copy, nonatomic) NSString *apiKey;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithSessionConfiguration:(id)configuration;
- (void)random:(id /* block */)random;
- (void)trendingWithLimit:(unsigned long long)limit completion:(id /* block */)completion;
- (void)search:(id)search limit:(unsigned long long)limit completion:(id /* block */)completion;
- (void)sendRequestWithPath:(id)path parameters:(id)parameters completion:(id /* block */)completion;
@end

#endif /* WFGiphySessionManager_h */
