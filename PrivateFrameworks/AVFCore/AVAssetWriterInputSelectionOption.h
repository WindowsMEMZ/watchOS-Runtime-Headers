//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVAssetWriterInputSelectionOption_h
#define AVAssetWriterInputSelectionOption_h
@import Foundation;

#include "AVMediaSelectionOption.h"
#include "AVAssetWriterInput.h"

@class NSArray, NSDictionary, NSString;

@interface AVAssetWriterInputSelectionOption : AVMediaSelectionOption {
  /* instance variables */
  BOOL _enabled;
}

@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) NSDictionary *outputSettings;
@property (readonly, nonatomic) struct opaqueCMFormatDescription * sourceFormatHint;
@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSString *extendedLanguageTag;
@property (readonly, nonatomic) NSArray *metadata;
@property (readonly, nonatomic) NSDictionary *trackReferences;
@property (readonly, nonatomic) BOOL displaysNonForcedSubtitles;
@property (readonly, nonatomic) AVAssetWriterInput *input;

/* class methods */
+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)input;
+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)input displaysNonForcedSubtitles:(BOOL)subtitles;

/* instance methods */
- (id)initWithAssetWriterInput:(id)input;
- (id)initWithAssetWriterInput:(id)input displaysNonForcedSubtitles:(BOOL)subtitles;
- (void)dealloc;
- (BOOL)_hasEqualValueForKey:(id)key asObject:(id)object;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)_ancillaryDescription;
- (id)mediaSubTypes;
- (id)_taggedCharacteristics;
- (BOOL)_isAuxiliaryContent;
- (BOOL)isPlayable;
- (BOOL)_isDesignatedDefault;
- (id)locale;
- (id)commonMetadata;
- (id)availableMetadataFormats;
- (id)metadataForFormat:(id)format;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)group;
- (id)propertyList;
@end

#endif /* AVAssetWriterInputSelectionOption_h */
