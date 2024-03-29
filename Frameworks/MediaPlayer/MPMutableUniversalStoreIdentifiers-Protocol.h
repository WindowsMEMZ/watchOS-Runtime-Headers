//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPMutableUniversalStoreIdentifiers_Protocol_h
#define MPMutableUniversalStoreIdentifiers_Protocol_h
@import Foundation;

@protocol MPMutableUniversalStoreIdentifiers <MPUniversalStoreIdentifiers>

@property (copy, nonatomic) NSString *globalPlaylistID;
@property (nonatomic) long long adamID;
@property (copy, nonatomic) NSArray *formerAdamIDs;
@property (copy, nonatomic) NSString *universalCloudLibraryID;
@property (nonatomic) long long purchasedAdamID;
@property (nonatomic) long long subscriptionAdamID;
@property (copy, nonatomic) NSString *socialProfileID;
@property (copy, nonatomic) NSString *informalMediaClipID;
@property (copy, nonatomic) NSString *informalStaticAssetID;
@property (nonatomic) long long reportingAdamID;
@property (nonatomic) long long assetAdamID;
@property (nonatomic) long long lyricsAdamID;

@end

#endif /* MPMutableUniversalStoreIdentifiers_Protocol_h */
