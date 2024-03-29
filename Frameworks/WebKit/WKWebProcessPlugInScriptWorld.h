//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WKWebProcessPlugInScriptWorld_h
#define WKWebProcessPlugInScriptWorld_h
@import Foundation;

#include "WKObject-Protocol.h"

@class NSString;
@protocol {ObjectStorage<WebKit::InjectedBundleScriptWorld>="data"{type="__lx"[32C]}};

@interface WKWebProcessPlugInScriptWorld : NSObject<WKObject> {
  /* instance variables */
  struct ObjectStorage<WebKit::InjectedBundleScriptWorld> { struct type { unsigned char x[32] __lx; } data; } _world;
}

@property (readonly) void * _scriptWorld;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) struct Object { undefined * * x0; void * x1; } * _apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)world;
+ (id)normalWorld;

/* instance methods */
- (void)dealloc;
- (void)clearWrappers;
- (void)makeAllShadowRootsOpen;
- (void)disableOverrideBuiltinsBehavior;
@end

#endif /* WKWebProcessPlugInScriptWorld_h */
