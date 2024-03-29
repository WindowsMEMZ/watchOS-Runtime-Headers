//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOTextItemContainer_h
#define GEOTextItemContainer_h
@import Foundation;

#include "GEOTextItemContainer-Protocol.h"
#include "GEOTextItemDisplayConfig-Protocol.h"

@class NSArray;

@interface GEOTextItemContainer : NSObject<GEOTextItemContainer>

@property (readonly, nonatomic) NSObject<GEOTextItemDisplayConfig> *displayConfig;
@property (readonly, nonatomic) NSArray *textItems;

/* instance methods */
- (id)init;
- (id)initWithDisplayConfig:(id)config textItems:(id)items;
- (id)initWithTextItemContainer:(id)container;
@end

#endif /* GEOTextItemContainer_h */
