//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REUIInternalSettings_h
#define REUIInternalSettings_h
@import Foundation;

@class NSArray, NSString, NSURL, NSUserDefaults;

@interface REUIInternalSettings : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) NSString *preferenceName;
@property (readonly, nonatomic) NSString *domainName;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) NSArray *fields;
@property (readonly, nonatomic) id /* block */ buttonBlock;
@property (readonly, nonatomic) unsigned long long type;

/* class methods */
+ (id)internalSettingWithTitle:(id)title description:(id)description preference:(id)preference;
+ (id)internalSettingWithTitle:(id)title description:(id)description preference:(id)preference domain:(id)domain;
+ (id)internalSettingWithTitle:(id)title description:(id)description url:(id)url applicationIdentifier:(id)identifier;
+ (id)internalSettingWithTitle:(id)title fields:(id)fields description:(id)description;
+ (id)internalSettingWithTitle:(id)title buttonBlock:(id /* block */)block;

/* instance methods */
@end

#endif /* REUIInternalSettings_h */
