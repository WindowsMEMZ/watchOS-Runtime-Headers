//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 866.4.0.0.0
//
#ifndef CUIMutableCommonAssetStorage_h
#define CUIMutableCommonAssetStorage_h
@import Foundation;

#include "CUICommonAssetStorage.h"

@class NSMutableDictionary;

@interface CUIMutableCommonAssetStorage : CUICommonAssetStorage {
  /* instance variables */
  NSMutableDictionary *_bitmapInfo;
  unsigned int x :1 _enableLargeCarKeyWorkaround;
}

@property (nonatomic) BOOL useBitmapIndex;

/* instance methods */
- (id)initWithPath:(id)path;
- (void)dealloc;
- (void)setKeyFormatData:(id)data;
- (void)setKeySemantics:(int)semantics;
- (void)setStorageVersion:(unsigned int)version;
- (void)setVersionString:(const char *)string;
- (void)setSchemaVersion:(unsigned int)version;
- (void)setRenditionCount:(unsigned int)count;
- (void)setUuid:(id)uuid;
- (void)setAssociatedChecksum:(unsigned int)checksum;
- (void)setColorSpaceID:(unsigned int)id;
- (void)setEnableLargeCarKeyWorkaround:(BOOL)workaround;
- (void)_allocateExtendedMetadata;
- (void)setThinningArguments:(id)arguments;
- (void)setDeploymentPlatform:(id)platform;
- (void)setDeploymentPlatformVersion:(id)version;
- (void)setAuthoringTool:(id)tool;
- (BOOL)setAsset:(id)asset forKey:(id)key;
- (BOOL)setAsset:(id)asset forKey:(const void *)key withLength:(unsigned long long)length;
- (void)setCatalogGlobalData:(id)data;
- (void)setAppearanceIdentifier:(unsigned short)identifier forName:(id)name;
- (void)setLocalizationIdentifier:(unsigned short)identifier forName:(id)name;
- (void)updateBitmapInfo;
- (void)setColor:(struct _rgbquad { unsigned int x0 :8; unsigned int x1 :8; unsigned int x2 :8; unsigned int x3 :8; })color forName:(const char *)name excludeFromFilter:(BOOL)filter;
- (void)setFontName:(id)name baselineOffset:(float)offset forFontSelector:(id)selector;
- (void)setFontSize:(float)size forFontSizeSelector:(id)selector;
- (void)setExternalTags:(id)tags;
- (void)removeAssetForKey:(id)key;
- (void)removeAssetForKey:(const void *)key withLength:(unsigned long long)length;
- (BOOL)removeAssetName:(id)name;
- (BOOL)removeAssetNameKey:(const void *)key withLength:(unsigned long long)length;
- (void)setRenditionKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)key hotSpot:(struct CGPoint { double x0; double x1; })spot forName:(const char *)name;
- (BOOL)_saveBitmapInfo;
- (BOOL)_writeOutKeyFormatWithWorkaround;
- (BOOL)writeToDiskAndCompact:(BOOL)compact;
- (BOOL)writeToDisk;
@end

#endif /* CUIMutableCommonAssetStorage_h */
