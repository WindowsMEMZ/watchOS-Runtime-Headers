//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 163.3.3.0.0
//
#ifndef _TtCV8Settings20SettingsServiceSceneP33_1615FE8C8606434AF75D14608F48E40F31SettingsServiceProtocolDispatch_h
#define _TtCV8Settings20SettingsServiceSceneP33_1615FE8C8606434AF75D14608F48E40F31SettingsServiceProtocolDispatch_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"
#include "_TtP8Settings23SettingsServiceProtocol_-Protocol.h"
#include "_TtP8Settings27SettingsHostServiceProvider_-Protocol.h"

@interface Settings.SettingsServiceScene.(SettingsServiceProtocolDispatch in _1615FE8C8606434AF75D14608F48E40F) : Swift._SwiftObject<Settings.SettingsServiceProtocol> { // (Swift)
  /* instance variables */
   target;
}

@property (nonatomic, retain) NSObject<Settings.SettingsHostServiceProvider> *serviceHost;

/* instance methods */
- (void)openURL:(id)url;
- (void)getSidebarItems:(id /* block */)items;
- (void)getSidebarSections:(id /* block */)sections;
- (void)isAvailable:(id /* block */)available;
- (void)filterSearchAnchorsForSidebarItem:(id)item suggestedAnchors:(id)anchors reply:(id /* block */)reply;
@end

#endif /* _TtCV8Settings20SettingsServiceSceneP33_1615FE8C8606434AF75D14608F48E40F31SettingsServiceProtocolDispatch_h */
