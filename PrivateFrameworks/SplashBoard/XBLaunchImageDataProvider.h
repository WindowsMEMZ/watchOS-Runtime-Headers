//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 297.1.0.0.0
//
#ifndef XBLaunchImageDataProvider_h
#define XBLaunchImageDataProvider_h
@import Foundation;

#include "XBSnapshotDataProvider-Protocol.h"
#include "XBSnapshotDataProviderContext.h"

@class NSString, UIImage, _FBSSnapshot;

@interface XBLaunchImageDataProvider : NSObject<XBSnapshotDataProvider> {
  /* instance variables */
  _FBSSnapshot *_snapshot;
  UIImage *_cachedImage;
}

@property (readonly, retain, nonatomic) XBSnapshotDataProviderContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRequest:(id)request contextID:(unsigned int)id opaque:(BOOL)opaque;
- (id)fetchImage;
- (void)invalidateImage;
@end

#endif /* XBLaunchImageDataProvider_h */
