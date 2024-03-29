//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMToSuperParserFrame_h
#define IMToSuperParserFrame_h
@import Foundation;

#include "IMXMLParserFrame.h"

@interface IMToSuperParserFrame : IMXMLParserFrame
/* instance methods */
- (void)parser:(id)parser context:(id)context didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
- (void)parser:(id)parser context:(id)context didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
- (void)parser:(id)parser context:(id)context foundCharacters:(id)characters;
- (void)parser:(id)parser context:(id)context foundIgnorableWhitespace:(id)whitespace;
@end

#endif /* IMToSuperParserFrame_h */
