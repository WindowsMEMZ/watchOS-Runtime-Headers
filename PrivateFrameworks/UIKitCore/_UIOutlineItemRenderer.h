//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIOutlineItemRenderer_h
#define _UIOutlineItemRenderer_h
@import Foundation;

#include "_UIDiffableDataSourceItemRenderer.h"

@interface _UIOutlineItemRenderer : _UIDiffableDataSourceItemRenderer

@property (copy, nonatomic) id /* block */ willUpdateCellHandler;

/* instance methods */
- (id)initWithIdentifier:(id)identifier cellClass:(Class)class handler:(id /* block */)handler;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* _UIOutlineItemRenderer_h */
