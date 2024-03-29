//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 158.42.9.28.10
//
#ifndef MUWatchPlaceContentDataSource_h
#define MUWatchPlaceContentDataSource_h
@import Foundation;

#include "_MKPlaceItem-Protocol.h"

@interface MUWatchPlaceContentDataSource : NSObject { // (Swift)
  /* instance variables */
   _listModel;
   sectionDataSources;
   userActionDelegate;
   analyticsController;
   mapItemIdentifierIntrumentedForReveal;
   options;
   isActive;
   preferredMapConfiguration;
   etaProvider;
   imageManager;
}

@property (nonatomic, retain) NSObject<_MKPlaceItem> *placeItem;

/* instance methods */
- (void)handleAttributionChangeWithNote:(id)note;
- (id)init;
@end

#endif /* MUWatchPlaceContentDataSource_h */
