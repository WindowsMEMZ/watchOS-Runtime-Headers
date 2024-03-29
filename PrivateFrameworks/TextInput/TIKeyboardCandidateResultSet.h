//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIKeyboardCandidateResultSet_h
#define TIKeyboardCandidateResultSet_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TIKeyboardCandidate.h"
#include "TIKeyboardIntermediateText.h"

@class NSArray, NSDictionary, NSString;

@interface TIKeyboardCandidateResultSet : NSObject<NSCopying, NSSecureCoding>

@property (retain, nonatomic) NSArray *initiallyHiddenCandidates;
@property (nonatomic) unsigned long long selectedHiddenCandidateIndex;
@property (retain, nonatomic) NSArray *candidates;
@property (nonatomic) unsigned long long initialSelectedIndex;
@property (copy, nonatomic) TIKeyboardCandidate *defaultCandidate;
@property (retain, nonatomic) NSArray *sortMethods;
@property (retain, nonatomic) NSDictionary *sortMethodGroups;
@property (retain, nonatomic) NSDictionary *indexTitles;
@property (retain, nonatomic) NSDictionary *showExtensionCandidates;
@property (retain, nonatomic) NSArray *disambiguationCandidates;
@property (nonatomic) unsigned long long selectedDisambiguationCandidateIndex;
@property (readonly, nonatomic) BOOL hasCandidates;
@property (readonly, nonatomic) BOOL hasOnlyProactiveCandidates;
@property (readonly, nonatomic) NSArray *proactiveTriggers;
@property (readonly, nonatomic) TIKeyboardCandidate *firstCandidate;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (nonatomic) BOOL excludedExtensionCandidates;
@property (nonatomic) unsigned long long generatedCandidateCount;
@property (nonatomic) unsigned long long batchCandidateLocation;
@property (readonly, nonatomic) BOOL isDummySet;
@property (retain, nonatomic) NSString *committedText;
@property (retain, nonatomic) TIKeyboardIntermediateText *uncommittedText;
@property (retain, nonatomic) TIKeyboardCandidate *acceptedCandidate;
@property (nonatomic) BOOL inputManagerHasPendingCandidatesUpdate;
@property (readonly, nonatomic) BOOL hasSupplementalCandidates;
@property (readonly, nonatomic) NSArray *candidatesIfSupplemental;

/* class methods */
+ (id)setWithCandidates:(id)candidates initialSelectedIndex:(unsigned long long)index defaultCandidate:(id)candidate sortMethods:(id)methods sortMethodGroups:(id)groups indexTitles:(id)titles showExtensionCandidates:(id)candidates initiallyHiddenCandidates:(id)candidates selectedHiddenCandidateIndex:(unsigned long long)index;
+ (id)setWithCandidates:(id)candidates initialSelectedIndex:(unsigned long long)index defaultCandidate:(id)candidate sortMethods:(id)methods sortMethodGroups:(id)groups indexTitles:(id)titles showExtensionCandidates:(id)candidates initiallyHiddenCandidates:(id)candidates selectedHiddenCandidateIndex:(unsigned long long)index proactiveTriggers:(id)triggers;
+ (BOOL)supportsSecureCoding;
+ (id)setWithCandidates:(id)candidates;
+ (id)setWithCandidates:(id)candidates proactiveTriggers:(id)triggers;
+ (id)setWithCandidates:(id)candidates initialSelectedIndex:(unsigned long long)index defaultCandidate:(id)candidate sortMethods:(id)methods sortMethodGroups:(id)groups indexTitles:(id)titles showExtensionCandidates:(id)candidates disambiguationCandidates:(id)candidates selectedDisambiguationCandidateIndex:(unsigned long long)index;
+ (id)setWithCandidates:(id)candidates initialSelectedIndex:(unsigned long long)index defaultCandidate:(id)candidate sortMethods:(id)methods sortMethodGroups:(id)groups indexTitles:(id)titles showExtensionCandidates:(id)candidates disambiguationCandidates:(id)candidates selectedDisambiguationCandidateIndex:(unsigned long long)index proactiveTriggers:(id)triggers;
+ (id)dummySet;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)positionInCandidateList:(id)list;
- (BOOL)isEqual:(id)equal;
- (id)initWithCandidates:(id)candidates initialSelectedIndex:(unsigned long long)index defaultCandidate:(id)candidate sortMethods:(id)methods sortMethodGroups:(id)groups indexTitles:(id)titles showExtensionCandidates:(id)candidates disambiguationCandidates:(id)candidates selectedDisambiguationCandidateIndex:(unsigned long long)index proactiveTriggers:(id)triggers;
- (id)setByAppendingSet:(id)set;
- (BOOL)isSubsetOf:(id)of;
@end

#endif /* TIKeyboardCandidateResultSet_h */
