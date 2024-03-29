//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.3.2.0.0
//
#ifndef RUIObjectModelDelegate_Protocol_h
#define RUIObjectModelDelegate_Protocol_h
@import Foundation;

@protocol RUIObjectModelDelegate <NSObject>
/* instance methods */
- (id)parentViewControllerForObjectModel:(id)model;
@optional
/* instance methods */
- (id)viewControllerForAlertPresentation;
- (id)visibleElementWithIdentifier:(id)identifier;
- (void)objectModel:(id)model didNavigateBackFromController:(id)controller withGesture:(BOOL)gesture;
- (void)objectModel:(id)model elementDidChange:(id)change;
- (void)objectModel:(id)model pressedLink:(id)link httpMethod:(id)method completion:(id /* block */)completion;
- (BOOL)objectModel:(id)model shouldShowModalHTMLViewWithURL:(id)url;
- (BOOL)objectModel:(id)model shouldDisplayNamedElement:(id)element page:(id)page;
- (void)objectModel:(id)model page:(id)page toggledEditing:(BOOL)editing;
- (void)objectModelDidChange:(id)change;
- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)model page:(id)page;
- (BOOL)objectModel:(id)model page:(id)page deletedTableRow:(id)row atIndexPath:(id)path withName:(id)name;
- (BOOL)objectModel:(id)model page:(id)page deletedTableRow:(id)row atIndexPath:(id)path withURL:(id)url httpMethod:(id)method;
- (id)objectModel:(id)model tableHeaderViewForAttributes:(id)attributes page:(id)page;
- (id)objectModel:(id)model tableFooterViewForAttributes:(id)attributes page:(id)page;
- (void)objectModel:(id)model configureTableSection:(id)section page:(id)page;
- (void)objectModel:(id)model configureTableView:(id)view page:(id)page;
- (void)objectModel:(id)model configureTableRow:(id)row page:(id)page;
- (Class)objectModel:(id)model customHeaderClassForSection:(id)section;
- (Class)objectModel:(id)model customFooterClassForSection:(id)section;
- (Class)objectModel:(id)model customTableCellClassForTableViewRow:(id)row;
- (void)objectModel:(id)model willLoadLinkURL:(id)url attributes:(id)attributes;
- (void)objectModelPressedBack:(id)back;
- (void)objectModel:(id)model pressedLink:(id)link httpMethod:(id)method;
- (void)objectModel:(id)model pressedButton:(id)button attributes:(id)attributes;
@end

#endif /* RUIObjectModelDelegate_Protocol_h */
