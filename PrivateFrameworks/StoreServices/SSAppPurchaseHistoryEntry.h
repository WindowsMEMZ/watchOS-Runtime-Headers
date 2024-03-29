//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSAppPurchaseHistoryEntry_h
#define SSAppPurchaseHistoryEntry_h
@import Foundation;

#include "SSSQLiteEntity.h"

@interface SSAppPurchaseHistoryEntry : SSSQLiteEntity
/* class methods */
+ (id)databaseTable;
+ (id)disambiguatedSQLForProperty:(id)property;
+ (id)supportsPlatformPredicate:(BOOL)predicate;
+ (id)predicateForAccountIdentifier:(id)identifier;
+ (id)predicateForNotFirstParty;
+ (id)predicateForNotHidden;
+ (id)predicateForHasMessagesExtension;
+ (id)predicateForIs32BitOnly:(BOOL)only;
@end

#endif /* SSAppPurchaseHistoryEntry_h */
