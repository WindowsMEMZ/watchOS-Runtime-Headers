//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXRemoteElement_h
#define AXRemoteElement_h
@import Foundation;

@class NSMutableSet, NSString;
@protocol AXRemoteElementChildrenDelegate;

@interface AXRemoteElement : NSObject {
  /* instance variables */
  NSMutableSet *_allChildren;
}

@property (nonatomic) int remotePid;
@property (nonatomic) unsigned int contextId;
@property (retain, nonatomic) NSString *uuid;
@property (copy, nonatomic) id /* block */ contextRetrieval;
@property (copy, nonatomic) id /* block */ pidRetrieval;
@property (readonly, nonatomic) unsigned long long uuidHash;
@property (readonly, nonatomic) unsigned int localHostingWindowContextId;
@property (nonatomic) unsigned int machPort;
@property (nonatomic) BOOL onClientSide;
@property (weak, nonatomic) NSObject<AXRemoteElementChildrenDelegate> *remoteChildrenDelegate;
@property (weak, nonatomic) id accessibilityContainer;
@property (nonatomic) BOOL deniesDirectAppConnection;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } containerAccessibilityFrame;

/* class methods */
+ (void)initialize;
+ (BOOL)_isSerializableAccessibilityElement;
+ (id)remoteElementForBlock:(id /* block */)block;
+ (id)registeredRemoteElements;
+ (id)remoteElementsForBlock:(id /* block */)block;
+ (id)remoteElementsForContextId:(unsigned int)id;
+ (BOOL)registerRemoteElement:(id)element remotePort:(unsigned int)port;

/* instance methods */
- (id)initWithUUID:(id)uuid andRemotePid:(int)pid andContextId:(unsigned int)id;
- (void)platformCleanup;
- (unsigned int)_accessibilityContextId;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_accessibilityHandwritingElement;
- (void)dealloc;
- (void)_getRemoteValuesOffMainThread:(id /* block */)thread;
- (void)getLeafElementsFromRemoteSide:(id /* block */)side;
- (id)_remoteElementWithAttribute:(long long)attribute limitToRemoteSubviews:(BOOL)subviews;
- (id)_accessibilityActiveKeyboard;
- (id)_accessibilityResponderElement;
- (id)_accessibilityFirstElement;
- (id)_accessibilityLastElement;
- (BOOL)_accessibilityIsGroupedParent;
- (id)_accessibilitySortedElementsWithin;
- (unsigned long long)_accessibilityAutomationType;
- (id)accessibilityElements;
- (void)unregister;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)_accessibilityHasVisibleFrame;
- (void)_accessibilityIncreaseSelection:(id)selection;
- (id)description;
- (void)_accessibilitySetFocusOnElement:(BOOL)element;
- (BOOL)_accessibilitySetNativeFocus;
@end

#endif /* AXRemoteElement_h */
