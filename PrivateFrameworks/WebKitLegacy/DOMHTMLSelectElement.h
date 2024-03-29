//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef DOMHTMLSelectElement_h
#define DOMHTMLSelectElement_h
@import Foundation;

#include "DOMHTMLElement.h"
#include "DOMHTMLFormElement.h"
#include "DOMHTMLOptionsCollection.h"

@class NSString;

@interface DOMHTMLSelectElement : DOMHTMLElement

@property BOOL autofocus;
@property BOOL disabled;
@property (readonly) DOMHTMLFormElement *form;
@property BOOL multiple;
@property (copy) NSString *name;
@property int size;
@property (readonly, copy) NSString *type;
@property (readonly) DOMHTMLOptionsCollection *options;
@property (readonly) int length;
@property int selectedIndex;
@property (copy) NSString *value;
@property (readonly) BOOL willValidate;

/* instance methods */
- (unsigned int)completeLength;
- (id)listItemAtIndex:(int)index;
- (int)structuralComplexityContribution;
- (void)add:(id)add;
- (void)_activateItemAtIndex:(int)index;
- (void)_activateItemAtIndex:(int)index allowMultipleSelection:(BOOL)selection;
- (id)item:(unsigned int)item;
- (id)namedItem:(id)item;
- (void)add:(id)add before:(id)before;
- (void)remove:(int)remove;
@end

#endif /* DOMHTMLSelectElement_h */
