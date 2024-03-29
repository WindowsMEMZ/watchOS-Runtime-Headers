//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCachedSecureCKRecordJournalEntry_h
#define HDCachedSecureCKRecordJournalEntry_h
@import Foundation;

#include "HDJournalEntry.h"

@class NSData;

@interface HDCachedSecureCKRecordJournalEntry : HDJournalEntry

@property (nonatomic) long long recordID;
@property (retain, nonatomic) NSData *recordData;

/* class methods */
+ (void)applyEntries:(id)entries withProfile:(id)profile;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HDCachedSecureCKRecordJournalEntry_h */
