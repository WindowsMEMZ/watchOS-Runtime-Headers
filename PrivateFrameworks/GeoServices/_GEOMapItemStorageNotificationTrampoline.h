//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef _GEOMapItemStorageNotificationTrampoline_h
#define _GEOMapItemStorageNotificationTrampoline_h
@import Foundation;

#include "GEOMapItem-Protocol.h"
#include "GEOMapItemStorage.h"
#include "NSObject-Protocol.h"

@interface _GEOMapItemStorageNotificationTrampoline : NSObject {
  /* instance variables */
  NSObject<GEOMapItem> *_mapItem;
  GEOMapItemStorage *_storage;
  NSObject<NSObject> *_notificationToken;
}

/* instance methods */
- (id)initWithMapItem:(id)item mapItemStorage:(id)storage;
- (void)dealloc;
@end

#endif /* _GEOMapItemStorageNotificationTrampoline_h */
