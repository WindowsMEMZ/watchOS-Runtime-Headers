//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PFCloudKitImportZoneContext_h
#define PFCloudKitImportZoneContext_h
@import Foundation;

#include "NSCloudKitMirroringDelegateOptions.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSURL;

@interface PFCloudKitImportZoneContext : NSObject {
  /* instance variables */
  NSArray *_updatedRecords;
  NSDictionary *_deletedRecordTypeToRecordID;
  NSSet *_deletedObjectIDs;
  NSArray *_modifiedRecords;
  NSMutableArray *_updatedRelationships;
  NSArray *_deletedRelationships;
  NSArray *_deletedMirroredRelationshipRecordIDs;
  NSMutableDictionary *_recordTypeToRecordIDToObjectID;
  NSMutableDictionary *_recordTypeToUnresolvedRecordIDs;
  NSMutableArray *_metadatasToLink;
  NSArray *_importOperations;
  NSCloudKitMirroringDelegateOptions *_mirroringOptions;
  NSURL *_fileBackedFuturesDirectory;
  NSSet *_deletedShareRecordIDs;
}

/* instance methods */
- (id)initWithUpdatedRecords:(id)records deletedRecordTypeToRecordIDs:(id)ids options:(id)options fileBackedFuturesDirectory:(id)directory;
- (void)dealloc;
@end

#endif /* PFCloudKitImportZoneContext_h */
