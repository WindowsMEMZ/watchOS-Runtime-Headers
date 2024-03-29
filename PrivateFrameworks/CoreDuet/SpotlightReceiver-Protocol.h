//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef SpotlightReceiver_Protocol_h
#define SpotlightReceiver_Protocol_h
@import Foundation;

@protocol SpotlightReceiver <NSObject>
@optional
/* instance methods */
- (id)supportedContentTypes;
- (id)supportedBundleIDs;
- (void)addOrUpdateSearchableItems:(id)items bundleID:(id)id;
- (void)deleteSearchableItemsWithIdentifiers:(id)identifiers bundleID:(id)id;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)identifiers bundleID:(id)id;
- (void)deleteAllSearchableItemsWithBundleID:(id)id;
- (void)deleteSearchableItemsSinceDate:(id)date bundleID:(id)id;
- (void)purgeSearchableItemsWithIdentifiers:(id)identifiers bundleID:(id)id;
- (void)addUserAction:(id)action withItem:(id)item;
- (void)deleteAllUserActivities:(id)activities;
- (void)deleteUserActivitiesWithPersistentIdentifiers:(id)identifiers bundleID:(id)id;
- (id)supportedINIntentClassNames;
- (void)addInteractions:(id)interactions bundleID:(id)id protectionClass:(id)class;
- (void)deleteInteractionsWithIdentifiers:(id)identifiers bundleID:(id)id protectionClass:(id)class;
- (void)deleteInteractionsWithGroupIdentifiers:(id)identifiers bundleID:(id)id protectionClass:(id)class;
- (void)deleteAllInteractionsWithBundleID:(id)id protectionClass:(id)class;
- (void)donateRelevantShortcuts:(id)shortcuts bundleID:(id)id;
- (void)donateRelevantActions:(id)actions bundleID:(id)id;
@end

#endif /* SpotlightReceiver_Protocol_h */
