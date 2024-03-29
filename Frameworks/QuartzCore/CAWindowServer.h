//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1110.5.0.0.0
//
#ifndef CAWindowServer_h
#define CAWindowServer_h
@import Foundation;

@class NSArray;

@interface CAWindowServer : NSObject {
  /* instance variables */
  struct CAWindowServerImpl { struct __CFArray * x0; struct __SFBConnection * x1; unsigned int x2; id /* block */ x3; } * _impl;
}

@property (readonly) NSArray *displays;
@property BOOL mirroringEnabled;
@property unsigned int rendererFlags;
@property BOOL secure;
@property id /* block */ slotDeletionCallback;

/* class methods */
+ (id)context;
+ (id)contextWithOptions:(id)options;
+ (id)server;
+ (id)serverWithOptions:(id)options;
+ (id)serverIfRunning;
+ (void)stopServer;

/* instance methods */
- (id)init;
- (id)_init;
- (void)addDisplay:(id)display;
- (void)removeDisplay:(id)display;
- (void)removeAllDisplays;
- (id)displayWithName:(id)name;
- (id)displayWithDisplayId:(unsigned int)id;
- (id)displayWithUniqueId:(id)id;
- (BOOL)_detectSimDisplays;
- (void)_detectDisplays;
- (void)dealloc;
- (BOOL)isSecure;
- (id)secureModeViolations;
- (id)insecureProcessIds;
- (BOOL)isSlotValid:(unsigned int)valid;
- (id)description;
- (unsigned int)clientPortOfContextId:(unsigned int)id;
- (unsigned int)taskNamePortOfContextId:(unsigned int)id;
- (unsigned int)contextIdHostingContextId:(unsigned int)id;
- (BOOL)isMirroringEnabled;
@end

#endif /* CAWindowServer_h */
