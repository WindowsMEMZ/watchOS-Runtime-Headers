//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOMapItemTip_h
#define GEOMapItemTip_h
@import Foundation;

#include "GEOPDTip.h"

@class NSString;

@interface GEOMapItemTip : NSObject

@property (retain, nonatomic) GEOPDTip *geoTip;
@property (readonly, nonatomic) BOOL hasTipTime;
@property (readonly, nonatomic) double tipTime;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *localizedSnippet;
@property (readonly, nonatomic) NSString *bestImageURL;
@property (readonly, nonatomic) BOOL hasTipId;
@property (readonly, nonatomic) NSString *tipId;

/* instance methods */
- (id)initWithGEOPDTip:(id)geopdtip;
@end

#endif /* GEOMapItemTip_h */
