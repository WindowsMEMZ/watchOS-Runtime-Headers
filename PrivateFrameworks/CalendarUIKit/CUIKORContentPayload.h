//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1205.1.1.2.0
//
#ifndef CUIKORContentPayload_h
#define CUIKORContentPayload_h
@import Foundation;

#include "CUIKORTextDrawInfo.h"

@class NSAttributedString, UIImage;

@interface CUIKORContentPayload : NSObject

@property (readonly, nonatomic) long long requestId;
@property (readonly, nonatomic) unsigned long long requestOptions;
@property (readonly, nonatomic) UIImage *backgroundImage;
@property (readonly, nonatomic) UIImage *textImage;
@property (readonly, nonatomic) CUIKORTextDrawInfo *textDrawInfo;
@property (readonly, nonatomic) UIImage *travelTimeImage;
@property (readonly, nonatomic) NSAttributedString *travelTimeString;

/* instance methods */
- (id)initWithRequestId:(long long)id requestOptions:(unsigned long long)options backgroundImage:(id)image textImage:(id)image textDrawInfo:(id)info travelTimeImage:(id)image travelTimeString:(id)string;
@end

#endif /* CUIKORContentPayload_h */
