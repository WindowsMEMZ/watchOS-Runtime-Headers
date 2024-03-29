//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardUIService_h
#define UIKeyboardUIService_h
@import Foundation;

#include "BSServiceConnectionListenerDelegate-Protocol.h"

@class BSServiceConnectionListener, CAContext, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface UIKeyboardUIService : NSObject<BSServiceConnectionListenerDelegate> {
  /* instance variables */
  BSServiceConnectionListener *_bsConnectionlistener;
  NSObject<OS_dispatch_queue> *_dispatchQueue;
  NSMutableArray *_slots;
}

@property (readonly, nonatomic) CAContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedService;
+ (id)serviceInterface;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)clearSlots;
- (void)listener:(id)listener didReceiveConnection:(id)connection withContext:(id)context;
- (void)createContext;
- (int)createSlot:(struct CGSize { double x0; double x1; })slot;
@end

#endif /* UIKeyboardUIService_h */
