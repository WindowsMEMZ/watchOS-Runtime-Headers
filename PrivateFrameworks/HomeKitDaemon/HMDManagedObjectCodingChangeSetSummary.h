//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDManagedObjectCodingChangeSetSummary_h
#define HMDManagedObjectCodingChangeSetSummary_h
@import Foundation;

#include "HMFObject.h"

@class NSSet, NSString;

@interface HMDManagedObjectCodingChangeSetSummary : HMFObject

@property (readonly) NSString *shortDescriptionForChangeSet;
@property (readonly) NSSet *insertedObjectNames;
@property (readonly) NSSet *modifiedObjectPropertyNames;

/* instance methods */
- (id)initWithShortDescriptionForChangeSet:(id)set insertedObjectNames:(id)names modifiedObjectPropertyNames:(id)names;
- (id)attributeDescriptions;
@end

#endif /* HMDManagedObjectCodingChangeSetSummary_h */
