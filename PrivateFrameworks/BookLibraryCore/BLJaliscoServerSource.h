//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BLJaliscoServerSource_h
#define BLJaliscoServerSource_h
@import Foundation;

@class NSManagedObjectModel, NSPersistentHistoryToken, NSPersistentStoreCoordinator, NSString;

@interface BLJaliscoServerSource : NSObject {
  /* instance variables */
  long long _modelSentinel;
  long long _pscSentinel;
  NSPersistentStoreCoordinator *_psc;
  NSManagedObjectModel *_model;
}

@property (retain, nonatomic) NSString *databaseContainerPath;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSPersistentHistoryToken *currentJaliscoHistoryToken;

/* class methods */
+ (void)preWarmSync;
+ (id)sharedSource;
+ (void)setSharedSource:(id)source;

/* instance methods */
- (id)initWithIdentifier:(id)identifier databaseContainerPath:(id)path;
- (id)init;
- (BOOL)workaround_18397698;
- (void)dealloc;
- (id)managedObjectModel;
- (id)p_oldPersistentStoreDirectory;
- (id)p_persistentStoreDirectory;
- (id)p_persistentStoreFullPathAtPrivateiBooksLocation;
- (id)p_persistentStoreFullPathAtSharediBooksLocation;
- (BOOL)p_databaseExistsAtPrivateiBooksContainerLocation;
- (BOOL)p_databaseExistsAtSharediBooksContainerLocation;
- (BOOL)p_createPersistentDirectoryIfNeeded;
- (id)_persistentStoreOptions;
- (BOOL)_setupCoreDataStack;
- (id)persistentStoreCoordinatorWithError:(id *)error;
- (id)persistentStoreCoordinator;
- (id)newManagedObjectContext;
- (id)newManagedObjectContextWithPrivateQueueConcurrency;
- (id)serverInfoForDSID:(id)dsid fromManagedObjectContext:(id)context error:(id *)error;
- (BOOL)truncateDatabaseError:(id *)error;
- (void)refreshStoreWithCompletion:(id /* block */)completion;
- (id)serverDatabaseForDSID:(id)dsid fromManagedObjectContext:(id)context error:(id *)error;
- (id)serverDatabaseForDSID:(id)dsid withIdentifier:(id)identifier fromManagedObjectContext:(id)context error:(id *)error;
- (id)existingEntitiesWithName:(id)name matchingPredicate:(id)predicate fromManagedObjectContext:(id)context limit:(unsigned long long)limit error:(id *)error;
- (id)existingServerInfoWithPredicate:(id)predicate fromManagedObjectContext:(id)context error:(id *)error;
- (id)existingServerDatabaseWithPredicate:(id)predicate fromManagedObjectContext:(id)context error:(id *)error;
- (id)existingServerItemWithPredicate:(id)predicate fromManagedObjectContext:(id)context error:(id *)error;
- (id)serverItemWithStoreID:(id)id inDatabaseWithIdentifier:(id)identifier forDSID:(id)dsid fromManagedObjectContext:(id)context error:(id *)error;
- (id)allItemsFetchRequestForDSIDs:(id)dsids;
- (id)itemsFetchRequestForDSIDs:(id)dsids;
- (id)_itemsFetchRequestIncludingHiddenItems:(BOOL)items dsids:(id)dsids;
- (id)predicateForItems:(BOOL)items dsids:(id)dsids;
- (id)predicateForBookletItems:(BOOL)items dsids:(id)dsids;
- (id)fetchRequestForAllCloudIDs:(id)ids dsids:(id)dsids;
- (id)fetchRequestForStoreIDs:(id)ids dsids:(id)dsids;
- (id)fetchRequestForAllStoreIDs:(id)ids dsids:(id)dsids;
- (id)fetchRequestForAllStoreIDsWithNonEmptyPurchasedToken:(id)token dsids:(id)dsids;
- (id)fetchRequestForAllStoreIDs:(id)ids;
- (id)fetchRequestForNeedsImport:(BOOL)import;
- (id)fetchRequestForAllStoreIDs:(id)ids dsids:(id)dsids isImported:(BOOL)imported;
- (id)fetchRequestForAllStoreIDs:(id)ids dsids:(id)dsids isImported:(BOOL)imported includeHidden:(BOOL)hidden;
- (id)predicateForNeedsImport:(BOOL)import;
- (id)fetchRequestForBuyParameters:(id)parameters;
- (id)fetchRequestForNotInStoreAccountIDs:(id)ids;
- (id)predicateForStoreAccountID:(id)id storeIDs:(id)ids;
- (id)fetchRequestForBookletItemsForStoreIDs:(id)ids;
- (id)fetchRequestForAllBookletsIDsWithParentStoreIDs:(id)ids;
@end

#endif /* BLJaliscoServerSource_h */
