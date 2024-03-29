//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 163.3.3.0.0
//
#ifndef _TtP8Settings23SettingsServiceProtocol__Protocol_h
#define _TtP8Settings23SettingsServiceProtocol__Protocol_h
@import Foundation;

@protocol Settings.SettingsServiceProtocol 

@property (nonatomic, retain) NSObject<Settings.SettingsHostServiceProvider> *serviceHost;

@optional
/* instance methods */
- (void)getSidebarItems:(id /* block */)items;
- (void)isAvailable:(id /* block */)available;
- (void)filterSearchAnchorsForSidebarItem:(id)item suggestedAnchors:(id)anchors reply:(id /* block */)reply;
- (void)getSidebarSections:(id /* block */)sections;
- (void)openURL:(id)url;
@end

#endif /* _TtP8Settings23SettingsServiceProtocol__Protocol_h */
