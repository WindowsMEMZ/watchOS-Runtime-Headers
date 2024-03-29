//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLPRFPerApplicationSettingsPSSpecifierFactory_h
#define CSLPRFPerApplicationSettingsPSSpecifierFactory_h
@import Foundation;

@class NSOperationQueue;

@interface CSLPRFPerApplicationSettingsPSSpecifierFactory : NSObject {
  /* instance variables */
  NSOperationQueue *_localIconLoadingQueue;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)specifierForSettings:(id)settings set:(SEL)set get:(SEL)get;
- (void)updateSpecifier:(id)specifier withSettings:(id)settings;
@end

#endif /* CSLPRFPerApplicationSettingsPSSpecifierFactory_h */
