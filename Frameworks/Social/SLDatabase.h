//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 756.0.0.0.0
//
#ifndef SLDatabase_h
#define SLDatabase_h
@import Foundation;

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString;

@interface SLDatabase : NSObject {
  /* instance variables */
  NSString *_modelPath;
  NSString *_storePath;
  NSPersistentStoreCoordinator *_persistentStoreCoordinator;
  NSManagedObjectContext *_managedObjectContext;
  NSManagedObjectModel *_managedObjectModel;
}

/* instance methods */
- (id)initWithStoreName:(id)name modelPath:(id)path;
- (id)fetchObjectsForEntityNamed:(id)named withPredicate:(id)predicate;
- (id)newObjectForEntityNamed:(id)named;
- (BOOL)save:(id *)save;
- (void)_setUpManagedObjectContext;
- (id)_persistentStoreCoordinator;
- (id)_managedObjectModel;
- (void)_removeFilesAtURL:(id)url forStoreCoordinator:(id)coordinator;
@end

#endif /* SLDatabase_h */
