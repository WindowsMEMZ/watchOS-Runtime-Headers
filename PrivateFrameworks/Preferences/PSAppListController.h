//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSAppListController_h
#define PSAppListController_h
@import Foundation;

#include "PSListController.h"
#include "PSDriverPolicyForAppDelegate-Protocol.h"
#include "PSSystemPolicyForApp.h"
#include "PSSystemPolicyForAppDelegate-Protocol.h"

@class NSString, PSDriverPolicyForApp;

@interface PSAppListController : PSListController<PSSystemPolicyForAppDelegate, PSDriverPolicyForAppDelegate>

@property (retain, nonatomic) PSSystemPolicyForApp *appPolicy;
@property (retain, nonatomic) PSSystemPolicyForApp *systemPolicy;
@property (retain, nonatomic) PSDriverPolicyForApp *driverPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)allowedPrivacyBundlesForID;
+ (id)allowedPrivacyBundlesForName;
+ (id)onBoardingKitBundleIDDict;
+ (id)onBoardingKitBundleNameDict;
+ (BOOL)canUseOnBoardingKitForPrivacyDisplayForBundleID:(id)id;
+ (BOOL)canUseOnBoardingKitFOrPrivacyDisplayForBundleName:(id)name;
+ (id)localizedTitlesFromUnlocalizedTitles:(id)titles stringsTable:(id)table parentSpecifier:(id)specifier;
+ (id)groupSpecifierFromDictionary:(id)dictionary stringsTable:(id)table parentSpecifier:(id)specifier target:(id)target;
+ (id)radioGroupSpecifiersFromDictionary:(id)dictionary stringsTable:(id)table parentSpecifier:(id)specifier target:(id)target;
+ (id)textFieldSpecifierFromDictionary:(id)dictionary stringsTable:(id)table parentSpecifier:(id)specifier target:(id)target;
+ (id)toggleSwitchSpecifierFromDictionary:(id)dictionary stringsTable:(id)table parentSpecifier:(id)specifier target:(id)target;
+ (id)sliderSpecifierFromDictionary:(id)dictionary stringsTable:(id)table parentSpecifier:(id)specifier target:(id)target;
+ (id)titleValueSpecifierFromDictionary:(id)dictionary stringsTable:(id)table parentSpecifier:(id)specifier target:(id)target;
+ (id)multiValueSpecifierFromDictionary:(id)dictionary stringsTable:(id)table parentSpecifier:(id)specifier target:(id)target;
+ (id)childPaneSpecifierFromDictionary:(id)dictionary stringsTable:(id)table parentSpecifier:(id)specifier target:(id)target;
+ (id)specifiersFromDictionary:(id)dictionary stringsTable:(id)table parentSpecifier:(id)specifier target:(id)target;
+ (id)_typeErrorStringForKeyWithName:(id)name expectedType:(Class)type actualType:(Class)type;

/* instance methods */
- (id)_uiValueFromValue:(id)value specifier:(id)specifier;
- (id)_valueFromUIValue:(id)uivalue specifier:(id)specifier;
- (id)_readToggleSwitchSpecifierValue:(id)value;
- (void)_setToggleSwitchSpecifierValue:(id)value specifier:(id)specifier;
- (void)showPrivacyControllerForBundleID:(id)id;
- (void)showPrivacyControllerForBundleName:(id)name;
- (void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)specifier;
- (void)setPreferenceValue:(id)value specifier:(id)specifier;
- (void)viewWillAppear:(BOOL)appear;
- (id)specifiers;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (id)bundle;
@end

#endif /* PSAppListController_h */
