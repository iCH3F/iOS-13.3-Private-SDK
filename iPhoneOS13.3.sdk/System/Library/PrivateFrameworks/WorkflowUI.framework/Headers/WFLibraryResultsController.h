//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFRunnableLibraryResultsController.h>

#import <WorkflowUI/WFLibraryWorkflowCellDelegate-Protocol.h>

@class NSString, UISearchBar, WFDatabaseResult;

@interface WFLibraryResultsController : WFRunnableLibraryResultsController <WFLibraryWorkflowCellDelegate>
{
    BOOL _searching;
    NSString *_searchText;
    UISearchBar *_legacySearchBar;
    WFDatabaseResult *_allWorkflows;
}

+ (Class)libraryWorkflowCellClass;
@property(readonly, nonatomic) WFDatabaseResult *allWorkflows; // @synthesize allWorkflows=_allWorkflows;
@property(retain, nonatomic) UISearchBar *legacySearchBar; // @synthesize legacySearchBar=_legacySearchBar;
@property(nonatomic, getter=isSearching) BOOL searching; // @synthesize searching=_searching;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
// - (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)visibleWorkflowsQueryChanged;
- (id)searchPredicate;
- (id)initWithWorkflows:(id)arg1 collectionView:(id)arg2 runCoordinator:(id)arg3;

@end

