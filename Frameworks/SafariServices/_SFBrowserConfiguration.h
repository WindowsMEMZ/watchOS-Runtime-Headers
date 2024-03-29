//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFBrowserConfiguration_h
#define _SFBrowserConfiguration_h
@import Foundation;

@protocol UITraitEnvironment;

@interface _SFBrowserConfiguration : NSObject {
  /* instance variables */
  long long _configuration;
}

@property (readonly, nonatomic) BOOL privateBrowsingEnabled;
@property (readonly, weak, nonatomic) NSObject<UITraitEnvironment> *traitEnvironment;
@property (readonly, nonatomic) BOOL controlledByAutomation;
@property (readonly, nonatomic) BOOL allowsKeyboardCorrectionLearning;
@property (readonly, nonatomic) BOOL allowsRestoringEducationTabs;
@property (readonly, nonatomic) BOOL allowsNetworkedSearchSuggestions;
@property (readonly, nonatomic) BOOL allowsSiteSpecificSearch;
@property (readonly, nonatomic) BOOL allowsSpeculativeLoading;
@property (readonly, nonatomic) BOOL allowsStreamlinedLogin;
@property (readonly, nonatomic) BOOL allowsUserActivityFeedback;
@property (readonly, nonatomic) BOOL usesPersistentDataStore;
@property (readonly, nonatomic) BOOL allowsClosingLastTab;
@property (readonly, nonatomic) BOOL allowsPersistingTabState;
@property (readonly, nonatomic) BOOL allowsReopeningClosedTabs;
@property (readonly, nonatomic) long long barTintStyle;
@property (readonly, nonatomic) BOOL usesDarkTheme;

/* instance methods */
- (id)initWithPrivateBrowsingEnabled:(BOOL)enabled traitEnvironment:(id)environment controlledByAutomation:(BOOL)automation;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isPrivateBrowsingEnabled;
- (BOOL)isControlledByAutomation;
@end

#endif /* _SFBrowserConfiguration_h */
