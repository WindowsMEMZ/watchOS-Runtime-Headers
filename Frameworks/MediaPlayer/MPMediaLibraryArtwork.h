//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPMediaLibraryArtwork_h
#define MPMediaLibraryArtwork_h
@import Foundation;

#include "MPMediaLibraryArtworkRequest.h"

@class ML3Artwork, NSArray, NSDictionary, NSURL;

@interface MPMediaLibraryArtwork : NSObject

@property (weak, nonatomic) MPMediaLibraryArtworkRequest *artworkRequest;
@property (retain, nonatomic) ML3Artwork *artwork;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int x0; } stateLock;
@property (readonly, nonatomic) NSArray *validSizes;
@property (readonly, nonatomic) NSArray *autogeneratedSizes;
@property (readonly, copy, nonatomic) NSURL *originalFileURL;
@property (copy, nonatomic) NSDictionary *effectsMetadata;

/* class methods */
+ (BOOL)artworkExistsForRequest:(id)request;
+ (BOOL)needsToFetchArtworkForRequest:(id)request;
+ (id)availableArtworkWithRequest:(id)request;
+ (BOOL)fetchableArtworkExistsForRequest:(id)request;
+ (void)fetchArtworkForRequest:(id)request completionHandler:(id /* block */)handler;
+ (void)cancelFetchingArtworkForRequest:(id)request;
+ (void)fetchArtworkInfoForRequest:(id)request completionHandler:(id /* block */)handler;

/* instance methods */
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)imageFileURLForSize:(struct CGSize { double x0; double x1; })size;
- (id)imageFileURLForEffect:(id)effect;
@end

#endif /* MPMediaLibraryArtwork_h */
