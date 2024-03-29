//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPModelLibraryResponseKeepLocalStatusConfiguration_h
#define MPModelLibraryResponseKeepLocalStatusConfiguration_h
@import Foundation;

@protocol struct shared_ptr<mlcore::EntityQuery> { struct EntityQuery * x0; struct __shared_weak_count * x1; }, {shared_ptr<mlcore::EntityQuery>="__ptr_"^{EntityQuery}"__cntrl_"^{__shared_weak_count}};

@interface MPModelLibraryResponseKeepLocalStatusConfiguration : NSObject

@property (copy, nonatomic) id /* block */ downloadablePlaylistItemEntityQueryBlock;
@property (nonatomic) struct shared_ptr<mlcore::EntityQuery> { struct EntityQuery * x0; struct __shared_weak_count * x1; } downloadableItemsQuery;

/* instance methods */
@end

#endif /* MPModelLibraryResponseKeepLocalStatusConfiguration_h */
