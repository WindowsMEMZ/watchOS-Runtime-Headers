//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef _SFPBCommandButtonItem_Protocol_h
#define _SFPBCommandButtonItem_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSSecureCoding-Protocol.h"
#include "_SFPBCommand.h"
#include "_SFPBCommandButtonItem-Protocol.h"
#include "_SFPBImage.h"

@class NSArray, NSData, NSString;

@protocol _SFPBCommandButtonItem <NSObject>

@property (retain, nonatomic) _SFPBImage *image;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) _SFPBCommand *command;
@property (copy, nonatomic) NSArray *previewButtonItems;
@property (nonatomic) BOOL isDestructive;
@property (nonatomic) unsigned long long uniqueId;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (void)clearPreviewButtonItems;
- (void)addPreviewButtonItems:(id)items;
- (unsigned long long)previewButtonItemsCount;
- (id)previewButtonItemsAtIndex:(unsigned long long)index;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* _SFPBCommandButtonItem_Protocol_h */
