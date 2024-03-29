//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CESRUserData_h
#define CESRUserData_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDictionary, NSMutableSet, NSString;

@interface CESRUserData : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSArray *firstPartyContactWordsWithFrequency;
@property (copy, nonatomic) NSDictionary *vocabularyWords;
@property (copy, nonatomic) NSMutableSet *radioWords;
@property (copy, nonatomic) NSArray *appNames;
@property (copy, nonatomic) NSDictionary *interactionSenderDisplayNames;
@property (copy, nonatomic) NSDictionary *searchEventValues;
@property (copy, nonatomic) NSArray *locationOfInterestNames;
@property (copy, nonatomic) NSArray *spatialLocationOfInterestNames;
@property (copy, nonatomic) NSArray *eventTitles;
@property (copy, nonatomic) NSArray *eventLocationNames;
@property (copy, nonatomic) NSDictionary *keyboardLMDynamicVocabularyItems;
@property (copy, nonatomic) NSArray *pexNamedEntityNames;
@property (copy, nonatomic) NSArray *corrections;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSArray *groupNameWordsWithFrequency;
@property (readonly, copy, nonatomic) NSArray *thirdPartyContactWordsWithFrequency;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)_vocabularyWordCategories;

/* instance methods */
- (id)_initWithLanguage:(id)language;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)debugDescription;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithItems:(id)items language:(id)language;
- (void)populateUserDataFromItems:(id)items;
- (void)_handleContacts:(id)contacts;
- (id)_handleVocabularyWords:(id)words template:(id)template;
@end

#endif /* CESRUserData_h */
