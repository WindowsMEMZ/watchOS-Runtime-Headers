//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 811.0.0.0.0
//
#ifndef NNMKMailboxSelection_h
#define NNMKMailboxSelection_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSMutableDictionary, NSSet;

@interface NNMKMailboxSelection : NSObject<NSSecureCoding, NSCopying>

@property (retain, nonatomic) NSArray *mailboxesWithAllMessagesSyncEnabled;
@property (nonatomic) unsigned long long aggregatedMailboxesFilterTypes;
@property (retain, nonatomic) NSArray *aggregatedMailboxes;
@property (retain, nonatomic) NSSet *mailboxesWithAllMessagesSyncEnabledIds;
@property (retain, nonatomic) NSSet *aggregatedMailboxesId;
@property (retain, nonatomic) NSArray *allMailboxesSyncEnabled;
@property (retain, nonatomic) NSMutableDictionary *allMailboxesSyncEnabledById;

/* class methods */
+ (id)nameForMailboxFilterType:(unsigned long long)type;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)firstFilterTypeFromTypes:(unsigned long long)types;
+ (id)mailboxChangesApplyingSelection:(id)selection previousSelection:(id)selection;

/* instance methods */
- (id)defaultMailboxFilter;
- (id)nameForMailboxFilter:(id)filter;
- (id)initWithAccounts:(id)accounts;
- (id)initWithMailboxes:(id)mailboxes;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (BOOL)hasSelection;
- (void)_setupWithMailboxes:(id)mailboxes;
- (void)_setupWithAccounts:(id)accounts;
- (BOOL)hasSingleMailboxSelectionOnly;
- (BOOL)hasAggregateMailboxesForAllMessagesOnly;
- (BOOL)containsMailboxFilter:(id)filter;
- (id)mailboxWithId:(id)id;
- (BOOL)isMailboxFilterEnabled:(unsigned long long)enabled;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* NNMKMailboxSelection_h */
