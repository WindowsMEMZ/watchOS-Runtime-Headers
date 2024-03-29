//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1232.2.3.0.0
//
#ifndef CalMigrationAccountStore_Protocol_h
#define CalMigrationAccountStore_Protocol_h
@import Foundation;

@protocol CalMigrationAccountStore <CalMigrationReadOnlyAccountStore>
/* instance methods */
- (id)accountWithIdentifier:(id)identifier;
- (id)topLevelAccountsWithAccountTypeIdentifier:(id)identifier error:(id *)error;
- (id)childAccountsForAccount:(id)account withTypeIdentifier:(id)identifier;
- (id)createAccountWithAccountTypeIdentifier:(id)identifier error:(id *)error;
- (id)createChildAccountOfParent:(id)parent withAccountTypeIdentifier:(id)identifier error:(id *)error;
- (BOOL)removeAccount:(id)account error:(id *)error;
- (BOOL)saveAccount:(id)account withError:(id *)error;
@end

#endif /* CalMigrationAccountStore_Protocol_h */
