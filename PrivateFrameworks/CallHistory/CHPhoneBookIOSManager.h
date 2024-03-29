//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1222.300.51.0.0
//
#ifndef CHPhoneBookIOSManager_h
#define CHPhoneBookIOSManager_h
@import Foundation;

@class CNContactStore;

@interface CHPhoneBookIOSManager : NSObject

@property (readonly, nonatomic) CNContactStore *contactStore;

/* instance methods */
- (id)initWithContactStore:(id)store;
- (id)fetchCNContact:(id)cncontact countryCode:(id)code isEmail:(BOOL)email;
- (id)getRecordId:(id)id countryCode:(id)code isEmail:(BOOL)email;
- (id)fetchFullCNContactForContactIdentifier:(id)identifier isEmail:(BOOL)email;
- (id)fetchCNContactsMatchingPredicate:(id)predicate keysToKetch:(id)ketch error:(id *)error;
- (id)getPersonsNameForContact:(id)contact;
- (id)getLocalizedCallerIdLabelForContact:(id)contact forCallerId:(id)id withCallerIdIsEmail:(BOOL)email;
@end

#endif /* CHPhoneBookIOSManager_h */
