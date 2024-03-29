//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef _NMSyncDefaultsAssociatedObject_h
#define _NMSyncDefaultsAssociatedObject_h
@import Foundation;

@class MPMediaPlaylist;

@interface _NMSyncDefaultsAssociatedObject : NSObject

@property (retain, nonatomic) MPMediaPlaylist *assetSyncPlaylist;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_mediaLibraryDidChangeNotification:(id)notification;
@end

#endif /* _NMSyncDefaultsAssociatedObject_h */
