//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKCustomFeatureDataSourceObserverThunk_h
#define VKCustomFeatureDataSourceObserverThunk_h
@import Foundation;

#include "VKCustomFeatureDataSourceObserver-Protocol.h"

@class NSString;
@protocol {_retain_ptr<id<VKCustomFeatureDataSource>, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>="_vptr$_retain_ptr"^^?"_obj"@"<VKCustomFeatureDataSource>""_retain"{_retain_objc_arc=}"_release"{_release_objc_arc=}};

@interface VKCustomFeatureDataSourceObserverThunk : NSObject<VKCustomFeatureDataSourceObserver> {
  /* instance variables */
  void * _observer;
  struct _retain_ptr<id<VKCustomFeatureDataSource>, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { undefined * *_vptr$_retain_ptr; <VKCustomFeatureDataSource> *_obj; struct _retain_objc_arc _retain; struct _release_objc_arc _release; } _dataSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDataSource:(id)source observer:(void *)observer;
- (void)dealloc;
- (void)clearObserver;
- (void)dataSource:(id)source featuresDidChangeForRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })rect;
- (void)globalFeaturesDidChangeForDataSource:(id)source;
- (void)dataSource:(id)source didChangeSceneState:(unsigned char)state;
- (void)dataSource:(id)source didChangeSceneID:(unsigned char)id;
@end

#endif /* VKCustomFeatureDataSourceObserverThunk_h */
