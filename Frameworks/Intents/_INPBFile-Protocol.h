//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBFile_Protocol_h
#define _INPBFile_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBFile-Protocol.h"
#include "_INPBURLValue.h"

@class NSData, NSString;

@protocol _INPBFile <NSObject>

@property (copy, nonatomic) NSData *bookmarkData;
@property (readonly, nonatomic) BOOL hasBookmarkData;
@property (copy, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL hasData;
@property (retain, nonatomic) _INPBURLValue *fileURL;
@property (readonly, nonatomic) BOOL hasFileURL;
@property (copy, nonatomic) NSString *filename;
@property (readonly, nonatomic) BOOL hasFilename;
@property (nonatomic) BOOL removedOnCompletion;
@property (nonatomic) BOOL hasRemovedOnCompletion;
@property (copy, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) BOOL hasTypeIdentifier;

@end

#endif /* _INPBFile_Protocol_h */
