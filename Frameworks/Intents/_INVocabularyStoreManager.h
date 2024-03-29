//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INVocabularyStoreManager_h
#define _INVocabularyStoreManager_h
@import Foundation;

#include "_INVocabularyValidator.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface _INVocabularyStoreManager : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  _INVocabularyValidator *_validator;
}

@property (readonly, copy, nonatomic) NSString *baseDirectoryPath;
@property (copy, nonatomic) NSString *appBundleID;
@property (copy, nonatomic) NSString *appBundlePath;

/* class methods */
+ (id)_globalClassQueue;
+ (id)_customVocabularyDirectory;
+ (id)_hashOfAppPath:(id)path;
+ (id)appDatastoreDirectoryForAppBundleID:(id)id bundlePath:(id)path;
+ (id)managerForBundleID:(id)id bundlePath:(id)path;
+ (id)_latestVocabularyStringsAt:(id)at;
+ (void)enumerateVocabularyUsingBlock:(id /* block */)block;
+ (id)savedCustomVocabularyOverviewDictionary;
+ (void)_iterateVocabularyWithSummary:(id)summary optionalBlock:(id /* block */)block;
+ (void)deleteAllUserVocabularyFromAllAppsAsync;

/* instance methods */
- (id)_documentWithItems:(id)items forIntentSlot:(id)slot;
- (id)_baseDirectoryPathForIntentSlot:(id)slot;
- (id)initWithBaseDirectory:(id)directory appBundleID:(id)id appBundlePath:(id)path;
- (id)init;
- (id)_validator;
- (id)deleteVocabularyStoreItemAt:(id)at;
- (id)deleteIntentSlot:(id)slot;
- (id)getPathToLatestVocabulary:(id *)vocabulary pathDuringReading:(id *)reading sentVocabulary:(id *)vocabulary forIntentSlot:(id)slot;
- (id)deleteEverything;
- (void)_writeLatestVocabularyItems:(id)items forIntentSlot:(id)slot completion:(id /* block */)completion;
- (void)checkIfSyncSlot:(id)slot isAllowedWithCompletion:(id /* block */)completion;
- (void)writeLatestVocabularyItems:(id)items forIntentSlot:(id)slot completion:(id /* block */)completion;
@end

#endif /* _INVocabularyStoreManager_h */
