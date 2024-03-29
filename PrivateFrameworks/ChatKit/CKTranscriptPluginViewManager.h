//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKTranscriptPluginViewManager_h
#define CKTranscriptPluginViewManager_h
@import Foundation;

@class IMMultiDict, NSMutableDictionary;

@interface CKTranscriptPluginViewManager : NSObject {
  /* instance variables */
  IMMultiDict *_reusablePluginViewsByClassName;
  NSMutableDictionary *_pluginViewToReuseDelegateMap;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)resetState;
- (id)dequeuePluginViewForBalloonController:(id)controller;
- (id)_pointerKeyForPluginView:(id)view;
- (BOOL)_objectSupportsPluginViewReuse:(id)reuse;
- (void)_registerPluginView:(id)view withReuseDelegate:(id)delegate;
- (void)enqueuePluginViewForReuse:(id)reuse;
@end

#endif /* CKTranscriptPluginViewManager_h */
