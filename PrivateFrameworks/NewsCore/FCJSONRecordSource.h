//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCJSONRecordSource_h
#define FCJSONRecordSource_h
@import Foundation;

#include "FCRecordSource.h"
#include "FCJSONRecordSourceSchema.h"
#include "FCJSONRecordSourceType-Protocol.h"

@class NSISO8601DateFormatter;

@interface FCJSONRecordSource : FCRecordSource<FCJSONRecordSourceType>

@property (copy, nonatomic) FCJSONRecordSourceSchema *schema;
@property (copy, nonatomic) NSISO8601DateFormatter *dateFormatter;

/* instance methods */
- (id)initWithSchema:(id)schema contentDatabase:(id)database contentDirectory:(id)directory experimentationSuffix:(id)suffix activeTreatmentID:(id)id;
- (void)fetchRecordsWithIDs:(id)ids cachePolicy:(id)policy completion:(id /* block */)completion;
- (void)fetchRecordsWithIDs:(id)ids completion:(id /* block */)completion;
- (id)recordType;
- (int)pbRecordType;
- (id)nonLocalizableKeys;
- (id)localizableKeys;
- (id)alwaysLocalizedKeys;
- (id)storeFilename;
- (unsigned long long)storeVersion;
- (unsigned long long)lowThresholdDataSizeLimit;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)recordIDPrefixes;
- (id)keyValueRepresentationOfRecord:(id)record;
- (id)recordFromCKRecord:(id)ckrecord base:(id)base;
@end

#endif /* FCJSONRecordSource_h */
