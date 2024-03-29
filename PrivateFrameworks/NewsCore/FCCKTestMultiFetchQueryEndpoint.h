//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCCKTestMultiFetchQueryEndpoint_h
#define FCCKTestMultiFetchQueryEndpoint_h
@import Foundation;

#include "FCCKTestQueryEndpoint-Protocol.h"

@class NSString;

@interface FCCKTestMultiFetchQueryEndpoint : NSObject<FCCKTestQueryEndpoint>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)handleQueryOperation:(id)operation withRecords:(id)records droppedFeeds:(id)feeds;
- (id)_collectRecordsWithRecords:(id)records recordIDs:(id)ids linkKeysByRecordType:(id)type visitedRecordIDs:(id)ids missingRecordIDs:(id)ids;
- (id)_collectRecordIDsFromRecords:(id)records linkKeysByRecordType:(id)type;
@end

#endif /* FCCKTestMultiFetchQueryEndpoint_h */
