//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef UIActivityItemProvider_h
#define UIActivityItemProvider_h
@import Foundation;

#include "NSOperation.h"
#include "UIActivityItemSource-Protocol.h"

@class NSString;

@interface UIActivityItemProvider : NSOperation<UIActivityItemSource>

@property (retain, nonatomic) id placeholderItem;
@property (retain, nonatomic) id providedItem;
@property (copy, nonatomic) NSString *activityType;
@property (readonly, nonatomic) id item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithPlaceholderItem:(id)item;
- (void)main;
- (BOOL)_shouldExecuteItemOperationForActivity:(id)activity;
- (id)activityViewControllerPlaceholderItem:(id)item;
- (id)activityViewController:(id)controller itemForActivityType:(id)type;
- (void)_setActivityType:(id)type;
@end

#endif /* UIActivityItemProvider_h */
