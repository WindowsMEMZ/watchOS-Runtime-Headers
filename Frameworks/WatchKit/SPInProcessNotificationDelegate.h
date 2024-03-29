//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.2.0.0
//
#ifndef SPInProcessNotificationDelegate_h
#define SPInProcessNotificationDelegate_h
@import Foundation;

#include "SPExtensionConnectionDelegate-Protocol.h"

@class NSString;

@interface SPInProcessNotificationDelegate : NSObject<SPExtensionConnectionDelegate>

@property (weak, nonatomic) NSObject<SPExtensionConnectionDelegate> *appDelegate;
@property (copy, nonatomic) NSString *hostClientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAppDelegate:(id)delegate;
- (void)extensionConnection:(id)connection interfaceViewController:(id)controller setValue:(id)value forKey:(id)key property:(id)property;
- (void)extensionConnection:(id)connection handleActivityReply:(id)reply;
- (void)extensionConnection:(id)connection openSystemURL:(id)url;
- (void)extensionConnection:(id)connection interfaceViewController:(id)controller setUnderlyingUIHostingController:(id)controller;
- (void)extensionConnection:(id)connection interfaceViewController:(id)controller setupDynamicInterfaceObject:(id)object completion:(id /* block */)completion;
- (void)extensionConnection:(id)connection interfaceViewController:(id)controller removeDynamicInterfaceObject:(id)object;
- (id)extensionConnection:(id)connection redirectClientIDForSelector:(SEL)selector;
- (void)extensionConnection:(id)connection interfaceViewController:(id)controller presentNotificationWithType:(id)type footerText:(id)text bulletinUniqueID:(id)id;
- (void)extensionConnection:(id)connection interfaceViewControllerDismissViewController:(id)controller;
- (void)extensionConnection:(id)connection setTextInputSuggestions:(id)suggestions;
- (void)extensionConnection:(id)connection textSuggestions:(id)suggestions forNotificationActionWithID:(id)id controllerWithID:(id)id;
- (void)extensionConnection:(id)connection didReceiveUserActivity:(id)activity;
- (void)extensionConnection:(id)connection didReceiveUserActivityDict:(id)dict;
- (void)extensionConnection:(id)connection interfaceViewController:(id)controller pushViewController:(id)controller initializationContextID:(id)id;
- (void)extensionConnection:(id)connection interfaceViewController:(id)controller pushPagingScrollTableRow:(long long)row seguesByRowName:(id)name rowNamesAndContextIDs:(id)ids;
- (void)extensionConnection:(id)connection interfaceViewControllerPopViewController:(id)controller;
- (void)extensionConnection:(id)connection interfaceViewControllerPopToRootViewController:(id)controller;
- (void)extensionConnection:(id)connection interfaceViewController:(id)controller scrollToObject:(id)object atScrollPosition:(id)position animated:(id)animated;
- (void)extensionConnection:(id)connection interfaceViewControllerBecomeCurrentPageViewController:(id)controller;
- (void)extensionConnection:(id)connection reloadRootInterfaceViewControllersWithNames:(id)names initializationContextIDs:(id)ids pageIndex:(id)index verticalPaging:(id)paging;
- (void)extensionConnection:(id)connection insertRootInterfaceViewControllerWithNames:(id)names atIndexes:(id)indexes initializationContextIDs:(id)ids;
- (void)extensionConnection:(id)connection moveRootInterfaceViewControllerAtIndex:(long long)index toIndex:(long long)index;
- (void)extensionConnection:(id)connection removeRootInterfaceViewControllerAtIndexes:(id)indexes;
- (void)extensionConnection:(id)connection interfaceViewController:(id)controller presentViewController:(id)controller info:(id)info initializationContextID:(id)id;
- (void)extensionConnection:(id)connection interfaceViewController:(id)controller presentViewControllers:(id)controllers initializationContextIDs:(id)ids;
- (void)extensionConnection:(id)connection firstUnlock:(BOOL)unlock;
- (void)extensionConnectionDidPreventPlaybackUntilAudioRoutePicked:(id)picked;
@end

#endif /* SPInProcessNotificationDelegate_h */
