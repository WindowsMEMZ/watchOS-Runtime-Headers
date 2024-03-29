//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef _SFPBButton_Protocol_h
#define _SFPBButton_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSSecureCoding-Protocol.h"
#include "_SFPBButton-Protocol.h"
#include "_SFPBImage.h"

@class NSData, NSString;

@protocol _SFPBButton <NSObject>

@property (retain, nonatomic) _SFPBImage *image;
@property (retain, nonatomic) _SFPBImage *selectedImage;
@property (nonatomic) BOOL isSelected;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* _SFPBButton_Protocol_h */
