//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMEventListenerReference_h
#define IMEventListenerReference_h
@import Foundation;

#include "IMEventListener.h"

@interface IMEventListenerReference : NSObject

@property (readonly, weak, nonatomic) IMEventListener *eventListener;

/* instance methods */
- (id)initWithEventListener:(id)listener;
@end

#endif /* IMEventListenerReference_h */
