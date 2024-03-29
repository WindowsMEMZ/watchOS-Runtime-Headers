//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLSpotlightDonationOperation_h
#define PLSpotlightDonationOperation_h
@import Foundation;

#include "PLSpotlightAsyncOperation.h"
#include "PLPhotoLibrary.h"
#include "PLSpotlightDonationManagerSignpostDelegate-Protocol.h"

@class CSSearchableIndex, NSArray, NSString;

@interface PLSpotlightDonationOperation : PLSpotlightAsyncOperation

@property (readonly, nonatomic) CSSearchableIndex *searchableIndex;
@property (readonly, copy, nonatomic) NSArray *searchableItems;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (weak, nonatomic) NSObject<PLSpotlightDonationManagerSignpostDelegate> *signpostDelegate;

/* instance methods */
- (id)initWithPhotoLibrary:(id)library spotlightSearchableIndex:(id)index searchableItems:(id)items bundleIdentifier:(id)identifier;
- (void)main;
@end

#endif /* PLSpotlightDonationOperation_h */
