//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMBlockListPerson_h
#define IMBlockListPerson_h
@import Foundation;

@class CNContact, NSString;

@interface IMBlockListPerson : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *cachedFullName;
@property (retain, nonatomic) NSString *cachedCompanyName;
@property (readonly, nonatomic) CNContact *cnPerson;
@property (readonly, nonatomic) NSString *fullName;

/* class methods */
+ (id)personWithCNContact:(id)cncontact;

/* instance methods */
- (id)init;
- (id)initWithCNContact:(id)cncontact;
- (BOOL)isEqualToPerson:(id)person;
- (id)companyName;
- (id)sanitizeString:(id)string;
- (BOOL)isInAddressBook;
@end

#endif /* IMBlockListPerson_h */
