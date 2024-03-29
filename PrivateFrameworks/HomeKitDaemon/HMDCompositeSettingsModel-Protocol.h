//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCompositeSettingsModel_Protocol_h
#define HMDCompositeSettingsModel_Protocol_h
@import Foundation;

@protocol HMDCompositeSettingsModel 
/* class methods */
+ (id)allKeyPaths;
/* instance methods */
- (id)keyPathsToSettingsForMigration;
- (id)keyPathsToSettings;
- (void)setSetting:(id)setting forKeyPath:(id)path withError:(id *)error;
- (id)keyPathsToSettingMetadata;
@end

#endif /* HMDCompositeSettingsModel_Protocol_h */
