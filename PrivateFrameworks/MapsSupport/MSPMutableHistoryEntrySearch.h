//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MSPMutableHistoryEntrySearch_h
#define MSPMutableHistoryEntrySearch_h
@import Foundation;

#include "MSPMutableHistoryEntry.h"
#include "MSPHistoryEntrySearch-Protocol.h"

@class GEOMapRegion, NSDate, NSString;

@interface MSPMutableHistoryEntrySearch : MSPMutableHistoryEntry<MSPHistoryEntrySearch>

@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *locationDisplayString;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, copy, nonatomic) NSDate *usageDate;
@property (readonly, nonatomic) BOOL tracksRAPReportingOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;

/* instance methods */
- (id)initWithStorage:(id)storage;
- (id)transferToImmutableIfValidWithError:(out id *)error;
- (BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)object;
@end

#endif /* MSPMutableHistoryEntrySearch_h */
