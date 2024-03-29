//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXFocusManager_h
#define AXFocusManager_h
@import Foundation;

@class AXElement, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface AXFocusManager : NSObject

@property (retain, nonatomic) NSString *typeaheadString;
@property (retain, nonatomic) AXElement *focusContainerForSuccessfulTypeaheadMovement;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *movementQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observersQueue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } observersLock;
@property (readonly, nonatomic) AXElement *currentApplication;

/* instance methods */
- (id)init;
- (id)_moveFocusContainerFocusInDirection:(long long)direction;
- (void)moveFocusWithHeading:(unsigned long long)heading byGroup:(BOOL)group;
- (void)moveFocusInsideForward:(BOOL)forward;
- (void)moveFocusInsideForward:(BOOL)forward shouldWrap:(BOOL)wrap;
- (void)moveFocusWithHeading:(unsigned long long)heading queryString:(id)string;
- (void)_moveFocusWithHeading:(unsigned long long)heading byGroup:(BOOL)group queryString:(id)string shouldWrap:(BOOL)wrap;
- (void)focusOnSceneForTypeahead;
- (BOOL)_focusOnFocusContainer:(id)container;
- (unsigned long long)_indexOfTypeaheadPIDInFocusContainers:(id)containers;
- (void)_verifyPIDForTypeahead;
- (id)_currentFocusContainers;
- (void)_moveToElementWithHeading:(unsigned long long)heading queryString:(id)string;
- (BOOL)_moveFocusInFocusContainer:(id)container withHeading:(unsigned long long)heading queryString:(id)string;
- (BOOL)_recursiveMoveFocusInFocusContainer:(id)container withHeading:(unsigned long long)heading queryString:(id)string;
- (BOOL)_moveFocusInRemoteElement:(id)element withHeading:(unsigned long long)heading byGroup:(BOOL)group;
- (BOOL)_moveFocusWithHeading:(unsigned long long)heading byGroup:(BOOL)group shouldWrap:(BOOL)wrap;
- (void)_handleFailedFocusMovementWithHeading:(unsigned long long)heading byGroup:(BOOL)group;
- (BOOL)_recursiveMoveFocusInFocusContainer:(id)container withHeading:(unsigned long long)heading byGroup:(BOOL)group;
- (id)currentElement;
- (id)currentFocusContainer;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)_enumerateObservers:(id /* block */)observers;
@end

#endif /* AXFocusManager_h */
