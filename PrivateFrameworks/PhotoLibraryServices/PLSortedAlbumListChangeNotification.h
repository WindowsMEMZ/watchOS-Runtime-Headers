//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLSortedAlbumListChangeNotification_h
#define PLSortedAlbumListChangeNotification_h
@import Foundation;

#include "PLAssetContainerListChangeNotification.h"
#include "PLAssetContainerListChangeNotification.h"
#include "PLSortedAlbumList.h"

@interface PLSortedAlbumListChangeNotification : PLAssetContainerListChangeNotification {
  /* instance variables */
  PLSortedAlbumList *_albumList;
  PLAssetContainerListChangeNotification *_backingNotification;
}

/* class methods */
+ (id)notificationForDerivedObject:(id)object priorChangeState:(id)state forBackingObjectNotification:(id)notification;

/* instance methods */
- (id)init;
- (id)initWithSortedAlbumList:(id)list albumListChangeNotification:(id)notification;
- (id)object;
- (id)albumList;
- (BOOL)shouldReload;
- (BOOL)countDidChange;
- (id)description;
- (BOOL)_getOldSet:(id *)set newSet:(id *)set;
- (id)_changedObjects;
@end

#endif /* PLSortedAlbumListChangeNotification_h */
