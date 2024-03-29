//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPlacePhotoLookupResult_h
#define GEOPlacePhotoLookupResult_h
@import Foundation;

#include "GEOMapItemIdentifier.h"

@class NSArray;

@interface GEOPlacePhotoLookupResult : NSObject {
  /* instance variables */
  struct _NSRange { unsigned long long location; unsigned long long length; } _originalRange;
}

@property (readonly, nonatomic) NSArray *photos;
@property (readonly, nonatomic) GEOMapItemIdentifier *mapItemIdentifier;
@property (readonly, nonatomic) unsigned long long totalPhotoCount;

/* class methods */
+ (void)buildVendorLookupResultForPlaceWithCaptionedPhotos:(id)photos mapItemIdentifier:(id)identifier originalRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range completion:(id /* block */)completion;
+ (void)buildLookupResultForPlaceWithPhotoCategories:(id)categories mapItemIdentifier:(id)identifier originalRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range completion:(id /* block */)completion;

/* instance methods */
- (id)initWithPhotos:(id)photos totalPhotoCount:(unsigned long long)count mapItemItemIdentifier:(id)identifier originalRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
@end

#endif /* GEOPlacePhotoLookupResult_h */
