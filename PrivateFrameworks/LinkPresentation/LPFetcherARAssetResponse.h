//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPFetcherARAssetResponse_h
#define LPFetcherARAssetResponse_h
@import Foundation;

#include "LPFetcherResponse.h"
#include "LPARAsset.h"
#include "LPFetcherURLResponse-Protocol.h"

@class NSString;

@interface LPFetcherARAssetResponse : LPFetcherResponse<LPFetcherURLResponse>

@property (readonly, retain, nonatomic) LPARAsset *arAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)isValidMIMEType:(id)mimetype;
+ (id)arAssetPropertiesForFetcher:(id)fetcher;
+ (id)responseForFetcher:(id)fetcher withData:(id)data MIMEType:(id)mimetype;

/* instance methods */
- (id)initWithARAsset:(id)arasset fetcher:(id)fetcher;
@end

#endif /* LPFetcherARAssetResponse_h */
