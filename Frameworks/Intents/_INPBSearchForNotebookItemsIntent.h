//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBSearchForNotebookItemsIntent_h
#define _INPBSearchForNotebookItemsIntent_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBDataString.h"
#include "_INPBDateTimeRange.h"
#include "_INPBIntentMetadata.h"
#include "_INPBLocation.h"
#include "_INPBSearchForNotebookItemsIntent-Protocol.h"

@class NSString;

@interface _INPBSearchForNotebookItemsIntent : PBCodable<_INPBSearchForNotebookItemsIntent, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 dateSearchType; unsigned int x :1 includeAllNoteContents; unsigned int x :1 itemType; unsigned int x :1 locationSearchType; unsigned int x :1 status; unsigned int x :1 taskPriority; } _has;
}

@property (copy, nonatomic) NSString *content;
@property (readonly, nonatomic) BOOL hasContent;
@property (nonatomic) int dateSearchType;
@property (nonatomic) BOOL hasDateSearchType;
@property (retain, nonatomic) _INPBDateTimeRange *dateTime;
@property (readonly, nonatomic) BOOL hasDateTime;
@property (retain, nonatomic) _INPBDataString *groupName;
@property (readonly, nonatomic) BOOL hasGroupName;
@property (nonatomic) BOOL includeAllNoteContents;
@property (nonatomic) BOOL hasIncludeAllNoteContents;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) int itemType;
@property (nonatomic) BOOL hasItemType;
@property (retain, nonatomic) _INPBLocation *location;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) int locationSearchType;
@property (nonatomic) BOOL hasLocationSearchType;
@property (copy, nonatomic) NSString *notebookItemIdentifier;
@property (readonly, nonatomic) BOOL hasNotebookItemIdentifier;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int taskPriority;
@property (nonatomic) BOOL hasTaskPriority;
@property (readonly, nonatomic) int * temporalEventTriggerTypes;
@property (readonly, nonatomic) unsigned long long temporalEventTriggerTypesCount;
@property (retain, nonatomic) _INPBDataString *title;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)dateSearchTypeAsString:(int)string;
- (int)StringAsDateSearchType:(id)type;
- (id)itemTypeAsString:(int)string;
- (int)StringAsItemType:(id)type;
- (id)locationSearchTypeAsString:(int)string;
- (int)StringAsLocationSearchType:(id)type;
- (id)statusAsString:(int)string;
- (int)StringAsStatus:(id)status;
- (id)taskPriorityAsString:(int)string;
- (int)StringAsTaskPriority:(id)priority;
- (void)setTemporalEventTriggerTypes:(int *)types count:(unsigned long long)count;
- (void)clearTemporalEventTriggerTypes;
- (void)addTemporalEventTriggerType:(int)type;
- (int)temporalEventTriggerTypeAtIndex:(unsigned long long)index;
- (id)temporalEventTriggerTypesAsString:(int)string;
- (int)StringAsTemporalEventTriggerTypes:(id)types;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)dictionaryRepresentation;
@end

#endif /* _INPBSearchForNotebookItemsIntent_h */
