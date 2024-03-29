//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 600.0.0.0.0
//
#ifndef TKDisplayLinkManager_h
#define TKDisplayLinkManager_h
@import Foundation;

@class CADisplayLink, NSMutableDictionary;

@interface TKDisplayLinkManager : NSObject {
  /* instance variables */
  CADisplayLink *_displayLink;
  NSMutableDictionary *_activeObservers;
  NSMutableDictionary *_updatedObservers;
  BOOL _hasUpdatedObservers;
  BOOL _isHandlingDisplayRefresh;
  unsigned long long _warmUpModeRequirementsCount;
}

@property (readonly, nonatomic) BOOL paused;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double timestamp;

/* class methods */
+ (id)currentDisplayLinkManager;
+ (void)_releaseCurrentDisplayLinkManager;

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)isPaused;
- (id)_displayLink;
- (void)_setDisplayLink:(id)link;
- (id)addObserverWithHandler:(id /* block */)handler;
- (id)addObserverForFrameInterval:(unsigned long long)interval handler:(id /* block */)handler;
- (void)removeObserverWithToken:(id)token;
- (id)_prepareUpdatedObserversForModification;
- (void)_didAddFirstObserver;
- (void)_didRemoveLastObserver;
- (BOOL)_isWarmUpModeEnabled;
- (void)beginRequiringWarmUpMode;
- (void)endRequiringWarmUpMode;
- (void)_displayDidRefresh:(id)refresh;
@end

#endif /* TKDisplayLinkManager_h */
