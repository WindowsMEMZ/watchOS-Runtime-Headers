//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BDSUserPreferencesSync_h
#define BDSUserPreferencesSync_h
@import Foundation;

@interface BDSUserPreferencesSync : NSObject
/* class methods */
+ (id)syncedPreferenceKeys;
+ (id)objectFromGroupPreferencesForKey:(id)key;
+ (void)copyChangedGroupPreferencesToLocalContainer;
+ (void)copyChangedLocalPreferencesToGroupContainer;
+ (void)copyChangedLocalPreferencesToGroupContainerWithAppSuiteName:(id)name container:(id)container groupName:(id)name groupContainer:(id)container;
@end

#endif /* BDSUserPreferencesSync_h */
