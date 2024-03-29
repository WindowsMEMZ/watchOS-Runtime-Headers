//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPiTunesMediaTVShowUnresolvedMetadata_h
#define LPiTunesMediaTVShowUnresolvedMetadata_h
@import Foundation;

#include "LPiTunesMediaAsset.h"
#include "LPiTunesMediaUnresolvedMetadata-Protocol.h"

@class NSString;

@interface LPiTunesMediaTVShowUnresolvedMetadata : NSObject<LPiTunesMediaUnresolvedMetadata>

@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) LPiTunesMediaAsset *artwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)resolve;
- (id)assetsToFetch;
@end

#endif /* LPiTunesMediaTVShowUnresolvedMetadata_h */
