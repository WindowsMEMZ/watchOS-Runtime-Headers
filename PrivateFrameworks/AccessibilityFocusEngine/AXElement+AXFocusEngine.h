//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXElement_AXFocusEngine_h
#define AXElement_AXFocusEngine_h
@import Foundation;

@interface AXElement (AXFocusEngine) <AXElementNamesItem>
/* instance methods */
- (id)typeaheadQueryString;
- (void)setTypeaheadQueryString:(id)string;
- (id)elementName;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })elementFrame;
- (struct CGSize { double x0; double x1; })elementLabelContainerSize;
- (BOOL)isSpacer;
- (BOOL)hasRemoteFocusSystem;
- (BOOL)applicationIsExtension;
- (id)elementForRemoteFocusSystem;
- (id)applicationForHostFocusSystem;
- (id)currentFocusElement;
- (id)remoteSceneID;
- (void)focusOnRemoteSceneID;
- (void)focusOnApplication;
- (void)enableFocus;
- (void)disableFocus;
- (void)didFocus;
- (BOOL)moveFocusWithHeading:(unsigned long long)heading byGroup:(BOOL)group;
- (BOOL)moveFocusWithHeading:(unsigned long long)heading withQueryString:(id)string;
- (BOOL)hasNativeFocusElements;
@end

#endif /* AXElement_AXFocusEngine_h */
