//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 573.2.0.0.0
//
#ifndef ACHAchievementLocalizationProvider_h
#define ACHAchievementLocalizationProvider_h
@import Foundation;

@class FIUnitManager, NSCalendar, NSDate, NSLocale, NSString;

@interface ACHAchievementLocalizationProvider : NSObject

@property (retain, nonatomic) NSDate *currentDateOverride;
@property (retain, nonatomic) NSLocale *currentLocaleOverride;
@property (retain, nonatomic) NSCalendar *gregorianCalendar;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL wheelchairUser;
@property (nonatomic) long long activityMoveMode;
@property (retain, nonatomic) FIUnitManager *unitManager;

/* instance methods */
- (id)init;
- (id)currentDate;
- (id)currentLocale;
- (id)titleForAchievement:(id)achievement;
- (id)unachievedDescriptionForAchievement:(id)achievement;
- (id)unachievedShortDescriptionForAchievement:(id)achievement;
- (id)achievedDescriptionForAchievement:(id)achievement;
- (id)achievedShortDescriptionForAchievement:(id)achievement;
- (id)friendAchievedTitleForAchievement:(id)achievement;
- (id)friendAchievedDescriptionForAchievement:(id)achievement;
- (id)achievedAlertDescriptionForAchievement:(id)achievement experienceType:(unsigned long long)type;
- (id)_backDateStringForDate:(id)date achievement:(id)achievement dateStyle:(unsigned long long)style;
- (id)achievedAlertBackDescriptionForAchievement:(id)achievement sizeVariant:(long long)variant dateSizeVariant:(long long)variant;
- (id)unachievedAlertDescriptionForAchievement:(id)achievement experienceType:(unsigned long long)type;
- (id)unachievedAlertBackDescriptionForAchievement:(id)achievement;
- (id)shareDescriptionForAchievement:(id)achievement;
- (id)localizedStringForKey:(id)key withAchievement:(id)achievement experienceType:(unsigned long long)type;
- (id)_localizedStringWithKey:(id)key withAchievement:(id)achievement experienceType:(unsigned long long)type;
- (id)_localizedStringWithKey:(id)key withAchievement:(id)achievement localizationBundleURL:(id)url experienceType:(unsigned long long)type;
- (id)_pluralizeLocalizedString:(id)string withAchievement:(id)achievement;
- (id)_stringByTrimmingPlaceholderMarkersFromString:(id)string;
- (id)_replacePlaceholdersInString:(id)string withAchievement:(id)achievement;
- (id)_valueFromPlaceholder:(id)placeholder withAchievement:(id)achievement;
- (id)_formatValue:(id)value forPlaceholder:(id)placeholder usingFormatterNamed:(id)named template:(id)template;
- (id)_formatValue:(id)value usingFormatterNamed:(id)named template:(id)template forCanonicalUnit:(id)unit;
- (id)_userEnergyUnitSuffix;
- (id)_suffixesForLocalizedStringLookup;
- (id)_allStringCombinationsWithPrefix:(id)prefix andSuffixes:(id)suffixes;
- (id)_calculateSuffixCombinations:(id)combinations;
- (id)_formattedMoveGoal:(id)goal template:(id)template;
- (id)_formattedEnergyValue:(id)value canonicalUnit:(id)unit unitStyle:(long long)style;
- (id)_formattedEnergyValueWithoutUnit:(id)unit canonicalUnit:(id)unit;
- (id)_formattedMoveTimeValue:(id)value;
- (id)_progressValueWithAchievement:(id)achievement;
- (id)_achievementValueWithAchievement:(id)achievement;
- (id)_goalValueWithAchievement:(id)achievement;
- (id)_quantityToGoalValueWithAchievement:(id)achievement;
- (id)_remainingProgressValueWithUnit:(id)unit achievement:(id)achievement;
@end

#endif /* ACHAchievementLocalizationProvider_h */
