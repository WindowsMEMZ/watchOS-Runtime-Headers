//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPointUtility_h
#define GEOPointUtility_h
@import Foundation;

@interface GEOPointUtility : NSObject
/* class methods */
+ (void *)controlPoints:(id)points usesZilch:(BOOL)zilch;
+ (unsigned long long)pointCount:(id)count usesZilch:(BOOL)zilch;
+ (struct { double x0; double x1; double x2; })pointAt:(unsigned long long)at pointData:(id)data usesZilch:(BOOL)zilch;
+ (id)unpackPoints:(id)points usesZilch:(BOOL)zilch;
+ (id)unpackZilchPoints:(id)points;
+ (id)unpackBasicPoints:(id)points;
+ (id)compressedZilchDataFromPoints:(void *)points fromPointIndex:(unsigned long long)index pointCount:(unsigned long long)count;
+ (id)subdataFromPointData:(id)data fromPointIndex:(unsigned long long)index usesZilch:(BOOL)zilch;
+ (id)debugDescriptionForCompressedZilchData:(id)data;
@end

#endif /* GEOPointUtility_h */
