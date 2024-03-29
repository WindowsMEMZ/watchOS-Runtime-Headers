//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 75.3.6.0.1
//
#ifndef GDPerson_h
#define GDPerson_h
@import Foundation;

#include "GDEntity-Protocol.h"
#include "GDEntityIdentifier.h"
#include "GDPersonNameComponents.h"
#include "GDTripleIteratorEntityRenderer-Protocol.h"

@class NSArray, NSDateComponents;

@interface GDPerson : NSObject<GDTripleIteratorEntityRenderer, GDEntity>

@property (readonly, nonatomic) NSArray *names;
@property (readonly, nonatomic) GDPersonNameComponents *nameComponents;
@property (readonly, nonatomic) NSArray *postalAddressLinks;
@property (readonly, nonatomic) NSArray *softwareLinks;
@property (readonly, nonatomic) NSArray *relatedPeople;
@property (readonly, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) NSArray *emails;
@property (readonly, nonatomic) NSDateComponents *dateOfBirth;
@property (readonly, nonatomic) NSDateComponents *nonGregorianDateOfBirth;
@property (readonly, nonatomic) NSDateComponents *anniversary;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL isFavorite;
@property (readonly, nonatomic) NSArray *contactIdentifiers;
@property (readonly, nonatomic) NSArray *customIdentifiers;
@property (readonly, nonatomic) NSArray *visualIdentifiers;
@property (readonly, nonatomic) NSArray *visualIdentifierObjects;
@property (readonly, nonatomic) GDEntityIdentifier *entityIdentifier;

/* class methods */
+ (unsigned long long)triplesColumnsRequiredForRendering;

/* instance methods */
- (id)initWithTriplesIterator:(id)iterator;
- (id)dateComponentsFromJSONString:(id)jsonstring;
- (id)description;
@end

#endif /* GDPerson_h */
