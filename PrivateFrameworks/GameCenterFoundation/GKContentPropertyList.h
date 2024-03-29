//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKContentPropertyList_h
#define GKContentPropertyList_h
@import Foundation;

@class NSDictionary, NSString;

@interface GKContentPropertyList : NSObject {
  /* instance variables */
  NSDictionary *_achievementsByIdentifier;
  NSDictionary *_leaderboardsByIdentifier;
  NSDictionary *_leaderboardSetsByIdentifier;
}

@property (retain) NSString *bundleID;
@property (retain) NSDictionary *root;

/* class methods */
+ (id)localPropertyListForGameDescriptor:(id)descriptor;

/* instance methods */
- (id)_mainBundle;
- (id)localizedStringForKey:(id)key;
- (id)imageNameForDashboardLogo;
- (id)_rootDictionary;
- (id)leaderboardDescriptions;
- (id)leaderboardSetDescriptions;
- (id)achievementDescriptionForIdentifier:(id)identifier;
- (id)leaderboardDescriptionForIdentifier:(id)identifier;
- (id)leaderboardSetDescriptionForIdentifier:(id)identifier;
- (id)achievementDescriptions;
@end

#endif /* GKContentPropertyList_h */
