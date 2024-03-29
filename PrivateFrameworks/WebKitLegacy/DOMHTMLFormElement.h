//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef DOMHTMLFormElement_h
#define DOMHTMLFormElement_h
@import Foundation;

#include "DOMHTMLElement.h"
#include "DOMHTMLCollection.h"

@class NSString;

@interface DOMHTMLFormElement : DOMHTMLElement

@property (copy) NSString *acceptCharset;
@property (copy) NSString *action;
@property (copy) NSString *enctype;
@property (copy) NSString *encoding;
@property (copy) NSString *method;
@property (copy) NSString *name;
@property (copy) NSString *target;
@property (readonly) DOMHTMLCollection *elements;
@property (readonly) int length;

/* instance methods */
- (int)structuralComplexityContribution;
- (id)autocomplete;
- (void)setAutocomplete:(id)autocomplete;
- (BOOL)noValidate;
- (void)setNoValidate:(BOOL)validate;
- (void)submit;
- (void)reset;
- (BOOL)checkValidity;
@end

#endif /* DOMHTMLFormElement_h */
