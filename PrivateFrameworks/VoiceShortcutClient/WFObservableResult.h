//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFObservableResult_h
#define WFObservableResult_h
@import Foundation;

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface WFObservableResult : NSObject

@property (readonly, nonatomic) Class valueType;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } glyphSize;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observerNotificationQueue;
@property (readonly, nonatomic) NSHashTable *observers;
@property (nonatomic) BOOL observingDistributedNotifications;

/* class methods */
+ (void)drawGlyphsIntoWorkflowsIfNecessary:(id)necessary glyphSize:(struct CGSize { double x0; double x1; })size completion:(id /* block */)completion;
+ (void)drawGlyphsIntoWorkflowsIfNecessary:(id)necessary glyphSize:(struct CGSize { double x0; double x1; })size;
+ (void)drawGlyphsIntoWorkflowsIfNecessary:(id)necessary glyphSize:(struct CGSize { double x0; double x1; })size roundedIcon:(BOOL)icon synchronously:(BOOL)synchronously completion:(id /* block */)completion;

/* instance methods */
- (id)initWithValueType:(Class)type glyphSize:(struct CGSize { double x0; double x1; })size;
- (void)dealloc;
- (void)addResultObserver:(id)observer;
- (void)removeResultObserver:(id)observer;
- (void)handleChangeNotification:(id)notification;
- (void)startConnectionIfNecessary;
- (void)stopConnection;
- (void)databaseDidChange:(id)change;
@end

#endif /* WFObservableResult_h */
