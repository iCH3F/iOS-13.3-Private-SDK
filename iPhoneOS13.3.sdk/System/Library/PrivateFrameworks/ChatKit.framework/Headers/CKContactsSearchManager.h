//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CNAutocompleteSearchConsumer-Protocol.h>
#import <ChatKit/CNAutocompleteUIFetchDelegate-Protocol.h>

@class CNAutocompleteSearchManager, NSArray, NSCharacterSet, NSMutableArray, NSNumber, NSString;
@protocol CKContactsSearchManagerDelegate;

@interface CKContactsSearchManager : NSObject <CNAutocompleteSearchConsumer, CNAutocompleteUIFetchDelegate>
{
    BOOL _suppressGroupSuggestions;
    BOOL _biasForOutgoingInteraction;
    id <CKContactsSearchManagerDelegate> _delegate;
    NSArray *_enteredRecipients;
    CNAutocompleteSearchManager *_searchManager;
    NSCharacterSet *_emojiCharacterSet;
    NSMutableArray *_searchResults;
    NSNumber *_currentSearchTaskID;
    NSString *_searchText;
}

@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) NSNumber *currentSearchTaskID; // @synthesize currentSearchTaskID=_currentSearchTaskID;
@property(retain, nonatomic) NSMutableArray *searchResults; // @synthesize searchResults=_searchResults;
@property(retain, nonatomic) NSCharacterSet *emojiCharacterSet; // @synthesize emojiCharacterSet=_emojiCharacterSet;
@property(retain, nonatomic) CNAutocompleteSearchManager *searchManager; // @synthesize searchManager=_searchManager;
@property(nonatomic) BOOL biasForOutgoingInteraction; // @synthesize biasForOutgoingInteraction=_biasForOutgoingInteraction;
@property(nonatomic) BOOL suppressGroupSuggestions; // @synthesize suppressGroupSuggestions=_suppressGroupSuggestions;
@property(retain, nonatomic) NSArray *enteredRecipients; // @synthesize enteredRecipients=_enteredRecipients;
@property(nonatomic) __weak id <CKContactsSearchManagerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)getSupplementalGroupsForSearchQuery:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)createAutocompelteGroupMembersFromParticipants:(id)arg1;
- (id)participantMatchResultsForSearchTerm:(id)arg1;
- (id)participantMatchGroupResults;
- (BOOL)shouldIncludeGroupInResults:(id)arg1;
- (id)matchingConversationWithGuid:(id)arg1;
- (id)nameGroupSearchResults;
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)finishedTaskWithID:(id)arg1;
- (_NSRange)_rangeForSearchTerm:(id)arg1 inTarget:(id)arg2 tokenizedByCharacterSet:(id)arg3;
- (void)finishedSearchingForAutocompleteResults;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (id)_filterGroupResults:(id)arg1;
- (id)_cullOldResults:(id)arg1;
- (id)_sortResultsByDate:(id)arg1;
- (id)_sortSearchResultsWithCoreRecentsResults:(id)arg1 displayNameMatches:(id)arg2 participantNameMatches:(id)arg3;
- (void)removeRecipient:(id)arg1;
- (void)didSelectRecipient:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)cancelSearch;
- (void)searchWithText:(id)arg1;
- (id)init;
- (void)dealloc;

@end

