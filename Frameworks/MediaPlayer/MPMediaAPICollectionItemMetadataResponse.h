//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPMediaAPICollectionItemMetadataResponse_h
#define MPMediaAPICollectionItemMetadataResponse_h
@import Foundation;

@class NSArray, NSDictionary;

@interface MPMediaAPICollectionItemMetadataResponse : NSObject

@property (readonly, nonatomic) BOOL isFinalResponse;
@property (readonly, nonatomic) double playbackAuthorizationTokenHalfLifeExpiration;
@property (readonly, copy, nonatomic) NSDictionary *response;
@property (readonly, copy, nonatomic) NSArray *failedItemIdentifiers;

/* instance methods */
- (id)initWithMediaAPICollectionItemMetadataResponse:(id)response authorizationTokenHalfLifeDuration:(double)duration failedItemIdentifiers:(id)identifiers isFinalResponse:(BOOL)response;
@end

#endif /* MPMediaAPICollectionItemMetadataResponse_h */
