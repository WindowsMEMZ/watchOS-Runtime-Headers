//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentHeroImageManifest_h
#define PKPaymentHeroImageManifest_h
@import Foundation;

@class NSDictionary;

@interface PKPaymentHeroImageManifest : NSObject

@property (readonly, nonatomic) NSDictionary *images;

/* class methods */
+ (BOOL)manifestFileExistsForRegion:(id)region;
+ (void)removeManifestFileForRegion:(id)region;
+ (id)manifestForRegion:(id)region;
+ (void)downloadManifestForRegion:(id)region url:(id)url fileDownloader:(id)downloader completion:(id /* block */)completion;
+ (void)saveManifestDataToDeviceForRegion:(id)region data:(id)data;
+ (id)manifestFileForRegion:(id)region;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* PKPaymentHeroImageManifest_h */
