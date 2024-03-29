//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 908.2.0.0.0
//
#ifndef _NSTextAttachmentLayoutContext_h
#define _NSTextAttachmentLayoutContext_h
@import Foundation;

#include "NSTextContainer.h"
#include "NSTextLayoutFragment.h"
#include "NSTextLocation-Protocol.h"
#include "NSTextViewportElementProvider-Protocol.h"

@class NSArray, NSMapTable, NSString;
@protocol _NSTextLayoutAttachmentLayoutContextDelegate;

@interface _NSTextAttachmentLayoutContext : NSObject<NSTextViewportElementProvider> {
  /* instance variables */
  NSMapTable *_textAttachmentInfoTable;
  NSArray *_sortedKeys;
}

@property BOOL hasViewProvider;
@property BOOL hasResolvedAttachmentFrame;
@property (readonly) NSObject<NSTextLocation> *baseLocation;
@property (readonly) NSObject<_NSTextLayoutAttachmentLayoutContextDelegate> *delegate;
@property NSTextContainer *textContainer;
@property (readonly, copy) NSArray *textAttachmentViewProviders;
@property long long applicationFrameworkContext;
@property BOOL usesFontLeading;
@property NSTextLayoutFragment *textLayoutFragment;
@property BOOL allowsFontOverridingTextAttachmentVerticalMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)_adjustLocations;
- (id)initWithDelegate:(id)delegate;
- (id)init;
- (void)dealloc;
- (id)textAttachmentLayoutInfoForLocation:(id)location attributes:(id)attributes;
- (void)_flushCachedInfo;
- (id)_sortedKeys;
- (void)reset;
- (id)textContainerForLocation:(id)location;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })proposedLineFragmentRectForLocation:(id)location attributes:(id)attributes baselineOffset:(out double *)offset;
- (void)enumerateViewportElementsFromLocation:(id)location options:(long long)options usingBlock:(id /* block */)block;
@end

#endif /* _NSTextAttachmentLayoutContext_h */
