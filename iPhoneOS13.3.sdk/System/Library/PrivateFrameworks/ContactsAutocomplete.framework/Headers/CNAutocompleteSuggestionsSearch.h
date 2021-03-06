//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSearch-Protocol.h>

@class CNContactStore;

@interface CNAutocompleteSuggestionsSearch : NSObject <CNAutocompleteSearch>
{
    CNContactStore *_contactStore;
}

+ (NSUInteger)charactersThreshold;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
// - (void).cxx_destruct;
- (id /* CDUnknownBlockType */)resultTransformWithFactory:(id)arg1 properties:(id)arg2;
- (id /* CDUnknownBlockType */)resultTransformWithRequest:(id)arg1;
- (id)convertContacts:(id)arg1 request:(id)arg2;
- (id)suggestedContactsForRequest:(id)arg1 error:(id )arg2;
- (id)executeRequest:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)initWithContactStore:(id)arg1;
- (id)init;

@end

