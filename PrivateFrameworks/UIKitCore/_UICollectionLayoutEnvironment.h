//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICollectionLayoutEnvironment_h
#define _UICollectionLayoutEnvironment_h
@import Foundation;

#include "NSCollectionLayoutContainer-Protocol.h"
#include "NSCollectionLayoutEnvironment_Private-Protocol.h"
#include "UITraitCollection.h"
#include "_UIDataSourceSnapshotTranslating-Protocol.h"

@class NSString;

@interface _UICollectionLayoutEnvironment : NSObject<NSCollectionLayoutEnvironment_Private>

@property (retain, nonatomic) NSObject<NSCollectionLayoutContainer> *container;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (retain, nonatomic) NSObject<_UIDataSourceSnapshotTranslating> *_dataSourceSnapshot;
@property (nonatomic) long long _sectionIndex;
@property (nonatomic) BOOL _wantsCollapsedTopSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContainer:(id)container traitCollection:(id)collection dataSourceSnapshot:(id)snapshot;
- (id)initWithContainer:(id)container traitCollection:(id)collection dataSourceSnapshot:(id)snapshot sectionIndex:(long long)index wantsCollapsedTopSpacing:(BOOL)spacing;
@end

#endif /* _UICollectionLayoutEnvironment_h */
