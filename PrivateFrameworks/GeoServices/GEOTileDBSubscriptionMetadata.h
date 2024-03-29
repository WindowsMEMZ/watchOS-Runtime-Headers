//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOTileDBSubscriptionMetadata_h
#define GEOTileDBSubscriptionMetadata_h
@import Foundation;

@class NSArray;

@interface GEOTileDBSubscriptionMetadata : NSObject {
  /* instance variables */
  NSArray *_dataStates;
}

@property (readonly, nonatomic) long long downloadState;

/* instance methods */
- (id)initWithDataStates:(id)states downloadState:(long long)state;
- (BOOL)isFullyLoadedForDataType:(unsigned int)type dataSubtype:(unsigned int)subtype version:(unsigned long long)version associatedDataCount:(unsigned long long *)count associatedDataSize:(unsigned long long *)size;
@end

#endif /* GEOTileDBSubscriptionMetadata_h */
