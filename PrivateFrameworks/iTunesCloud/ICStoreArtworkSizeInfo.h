//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICStoreArtworkSizeInfo_h
#define ICStoreArtworkSizeInfo_h
@import Foundation;

@class NSArray;

@interface ICStoreArtworkSizeInfo : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *supportedSizes;
@property (nonatomic) BOOL hasMaxSupportedSize;
@property (nonatomic) struct CGSize { double x0; double x1; } maxSupportedSize;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* ICStoreArtworkSizeInfo_h */
