//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICMetadataListImageDetailViewModel_h
#define PUICMetadataListImageDetailViewModel_h
@import Foundation;

#include "PUICListImageDetailViewModel-Protocol.h"

@class NSString, UIImage;

@interface PUICMetadataListImageDetailViewModel : NSObject<PUICListImageDetailViewModel>

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *detailText;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) long long imageMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)viewModelFromMetadata:(id)metadata metadataHasLoaded:(BOOL)loaded;

/* instance methods */
@end

#endif /* PUICMetadataListImageDetailViewModel_h */
