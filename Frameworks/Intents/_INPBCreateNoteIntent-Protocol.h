//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBCreateNoteIntent_Protocol_h
#define _INPBCreateNoteIntent_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBCreateNoteIntent-Protocol.h"
#include "_INPBDataString.h"
#include "_INPBIntentMetadata.h"
#include "_INPBNoteContent.h"

@class NSString;

@protocol _INPBCreateNoteIntent <NSObject>

@property (retain, nonatomic) _INPBNoteContent *content;
@property (readonly, nonatomic) BOOL hasContent;
@property (retain, nonatomic) _INPBDataString *groupName;
@property (readonly, nonatomic) BOOL hasGroupName;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBDataString *title;
@property (readonly, nonatomic) BOOL hasTitle;

@end

#endif /* _INPBCreateNoteIntent_Protocol_h */
