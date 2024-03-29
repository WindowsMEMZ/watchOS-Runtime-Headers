//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFVideoMetadata_h
#define PFVideoMetadata_h
@import Foundation;

@class AVAsset, NSDictionary, NSString;

@interface PFVideoMetadata : NSObject {
  /* instance variables */
  AVAsset *_asset;
}

@property (readonly) BOOL isSpatial;
@property (readonly) BOOL isHDR;
@property (readonly) BOOL isPlayable;
@property (readonly) BOOL isDecodable;
@property (readonly) NSString *firstVideoTrackFormatDebugDescription;
@property (readonly) NSDictionary *outOfBandHints;

/* class methods */
+ (void)loadMetadataForAsset:(id)asset completion:(id /* block */)completion;
+ (id)metadataItemValueFromAsset:(id)asset withKey:(id)key keySpace:(id)space;
+ (id)firstVideoTrackFormatDebugDescriptionForAsset:(id)asset;
+ (id)outOfBandHintsForVideoAsset:(id)asset;
+ (BOOL)hasValidMetadataForLoopingVideoAsset:(id)asset;
+ (id)quickTimeMetadataItemValueFromAsset:(id)asset withKey:(id)key;
+ (id)quickTimeMetadataItemsWithKey:(id)key value:(id)value;
+ (BOOL)readMetadataType:(unsigned char)type fromFileURL:(id)url value:(id *)value error:(id *)error;
+ (BOOL)readMetadataType:(unsigned char)type fromAVAsset:(id)avasset value:(id *)value error:(id *)error;
+ (id)metadataItemsWithMetadataType:(unsigned char)type value:(id)value error:(id *)error;
+ (id)arrayByRemovingMetadataItemOfType:(unsigned char)type fromArray:(id)array error:(id *)error;
+ (BOOL)videoAssetIsDecodable:(id)decodable;
+ (BOOL)videoAssetIsPlayable:(id)playable;
+ (BOOL)videoAssetIsHighDynamicRange:(id)range;
+ (BOOL)videoAssetIsMonoski:(id)monoski;
+ (BOOL)videoAssetIsSpatial:(id)spatial;
+ (BOOL)videoTrackIsSpatial:(id)spatial;
+ (BOOL)videoTrackFormatDescriptionIsHighDynamicRange:(struct opaqueCMFormatDescription *)range;
+ (BOOL)videoTrackFormatDescriptionIsHDR10:(struct opaqueCMFormatDescription *)hdr10;
+ (BOOL)videoTrackFormatDescriptionIsProResLOG:(struct opaqueCMFormatDescription *)log;
+ (BOOL)videoTrackFormatDescriptionContainsPortraitData:(struct opaqueCMFormatDescription *)data;
+ (unsigned int)videoCodecFourCharCodeNumberForAVAsset:(id)avasset;

/* instance methods */
@end

#endif /* PFVideoMetadata_h */
