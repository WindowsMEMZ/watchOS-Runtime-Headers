//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4416.36.0.0.0
//
#ifndef SBSHomeScreenServiceClientToServerInterface_Protocol_h
#define SBSHomeScreenServiceClientToServerInterface_Protocol_h
@import Foundation;

@protocol SBSHomeScreenServiceClientToServerInterface 

@property (copy, nonatomic) NSNumber *largeIconLayoutEnabledValue;
@property (copy, nonatomic) NSNumber *addsNewIconsToHomeScreenValue;
@property (copy, nonatomic) NSNumber *showsBadgesInAppLibraryValue;
@property (copy, nonatomic) NSNumber *showsHomeScreenSearchAffordanceValue;
@property (readonly, copy, nonatomic) SBSHomeScreenServiceArrayOfStrings *allHomeScreenApplicationBundleIdentifiers;
@property (readonly, copy, nonatomic) SBSHomeScreenServiceArrayOfStrings *allHomeScreenApplicationPlaceholderBundleIdentifiers;
@property (readonly, copy, nonatomic) NSString *allIconLists;
@property (readonly, nonatomic) SBSDebugActiveWidgetInfo *debuggingActiveWidgetInfo;
@property (readonly, copy, nonatomic) NSNumber *homeScreenLayoutAvailability;
@property (readonly, copy, nonatomic) SBSHomeScreenServiceArrayOfNumbers *overflowSlotCounts;

/* instance methods */
- (id)folderPathToIconWithBundleIdentifier:(id)identifier;
- (void)addApplicationIconToHomeScreenWithBundleIdentifier:(id)identifier;
- (void)addWidgetToTodayViewWithBundleIdentifier:(id)identifier;
- (void)resetHomeScreenLayoutWithCompletion:(id /* block */)completion;
- (void)resetCategoriesLayoutWithCompletion:(id /* block */)completion;
- (void)unforbidApplicationBundleIdentifierFromLibrary:(id)library withCompletion:(id /* block */)completion;
- (void)forbidApplicationBundleIdentifierFromLibrary:(id)library withCompletion:(id /* block */)completion;
- (void)requestSuggestedApplicationWithBundleIdentifier:(id)identifier assertionPort:(id)port completion:(id /* block */)completion;
- (void)runFloatingDockStressTestWithCompletion:(id /* block */)completion;
- (BOOL)hasWidgetWithBundleIdentifier:(id)identifier;
- (BOOL)debugContinuityWithBadgeType:(id)type deviceTypeIdentifier:(id)identifier;
- (void)runDownloadingIconTest;
- (void)runRemoveAndRestoreIconTest;
- (void)requestAppLibraryUpdate:(id)update reason:(id)reason completion:(id /* block */)completion;
- (void)refreshAppLibrary:(id)library reason:(id)reason;
- (void)configureDeweyEachAppHasItsOwnCategory;
- (void)configureDeweyOneCategoryWithAllApps;
- (void)configureLibraryWithCategoryLimit:(id)limit;
- (id)configureCategoryMapProviderToUseCategoryMapAtURL:(id)url;
- (void)setIconListsHidden:(id)hidden;
- (void)organizeAllIconsIntoFoldersWithPageCount:(id)count;
- (void)organizeAllIconsAcrossPagesWithPageCount:(id)count;
- (void)randomizeAllIconsAcrossPagesWithPageCount:(id)count;
- (void)ignoreAllApps;
- (void)removeAllWidgets;
- (void)removeWidgetsFromHomeScreen;
- (void)changeDisplayedDateOverride:(id)override;
- (void)changeDisplayedDateOffsetOverride:(id)override;
- (void)overrideBadgeValue:(id)value forBundleIdentifier:(id)identifier;
- (void)reloadIcons;
- (void)reloadHomeScreenLayout;
- (void)resetTodayViewLayout;
- (void)clearTodayViewLayout;
- (void)presentAppLibraryCategoryPodForCategoryIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)presentAppLibraryAnimated:(id)animated completion:(id /* block */)completion;
- (void)dismissAppLibraryWithCompletion:(id /* block */)completion;
- (void)addDebugIconWithSizeClassDescription:(id)description inPage:(id)page atPositionDescription:(id)description;
- (void)setObservingInstalledWebClips:(id)clips;
- (void)insertEmptyPageAtIndex:(id)index;
- (void)addEmptyPage;
- (void)addSuggestedPageWithPageType:(id)type focusModeIdentifier:(id)identifier;
- (void)setObservingHomeScreenLayoutAvailability:(id)availability;
- (void)setObservingHomeScreenLayout:(id)layout;
- (id)badgeValueForIconWithApplicationBundleIdentifier:(id)identifier;
- (void)badgeValueForIconWithApplicationBundleIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)setObservingIconBadgeValue:(id)value;
- (void)clearAllOverflowSlotCounts;
- (void)setupHomeScreenForWidgetScrollPerformanceTest;
- (void)runWidgetDiscoverabilityTest;
- (id)silhouetteLayoutForPageAtIndex:(id)index;
@end

#endif /* SBSHomeScreenServiceClientToServerInterface_Protocol_h */
