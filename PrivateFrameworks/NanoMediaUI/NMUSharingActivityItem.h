//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUSharingActivityItem_h
#define NMUSharingActivityItem_h
@import Foundation;

#include "UIActivityItemSource-Protocol.h"

@class LPLinkMetadata, MPModelObject, NSString, NSURL;

@interface NMUSharingActivityItem : NSObject<UIActivityItemSource> {
  /* instance variables */
  MPModelObject *_modelObject;
  LPLinkMetadata *_metadata;
  NSURL *_URL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithModelObject:(id)object URL:(id)url;
- (id)activityViewControllerLinkMetadata:(id)metadata;
- (id)activityViewController:(id)controller itemForActivityType:(id)type;
- (id)activityViewControllerPlaceholderItem:(id)item;
- (id)_metadata;
- (id)_linkPresentationImage;
- (id)_artworkItemProviderWithPreferredSize:(struct CGSize { double x0; double x1; })size;
@end

#endif /* NMUSharingActivityItem_h */
