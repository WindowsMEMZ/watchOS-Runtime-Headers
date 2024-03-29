//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFButton_Protocol_h
#define SFButton_Protocol_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFButton-Protocol.h"
#include "SFImage.h"

@class NSData, NSDictionary, NSString;

@protocol SFButton <NSObject>

@property (retain, nonatomic) SFImage *image;
@property (retain, nonatomic) SFImage *selectedImage;
@property (nonatomic) BOOL isSelected;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;

@end

#endif /* SFButton_Protocol_h */
