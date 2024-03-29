//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOTransitArtworkDataSource_Protocol_h
#define GEOTransitArtworkDataSource_Protocol_h
@import Foundation;

@protocol GEOTransitArtworkDataSource <NSObject>

@property (readonly, nonatomic) int artworkSourceType;
@property (readonly, nonatomic) int artworkUseType;
@property (readonly, nonatomic) NSObject<GEOTransitShieldDataSource> *shieldDataSource;
@property (readonly, nonatomic) NSObject<GEOTransitIconDataSource> *iconDataSource;
@property (readonly, nonatomic) NSObject<GEOTransitShieldDataSource> *iconFallbackShieldDataSource;
@property (readonly, nonatomic) NSObject<GEOTransitTextDataSource> *textDataSource;
@property (readonly, nonatomic) BOOL hasRoutingIncidentBadge;
@property (readonly, nonatomic) NSString *accessibilityText;

@end

#endif /* GEOTransitArtworkDataSource_Protocol_h */
