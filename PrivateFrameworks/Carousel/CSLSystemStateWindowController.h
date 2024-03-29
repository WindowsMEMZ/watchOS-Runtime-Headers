//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSystemStateWindowController_h
#define CSLSystemStateWindowController_h
@import Foundation;

#include "BSInvalidatable-Protocol.h"
#include "CSLDynamicBlurSlowModeAssertion.h"
#include "CSLPIButtonHandlerOverride-Protocol.h"
#include "CSLSOccluding-Protocol.h"
#include "CSLSecureWindow.h"

@class CSLPIBacklightAssertion, CSLSystemStateWindowApplicationButtonTapHandler, NSString, NSUUID;
@protocol UIViewController<CSLSButtonHandling><CSLSOccluding;

@interface CSLSystemStateWindowController : NSObject<CSLPIButtonHandlerOverride, CSLSOccluding> {
  /* instance variables */
  CSLSecureWindow *_window;
  UIViewController<CSLSButtonHandling><CSLSOccluding> *_viewController;
  NSUUID *_uuid;
  CSLDynamicBlurSlowModeAssertion *_slowModeAssertion;
  CSLPIBacklightAssertion *_interactionAssertion;
  CSLPIBacklightAssertion *_touchAssertion;
  NSObject<BSInvalidatable> *_presentationAssertion;
  CSLSystemStateWindowApplicationButtonTapHandler *_applicationButtonTapHandler;
}

@property (nonatomic) BOOL occluding;
@property (nonatomic) BOOL touchesDisabled;
@property (nonatomic) BOOL wantsWheelEvents;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) double level;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithType:(unsigned long long)type layout:(id)layout level:(double)level;
- (void)dealloc;
- (void)dismissWindowControllerAnimated:(BOOL)animated completion:(id /* block */)completion;
- (BOOL)ownsKeyWindow;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)_addClockSlowModeAssertionIfNecessary;
- (void)_removeClockSlowModeAssertionIfNecessary;
- (void)_occludeScene;
- (void)_decludeScene;
- (BOOL)_scrollView:(id)view canScrollFurtherForWheelDirection:(double)direction;
- (BOOL)_shouldBecomeKeyWindowForWheelEvent:(id)event;
- (BOOL)_canInterceptWheelEventsWithAlertModel:(id)model;
- (void)inspectWheelEvent:(id)event;
- (BOOL)preHandleButton:(unsigned long long)button eventType:(unsigned long long)type firstDownTime:(unsigned long long)time lastUpTime:(unsigned long long)time;
- (BOOL)postHandleButton:(unsigned long long)button eventType:(unsigned long long)type firstDownTime:(unsigned long long)time lastUpTime:(unsigned long long)time;
- (BOOL)isOccluding;
- (BOOL)areTouchesDisabled;
@end

#endif /* CSLSystemStateWindowController_h */
