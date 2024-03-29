//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNContactStore_h
#define CNContactStore_h
@import Foundation;

#include "CNContainerCache.h"
#include "CNiOSAddressBook.h"
#include "CNiOSAddressBookDataMapper.h"

@class CNResult, NSData;

@interface CNContactStore : NSObject {
  /* instance variables */
  CNContainerCache *_containerCache;
}

@property (readonly, nonatomic) CNiOSAddressBookDataMapper *iOSMapper;
@property (readonly, nonatomic) CNiOSAddressBook *addressBook;
@property (readonly) BOOL supportsMatchingDictionaries;
@property (readonly, copy, nonatomic) CNResult *currentHistoryAnchor;
@property (readonly, copy, nonatomic) NSData *currentHistoryToken;

/* class methods */
+ (BOOL)isXPCDataMapperStore:(id)store;
+ (id)_contactStoreForPublicAddressBook:(void *)book;
+ (id)contactStoreForPublicAddressBook:(void *)book;
+ (BOOL)eraseAllDataAtLocationWithName:(id)name error:(id *)error;
+ (BOOL)eraseAllDataAtURL:(id)url error:(id *)error;
+ (id)storeForFamilyMember:(id)member;
+ (id)storeWithDelegateInfo:(id)info;
+ (void)initialize;
+ (id)storeWithOptions:(unsigned long long)options;
+ (id)storeWithEnvironment:(id)environment options:(unsigned long long)options;
+ (id)storeIdentifier;
+ (Class)storeClassWithIdentifier:(id)identifier;
+ (id)storeInfoClasses;
+ (id)contactIdentifierFromInternalIdentifier:(id)identifier;
+ (id)storeIdentifierFromContactIdentifier:(id)identifier;
+ (id)internalIdentifierFromContactIdentifier:(id)identifier;
+ (BOOL)isSharedNamePhotoEnabled;
+ (long long)authorizationStatusForEntityType:(long long)type;
+ (id)standardLabelsForPropertyWithKey:(id)key;
+ (id)standardLabelsForPropertyWithKey:(id)key options:(unsigned long long)options;
+ (BOOL)isAccessRestrictedForEntityType:(long long)type;
+ (long long)authorizationStatusForEntityType:(long long)type assumedIdentity:(id)identity;

/* instance methods */
- (id)originForSuggestion:(id)suggestion error:(id *)error;
- (id)_contactFromPublicABPerson:(void *)abperson keysToFetch:(id)fetch;
- (void *)_publicABPersonFromContact:(id)contact publicAddressBook:(const void * *)book;
- (int)_publicMultiValueIdentifierFromLabeledValue:(id)value;
- (id)_labeledValueFromPublicMultiValueIdentifier:(int)identifier contact:(id)contact key:(id)key;
- (id)_fetchRequestInfosForEmailOrPhoneForContact:(id)contact;
- (id)_executeFetchRequestsWithInfos:(id)infos unifyResults:(BOOL)results keysToFetch:(id)fetch error:(id *)error;
- (id)contactsMatchingPropertiesOfContact:(id)contact unifyResults:(BOOL)results keysToFetch:(id)fetch error:(id *)error;
- (id)contactFromPublicABPerson:(void *)abperson keysToFetch:(id)fetch;
- (void *)publicABPersonFromContact:(id)contact publicAddressBook:(const void * *)book;
- (int)publicMultiValueIdentifierFromLabeledValue:(id)value;
- (id)labeledValueFromPublicMultiValueIdentifier:(int)identifier contact:(id)contact key:(id)key;
- (id)contactFromPublicPersonID:(int)id keysToFetch:(id)fetch;
- (id)contactIdentifierFromPublicPersonID:(int)id;
- (id)contactFromPerson:(void *)person;
- (id)contactFromPerson:(void *)person mutable:(BOOL)mutable;
- (id)contactFromPersonID:(int)id;
- (id)contactFromPerson:(void *)person keysToFetch:(id)fetch;
- (id)contactFromPerson:(void *)person keysToFetch:(id)fetch mutable:(BOOL)mutable;
- (id)_contactFromPersonID:(int)id keysToFetch:(id)fetch;
- (id)contactFromPersonID:(int)id keysToFetch:(id)fetch;
- (id)contactIdentifierFromPersonID:(int)id;
- (void *)personFromContact:(id)contact;
- (int)multiValueIdentifierFromLabeledValue:(id)value;
- (id)labeledValueFromMultiValueIdentifier:(int)identifier contact:(id)contact key:(id)key;
- (BOOL)setDefaultContainer:(id)container forAccount:(id)account error:(id *)error;
- (id)init;
- (id)initWithEnvironment:(id)environment;
- (id)initWithEnvironment:(id)environment options:(unsigned long long)options;
- (id)initWithEnvironment:(id)environment options:(unsigned long long)options managedConfiguration:(id)configuration;
- (id)initWithConfiguration:(id)configuration;
- (void)requestAccessForEntityType:(long long)type completionHandler:(id /* block */)handler;
- (id)requestAccessForEntityType:(long long)type;
- (id)unifiedContactWithIdentifier:(id)identifier keysToFetch:(id)fetch error:(id *)error;
- (id)meContactIdentifiers:(id *)identifiers;
- (id)_ios_meContactIdentifierWithError:(id *)error;
- (id)unifiedMeContactWithKeysToFetch:(id)fetch error:(id *)error;
- (id)_ios_meContactWithKeysToFetch:(id)fetch error:(id *)error;
- (id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)fetch error:(id *)error;
- (id)unifiedMeContactMatchingEmailAddresses:(id)addresses keysToFetch:(id)fetch error:(id *)error;
- (id)unifiedMeContactMatchingEmailAddress:(id)address keysToFetch:(id)fetch error:(id *)error;
- (BOOL)setMeContact:(id)contact error:(id *)error;
- (BOOL)setMeContact:(id)contact forContainer:(id)container error:(id *)error;
- (BOOL)setBestMeIfNeededForGivenName:(id)name familyName:(id)name email:(id)email error:(id *)error;
- (id)unifiedContactsMatchingPredicate:(id)predicate keysToFetch:(id)fetch error:(id *)error;
- (BOOL)enumerateContactsWithFetchRequest:(id)request error:(id *)error usingBlock:(id /* block */)block;
- (BOOL)enumerateNonUnifiedContactsWithFetchRequest:(id)request error:(id *)error usingBlock:(id /* block */)block;
- (BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)request error:(id *)error usingBlock:(id /* block */)block;
- (id)groupsMatchingPredicate:(id)predicate error:(id *)error;
- (id)groupWithIdentifier:(id)identifier error:(id *)error;
- (id)membersOfGroupWithIdentifier:(id)identifier keysToFetch:(id)fetch error:(id *)error;
- (id)subgroupsOfGroupWithIdentifier:(id)identifier error:(id *)error;
- (id)containersMatchingPredicate:(id)predicate error:(id *)error;
- (id)serverSearchContainersMatchingPredicate:(id)predicate error:(id *)error;
- (id)accountsMatchingPredicate:(id)predicate error:(id *)error;
- (BOOL)executeSaveRequest:(id)request response:(id *)response authorizationContext:(id)context error:(id *)error;
- (BOOL)executeSaveRequest:(id)request error:(id *)error;
- (BOOL)supportsSaveRequest:(id)request;
- (id)defaultContainerIdentifier;
- (BOOL)hasMultipleGroupsOrAccounts;
- (BOOL)hasGroups;
- (id)executeFetchRequest:(id)request error:(id *)error;
- (id)countForFetchRequest:(id)request error:(id *)error;
- (id)enumeratorForContactFetchRequest:(id)request error:(id *)error;
- (id)enumeratorForChangeHistoryFetchRequest:(id)request error:(id *)error;
- (id)executeFetchRequest:(id)request completion:(id /* block */)completion;
- (id)executeFetchRequest:(id)request progressiveResults:(id /* block */)results completion:(id /* block */)completion;
- (id)identifierWithError:(id *)error;
- (int)saveSequenceCount;
- (id)unifiedContactCountWithError:(id *)error;
- (id)contactCountForFetchRequest:(id)request error:(id *)error;
- (BOOL)moveContacts:(id)contacts fromContainer:(id)container toContainer:(id)container error:(id *)error;
- (id)policyForContainerWithIdentifier:(id)identifier error:(id *)error;
- (id)policyWithDescription:(id)description error:(id *)error;
- (id)usedLabelsForPropertyWithKey:(id)key error:(id *)error;
- (id)mainContactStore;
- (BOOL)resetSortDataIfNeededWithError:(id *)error;
- (BOOL)setDefaultAccountIdentifier:(id)identifier error:(id *)error;
- (id)sectionListOffsetsForSortOrder:(long long)order error:(id *)error;
- (id)descriptorForRequiredKeysForUserActivityUserInfo;
- (id)contactWithUserActivityUserInfo:(id)info keysToFetch:(id)fetch;
- (id)userActivityUserInfoForContact:(id)contact;
- (id)descriptorForRequiredKeysForMatchingDictionary;
- (id)matchingDictionaryForContact:(id)contact;
- (id)contactWithMatchingDictionary:(id)dictionary keysToFetch:(id)fetch;
- (id)contactIdentifierWithMatchingDictionary:(id)dictionary;
- (id)individualContactCountWithError:(id *)error;
- (BOOL)registerChangeHistoryClientIdentifier:(id)identifier error:(id *)error;
- (BOOL)registerChangeHistoryClientIdentifier:(id)identifier forContainerIdentifier:(id)identifier error:(id *)error;
- (BOOL)unregisterChangeHistoryClientIdentifier:(id)identifier error:(id *)error;
- (BOOL)unregisterChangeHistoryClientIdentifier:(id)identifier forContainerIdentifier:(id)identifier error:(id *)error;
- (id)changeHistoryWithFetchRequest:(id)request error:(id *)error;
- (BOOL)clearChangeHistoryForClientIdentifier:(id)identifier toChangeAnchor:(id)anchor error:(id *)error;
- (BOOL)executeChangeHistoryClearRequest:(id)request error:(id *)error;
- (id)latestConsumedChangeHistoryAnchorForClientIdentifier:(id)identifier error:(id *)error;
- (BOOL)verifyChangeHistoryForClientIdentifier:(id)identifier error:(id *)error;
- (void)requestAuthorization:(long long)authorization entityType:(long long)type completionHandler:(id /* block */)handler;
- (id)authorizedKeysForContactKeys:(id)keys;
- (BOOL)hasAccountFirstSyncCompleted;
- (id)requestExtensionCommand:(id)command error:(id *)error;
@end

#endif /* CNContactStore_h */
