//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCVideoRuleCollectionsScreenSecondaryEmbedded_h
#define VCVideoRuleCollectionsScreenSecondaryEmbedded_h
@import Foundation;

#include "VCVideoRuleCollectionsScreenSecondary.h"
#include "VCHardwareSettingsEmbeddedProtocol-Protocol.h"

@interface VCVideoRuleCollectionsScreenSecondaryEmbedded : VCVideoRuleCollectionsScreenSecondary {
  /* instance variables */
  NSObject<VCHardwareSettingsEmbeddedProtocol> *_hardwareSettings;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initWithHardwareSettings:(id)settings;
- (void)initSupportedPayloads;
- (void)selectPreferredRule:(id)rule screenSize:(struct CGSize { double x0; double x1; })size;
- (BOOL)setupRules;
- (BOOL)setupH264Rules;
- (unsigned int)tilesPerFrame:(int)frame;
@end

#endif /* VCVideoRuleCollectionsScreenSecondaryEmbedded_h */
