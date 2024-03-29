//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 752.2.0.0.0
//
#ifndef ASDatabaseCompetitionJournalEntry_h
#define ASDatabaseCompetitionJournalEntry_h
@import Foundation;

#include "HDJournalEntry.h"

@class ASCodableDatabaseCompetition;

@interface ASDatabaseCompetitionJournalEntry : HDJournalEntry

@property (readonly, nonatomic) ASCodableDatabaseCompetition *databaseCompetition;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)entries withProfile:(id)profile;

/* instance methods */
- (id)initWithDatabaseCompetition:(id)competition;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* ASDatabaseCompetitionJournalEntry_h */
