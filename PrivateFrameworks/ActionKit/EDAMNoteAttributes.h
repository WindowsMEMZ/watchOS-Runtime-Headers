//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef EDAMNoteAttributes_h
#define EDAMNoteAttributes_h
@import Foundation;

#include "FATObject.h"
#include "EDAMLazyMap.h"

@class NSDictionary, NSNumber, NSString;

@interface EDAMNoteAttributes : FATObject

@property (retain, nonatomic) NSNumber *subjectDate;
@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *longitude;
@property (retain, nonatomic) NSNumber *altitude;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) NSString *sourceURL;
@property (retain, nonatomic) NSString *sourceApplication;
@property (retain, nonatomic) NSNumber *shareDate;
@property (retain, nonatomic) NSNumber *reminderOrder;
@property (retain, nonatomic) NSNumber *reminderDoneTime;
@property (retain, nonatomic) NSNumber *reminderTime;
@property (retain, nonatomic) NSString *placeName;
@property (retain, nonatomic) NSString *contentClass;
@property (retain, nonatomic) EDAMLazyMap *applicationData;
@property (retain, nonatomic) NSString *lastEditedBy;
@property (retain, nonatomic) NSDictionary *classifications;
@property (retain, nonatomic) NSNumber *creatorId;
@property (retain, nonatomic) NSNumber *lastEditorId;
@property (retain, nonatomic) NSNumber *sharedWithBusiness;
@property (retain, nonatomic) NSString *conflictSourceNoteGuid;
@property (retain, nonatomic) NSNumber *noteTitleQuality;

/* class methods */
+ (id)structName;
+ (id)structFields;

/* instance methods */
@end

#endif /* EDAMNoteAttributes_h */
