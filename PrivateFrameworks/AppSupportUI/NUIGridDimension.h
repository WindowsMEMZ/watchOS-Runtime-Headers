//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 43.4.0.0.0
//
#ifndef NUIGridDimension_h
#define NUIGridDimension_h
@import Foundation;

#include "NUIContainerGridView.h"
#include "NUIGridDimension-Protocol.h"

@class NSArray, NSString;

@interface NUIGridDimension : NSObject<NUIGridDimension> {
  /* instance variables */
  NUIContainerGridView *_gridView;
  double _spacing;
  struct { unsigned int x :8 align; unsigned int x :1 isRow; unsigned int x :1 hidden; unsigned int x :1 wasDetached; } _flags;
}

@property (copy, @dynamic, nonatomic) NSArray *arrangedSubviews;
@property (nonatomic) BOOL hidden;
@property (nonatomic) double length;
@property (nonatomic) double spacingAfter;
@property (nonatomic) long long alignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (BOOL)isHidden;
@end

#endif /* NUIGridDimension_h */
