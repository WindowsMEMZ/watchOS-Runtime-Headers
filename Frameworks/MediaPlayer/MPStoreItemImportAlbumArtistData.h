//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPStoreItemImportAlbumArtistData_h
#define MPStoreItemImportAlbumArtistData_h
@import Foundation;

#include "ML3StoreItemAlbumArtistData.h"

@class NSArray;

@interface MPStoreItemImportAlbumArtistData : ML3StoreItemAlbumArtistData

@property (readonly, nonatomic) NSArray *importElements;

/* instance methods */
- (id)initWithAlbumArtistImportElements:(id)elements;
@end

#endif /* MPStoreItemImportAlbumArtistData_h */
