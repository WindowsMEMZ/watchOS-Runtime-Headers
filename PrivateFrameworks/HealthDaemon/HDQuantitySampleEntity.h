//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDQuantitySampleEntity_h
#define HDQuantitySampleEntity_h
@import Foundation;

#include "HDSampleEntity.h"

@interface HDQuantitySampleEntity : HDSampleEntity
/* class methods */
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)count;
+ (id)foreignKeys;
+ (id)orderingTermForSortDescriptor:(id)descriptor;
+ (id)insertDataObject:(id)object withProvenance:(id)provenance inDatabase:(id)database persistentID:(id)id error:(id *)error;
+ (id)joinClausesForProperty:(id)property;
+ (id)codableObjectsFromObjectCollection:(id)collection;
+ (BOOL)addCodableObject:(id)object toCollection:(id)collection;
+ (id)entityEncoderForProfile:(id)profile transaction:(id)transaction purpose:(long long)purpose encodingOptions:(id)options authorizationFilter:(id /* block */)filter;
+ (long long)compareForReplacmentWithObject:(id)object existingObject:(id)object;
+ (BOOL)validateEntityWithProfile:(id)profile error:(id *)error validationErrorHandler:(id /* block */)handler;
@end

#endif /* HDQuantitySampleEntity_h */
