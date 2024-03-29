//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSReaderConfigurationManager_h
#define WBSReaderConfigurationManager_h
@import Foundation;

#include "WBSReaderFontManager.h"

@class NSDictionary, NSMutableDictionary;

@interface WBSReaderConfigurationManager : NSObject {
  /* instance variables */
  long long _textZoomIndex;
  long long _theme;
  NSMutableDictionary *_fontFamilyNameForLanguageTag;
  WBSReaderFontManager *_fontManager;
  BOOL _prefersLargerDefaultFontSize;
}

@property (readonly, nonatomic) NSDictionary *configurationToSave;
@property (readonly, nonatomic) NSDictionary *configurationToSendToWebPage;
@property (nonatomic) BOOL javaScriptEnabled;
@property (nonatomic) BOOL isOLEDDisplay;
@property (readonly, nonatomic) BOOL canMakeTextBigger;
@property (readonly, nonatomic) BOOL canMakeTextSmaller;
@property (readonly, nonatomic) BOOL resettingTextSizeWouldHaveEffect;

/* instance methods */
- (id)initWithPersistedSettingsAsDictionaryRepresentation:(id)representation fontManager:(id)manager prefersLargerDefaultFontSize:(BOOL)size;
- (id)initWithPersistedSettingsAsDictionaryRepresentation:(id)representation fontManager:(id)manager;
- (void)makeTextBigger;
- (void)makeTextSmaller;
- (void)resetTextSize;
- (void)setFont:(id)font forLanguageTag:(id)tag;
- (id)fontForLanguageTag:(id)tag;
- (void)setTheme:(long long)theme forAppearance:(long long)appearance;
- (long long)themeForAppearance:(long long)appearance;
- (long long)_defaultTextZoomIndex;
- (long long)_defaultThemeForAppearance:(long long)appearance;
- (long long)_effectiveTextZoomIndex;
- (void)_migrateToVersion5IfNecessary;
@end

#endif /* WBSReaderConfigurationManager_h */
