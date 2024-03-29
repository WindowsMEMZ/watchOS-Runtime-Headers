//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 356.60.2.0.0
//
#ifndef LSApplicationRecord_AppConduitAdditions_h
#define LSApplicationRecord_AppConduitAdditions_h
@import Foundation;

@interface LSApplicationRecord (AppConduitAdditions)
/* instance methods */
- (BOOL)ACX_isBuiltIn;
- (BOOL)ACX_shouldBeTrackedByAppConduit;
- (BOOL)ACX_shouldBeTrackedByLaunchServicesWatcher;
- (BOOL)ACX_isHidden;
- (id)ACX_watchKitAppExtensionBundleID;
- (id)ACX_watchKitExtension;
- (id)ACX_wkTeamID;
- (id)ACX_externalVersionIdentifier;
@end

#endif /* LSApplicationRecord_AppConduitAdditions_h */
