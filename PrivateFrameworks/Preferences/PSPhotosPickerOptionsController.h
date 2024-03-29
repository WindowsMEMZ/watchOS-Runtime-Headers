//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSPhotosPickerOptionsController_h
#define PSPhotosPickerOptionsController_h
@import Foundation;

#include "PSListController.h"

@class NSString;

@interface PSPhotosPickerOptionsController : PSListController {
  /* instance variables */
  NSString *_clientIdentifier;
}

/* instance methods */
- (void)viewDidLoad;
- (void)setSpecifier:(id)specifier;
- (id)specifiers;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)_setMetadataSetting:(id)setting specifier:(id)specifier;
- (id)_metadataSetting:(id)setting;
- (void)_setFormatSetting:(unsigned long long)setting;
- (unsigned long long)_formatSetting;
@end

#endif /* PSPhotosPickerOptionsController_h */
