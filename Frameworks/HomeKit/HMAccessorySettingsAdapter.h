//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMAccessorySettingsAdapter_h
#define HMAccessorySettingsAdapter_h
@import Foundation;

#include "HMAccessorySettingGroup.h"
#include "HMAccessorySettings.h"
#include "HMAccessorySettingsAdapterDelegate-Protocol.h"
#include "HMAccessorySettingsContainerInternal-Protocol.h"
#include "HMAccessorySettingsController.h"
#include "HMAccessorySettingsDataSource.h"
#include "HMAccessorySettingsDataSourceDelegate-Protocol.h"
#include "HMControllable-Protocol.h"
#include "HMLanguageSetting.h"
#include "HMLanguageValueListSetting.h"
#include "_HMContext.h"

@class NSArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMAccessorySettingsAdapter : NSObject<HMAccessorySettingsDataSourceDelegate>

@property (retain) HMAccessorySettingGroup *rootGroup;
@property (readonly) HMAccessorySettingsDataSource *accessoryDataSource;
@property (readonly) HMAccessorySettingsController *accessorySettingsController;
@property (readonly, copy, nonatomic) NSUUID *homeIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) NSObject<HMAccessorySettingsContainerInternal> *settingsContainer;
@property (readonly, weak) NSObject<HMControllable> *settingsControl;
@property (retain) HMAccessorySettings *accessorySettings;
@property (readonly) _HMContext *accessoryContext;
@property (retain) HMLanguageValueListSetting *availableLanguageSetting;
@property (retain) HMLanguageSetting *selectedLanguageSetting;
@property (retain) NSArray *tapAssistanceSelections;
@property (readonly, copy, nonatomic) NSUUID *settingsContainerIdentifier;
@property (readonly, nonatomic) long long containerType;
@property BOOL didReceiveFirstUpdateEvent;
@property BOOL settingsReflected;
@property (weak, nonatomic) NSObject<HMAccessorySettingsAdapterDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)selectedLanguageSettingKeyPath;
+ (id)availableLanguagesKeyPath;
+ (id)languageKeyPaths;
+ (id)tapAssistanceSelectionTitles;
+ (id)tapAssistanceSelectionItemWithIndex:(long long)index;
+ (long long)itemIndexWithTapAssistanceSelectionItem:(id)item;
+ (id)defaultSettings;
+ (BOOL)defaultSettingsContainsKeyPath:(id)path;
+ (BOOL)isKeyPathForBooleanSettingType:(id)type;
+ (BOOL)isKeyPathForConstrainedNumberSettingType:(id)type;
+ (BOOL)isKeyPathForTapAssistanceSelectionSettingType:(id)type;
+ (id)defaultSettingsConstraintsForKeyPath:(id)path;
+ (id)defaultSettingsAllKeyPaths;
+ (float)constraintSettingScaleFactor;
+ (id)scaleUpNumberSettingValue:(id)value;
+ (id)scaleDownNumberSettingValue:(id)value;
+ (id)logCategory;

/* instance methods */
- (id)initWithHomeIdentifier:(id)identifier dataSource:(id)source controller:(id)controller workQueue:(id)queue settingsContainer:(id)container containerIdentifier:(id)identifier containerType:(long long)type settingsControl:(id)control context:(id)context;
- (void)configureWithCompletionHandler:(id /* block */)handler;
- (void)unconfigure;
- (void)_configureForAccessoryWithCompletionHandler:(id /* block */)handler;
- (void)_configureForMediaSystemWithCompletionHandler:(id /* block */)handler;
- (id)_transformAccessorySettingToLanguageSetting:(id)setting;
- (void)updateWithKeyPath:(id)path value:(id)value completionHandler:(id /* block */)handler;
- (void)updateSettingsReflected:(BOOL)reflected;
- (id)createKeyPathArrayWithKeyPath:(id)path;
- (id)groupKeyArrayFromKeyPath:(id)path;
- (id)settingKeyFromKeyPath:(id)path;
- (id)appendKeyPath:(id)path withNextKey:(id)key;
- (id)findOrAddAccessorySettingGroupWithKeyPath:(id)path;
- (void)createRootSettingGroup;
- (id)createTapAssistanceSelectionSettingFromNumberConstraint:(id)constraint properties:(unsigned long long)properties value:(id)value min:(id)min max:(id)max step:(id)step;
- (BOOL)isValidSelectionItemNumberConstraintValue:(id)value min:(id)min max:(id)max step:(id)step;
- (id)accessoryNumberSettingWithKeyPath:(id)path;
- (id)accessorySettingWithKeyPath:(id)path;
- (BOOL)updateBooleanSettingWithKeyPath:(id)path value:(BOOL)value;
- (BOOL)updateNumberSettingWithKeyPath:(id)path value:(id)value;
- (BOOL)updateTapAssistanceSelectionSettingWithKeyPath:(id)path value:(id)value;
- (void)accessorySettingsDataSource:(id)source didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)identifier settings:(id)settings;
- (BOOL)_handleLanguageSettingUpdate:(id)update;
- (id)_findSettingInGroupForKeyPath:(id)path group:(id)group;
- (BOOL)_addOrUpdateLanguageSetting:(id)setting availableLanguagesSetting:(id)setting;
- (id)legacyLanguageSettingFromSelectedSetting:(id)setting selections:(id)selections settingsReflected:(BOOL)reflected;
- (id)languageSelectionItemFromValue:(id)value;
- (id)createTapAssistanceSelections;
- (id)transformIntegerToSelection:(long long)selection;
- (BOOL)transformSelectionToInteger:(id)integer integerValue:(long long *)value;
- (BOOL)booleanSettingValueWithKeyPath:(id)path;
- (id)accessoryLanguageSetting;
- (id)numberSettingValueWithKeyPath:(id)path;
- (id)tapAssistanceSelectionSetting:(id)setting;
- (id)tapAssistanceSelectionSettingValue:(id)value;
- (BOOL)settingReflected:(id)reflected;
- (id)logIdentifier;
@end

#endif /* HMAccessorySettingsAdapter_h */
